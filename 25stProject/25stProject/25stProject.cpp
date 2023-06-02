
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void Description006();

int main()
{
    Description006();
}

void Description006()
{
    int randomNumber = 0;
    const int MAX_DICE_VALUE = 6;
    srand(time(NULL));

    printf("주사위 프로그램\n");
    printf("컴퓨터가 뽑은 3개의 주사의 값 => ");
    for (int i = 0; i < 3; i++)
    {
        randomNumber = (rand() % MAX_DICE_VALUE) + 1;
        printf("%d ", randomNumber);
        Sleep(1000); // 이 함수는 첫 글자가 대문자이다!
                     // 1000당 1초
    }
    Sleep(1000);    // [최신] 앞에 대문자로 시작하는건 파스칼 스타일
                    // [구형] 앞에 소문자로 시작하는건 헝가리 스타일
    printf("\n\n");
    printf("프로그램 종료\n\n");
}