

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

using namespace std;

void Desc002();

int main()
{
    Desc002();
}

void Desc002()
{
    // 다차원 배열
    char char_[25] = { 0, };
    char char2_[5][5] =
    {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };  // 25개의 배열을 5개씩 자른것.
    char char3_[5][5] = { 0, };

    for (int y = 0; y < 5; y++)
    {
        for (int x = 0; x < 5; x++)
        {
            if (x == 2 && y == 2)
            {
                char3_[2][2] = '0';
                continue;
            }
            char3_[y][x] = '*';
        }
    }

    for (int y = 0; y < 5; y++)
    {
        for (int x = 0; x < 5; x++)
        {
            printf("%c ", char3_[y][x]);
        }
        printf("\n");
    }


    printf("\n");

    for (int i = 0; i < 25; i++)
    {
        char_[i] = '*';
    }

    // 출력 부문
    for (int i = 0; i < 25; i++)
    {
        printf("%c ", char_[i]);

        if (i % 5 == 4)
        {
            printf("\n");
        }
    }
    printf("\n");
}