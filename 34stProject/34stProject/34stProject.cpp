

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

void ProjectHard();
void ProjectVeryHard();

/// <summary>
/// 
/// </summary>
/// <returns></returns>
int main()
{
    ProjectHard();
}

// 0 * * * *
// 위의 출력 결과에서 엔터를 칠 때 마다 
// 한 칸씩 0을 움직이기
// 배열 사용해서 아래처럼 별을 5개 찍어보기.
// ex) * * * * *
// 배열 사용해서 아래처럼 0을 오른쪽으로 이동하며 찍어보기.
// 0 * * * *    ->      * 0 * * *       Press Any Key
// * 0 * * *    ->      * * 0 * *       Press Any Key
// ...          ->      * * * * 0       Press Any Key
//위의 프로그램을 수정해서 a로 0이 왼쪽, d로 0이 오른쪽 이동 가능하도록 만들기(very hard).
//좌우 이동가능
void ProjectHard()
{
    int whileValue = 0;

    while (true)
    {
        if (whileValue == 6)
        {
            break;
        }

        char board[5] = { 0, };

        for (int i = 0; i < 5; i++)
        {

            board[i] = '*';

            if (i == whileValue)
            {
                board[whileValue] = '0';
            }

            printf("%c ", board[i]);
        }

        _getch();
        printf("\n\n");

        whileValue++;
    }
}