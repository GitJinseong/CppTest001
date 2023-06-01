
#include <iostream>

using namespace std;

// 유저에게 정사각형의 사이즈를 입력 받아서
// '*'로 출력하는 프로그램 만들기
// 1.유저 입력은 3 ~ 10 사이로만 입력한다. 
int main()
{
    // 정수형 변수
    int size;
    int whileCount;

    // 입출력 하기
    printf("3 ~ 10 사이의 값을 입력하시오.\n→");
    scanf_s("%d",&size);

    whileCount = size * size;

    // 정사각형 만들기
    if (size >= 3 && size <= 10)
    {
        while (whileCount >= 1)
        {
            if ((whileCount - 1) % size == 0)
            {
                cout << "* \n";
            }
            else
            {
                cout << "* ";
            }
            whileCount -= 1;
        }
    }
    else
    {
        cout << "3 ~ 10 사이의 숫자를 입력해주세요.\n";
    }
}
