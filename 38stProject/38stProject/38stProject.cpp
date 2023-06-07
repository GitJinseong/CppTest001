
#include <iostream>

using namespace std;

void PrintText_Normal();
void PrintText_Hard();
int CheckAlphabets(char text);

int main()
{
    //PrintText_Normal();
    PrintText_Hard();
}

// 문자열을 입력받아서 대문자 - 소문자 - 대문자 - 소문자, ... 순으로 수정해서 출력하는 프로그램 작성하기(Easy)
// 위의 프로그램을 수정해서 거꾸로 뒤집어서 출력하는 프로그램 작성하기 (Normal)
// 특수문자를 입력받은 경우 무시하기.
// 소문자는 대문자보다 값이 32 크다.
// 범위는 65~90 , 97~122 이다.
void PrintText_Normal()
{
    while (true)
    {
        int stringLength = 0;
        char text[300] = { 0, };

        cin >> text;

        for (int i = 0; text[i] < sizeof(text); i++)
        {
            // 텍스트를 전부 대문자로 바꾼다.
            //text[i] = text[i] = (text[i] >= 65 && text[i] <= 90) ? text[i] : text[i];

            if (CheckAlphabets(text[i]) == false)
            {
                text[i] = text[i] >= 65 && text[i] <= 90 ? text[i] + 32 : text[i] = ' ';
            }
            else
            {
                // 짝수의 경우 대문자
                if (stringLength % 2 == 0)
                {
                    text[i] = text[i] >= 97 ? text[i] - 32 : text[i] + 32;
                    stringLength++;
                }

                // 홀수의 경우 소문자
                else
                {
                    text[i] = text[i] >= 97 ? text[i] : text[i] + 32;
                    stringLength++;
                }
                cout << text[i];
            }
        }
    }

}

// 문자를 뒤집는다.
void PrintText_Hard()
{
    while (true)
    {
        int stringLength = 0;
        char text[300] = { 0, };

        cin >> text;

        // 순서를 뒤집는다.
        for (int i = sizeof(text)-1; i > -1; i--)
        {
            // 텍스트를 전부 소문자로 바꾼다.
            if (CheckAlphabets(text[i]) == false)
            {
                text[i] = text[i] >= 65 && text[i] <= 90 ? text[i] + 32 : text[i] = ' ';
            }

            // 순서에 맞게 대/소문자 변경하기.
            if (text[i] != ' ')
            {
                // 짝수의 경우 대문자
                if (stringLength % 2 == 0)
                {
                    text[i] = text[i] - 32;
                    stringLength++;
                }
                // 홀수의 경우 소문자
                else
                {
                    stringLength++;
                }
                cout << text[i];
            }
        }
    }

}

int CheckAlphabets(char text)
{
    int result;

    result = text >= 97 && text <= 122 ? true : false;

    return result;
}