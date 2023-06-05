
#include <iostream>

using namespace std;

void Decription004();

int main()
{
    Decription004();
}

void Decription004()
{
    /*int numbers[5];

    // F10을 눌러서 디버그를 종료하지 않고 변경사항을 적용한다.
    for (int i = 0; i < 5; i++)
    {
        numbers[i] = (i + 3);
        printf("배열의 값 은 %d", numbers[i]);
    }

    int number1 = 1;
    int number2 = 2;
    int number3 = 3;
    int number4 = 4;
    int number5 = 5;
    */

    // 구구단 출력하는 프로그램 만들기
    // 몇단 출력할 것인지 ex 2x1 = 2
    // 앞단, 뒷단 둘다 배열 사용하기.

    const int MAX_ARRAY = 9;

    // 배열 초기화
    int lineCount[9] = { 0, };

    // 배열을 사용하여 구구단 만들기
    // 비어 있는 배열에 갑을 넣어서 만들어야 한다.
    for (int i = 1; i <= MAX_ARRAY; i++)
    {
        lineCount[i - 1] = i;

        for (int j = 1; j <= MAX_ARRAY; j++)
        {
            cout << lineCount[i - 1] << " x " << j << " = " << lineCount[i - 1] * j << "\n";
        }

    }

}