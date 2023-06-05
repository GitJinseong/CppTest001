

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
    //ProjectHard();
    ProjectVeryHard();
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
        // 길을 걷는 사람 1
        char board[5] = { 0, };
        // { board를 초기화 하는 로직
        for (int i = 0; i < 5; i++)
        {
            board[i] = '*';
            if (i == whileValue)
            {
                board[whileValue] = '0';
            }
        }

        // } board를 초기화 하는 로직

        // { board를 출력하는 로직
        for (int i = 0; i < 5; i++)
        {
            printf("%c ", board[i]);
        }

        if (whileValue == 6)
        {
            break;
        }

        _getch();

        whileValue++;
        printf("\n\n");
        // } board를 출력하는 로직
    }
}   

void ProjectVeryHard()
{
    int whileValue = 0;
    char inputValue;

    while (true)
    {
        // 길을 걷는 사람 1
        char board[5] = { 0, };
        // { board를 초기화 하는 로직
        for (int i = 0; i < 5; i++)
        {
            board[i] = '*';
            if (i == whileValue)
            {
                board[whileValue] = '0';
            }
        }

        // } board를 초기화 하는 로직

        // { board를 출력하는 로직
        for (int i = 0; i < 5; i++)
        {
            printf("%c ", board[i]);
        }

        printf("\n\n");
        // } board를 출력하는 로직

        inputValue = _getch();

        switch (inputValue)
        {
        case 'a':
            whileValue++;
            break;
        case 'd':
            whileValue--;
            break;
        default:
            break;
        }
    }
}