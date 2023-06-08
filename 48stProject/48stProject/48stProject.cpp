
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

using namespace std;

void StartMovingGame();

int main()
{
    StartMovingGame();
}

// 해당되는 범위 (5x5) 내에서 방향키를 입력 받아 
// 움직이는 프로그램을 만들어라
// 예시는 다음과 같다.
// * * * * *
// * * * * *
// * * 0 * *
// * * * * *
// * * * * *
// 범위를 벗어나면 안된다.
void StartMovingGame()
{
    const int FIELD_SIZE_X = 21;
    const int FIELD_SIZE_Y = 21;

    char field[FIELD_SIZE_Y][FIELD_SIZE_X] = { 0, };
    char inputValue;
    int location_X = FIELD_SIZE_X / 2;
    int location_Y = FIELD_SIZE_Y / 2;

    while (true)
    {
        for (int y = 0; y < FIELD_SIZE_Y; y++)
        {
            for (int x = 0; x < FIELD_SIZE_X; x++)
            {
                // 시작 지점
                if (x == location_X && y == location_Y)
                {
                    field[y][x] = '0';
                    continue;
                }

                if ((x == 0 or x == FIELD_SIZE_X - 1) or (y == 0 or y == FIELD_SIZE_Y - 1))
                {
                    field[y][x] = '#';
                    continue;
                }

                field[y][x] = '*';
            }
        }

        for (int y = 0; y < FIELD_SIZE_Y; y++)
        {
            for (int x = 0; x < FIELD_SIZE_X; x++)
            {
                cout << " " << field[y][x] << " ";
            }

            cout << "\n\n";
        }

        inputValue = _getch();

        switch (inputValue)
        {
        case 'w':
            location_Y = location_Y > 1 ? location_Y - 1 : location_Y;
            break;

        case 's':
            location_Y = location_Y < (FIELD_SIZE_Y - 2) ? location_Y + 1 : location_Y;
            break;

        case 'a':
            location_X = location_X > 1 ? location_X - 1 : location_X;
            break;

        case 'd':
            location_X = location_X < (FIELD_SIZE_X - 2) ? location_X + 1 : location_X;
            break;

        default:
            break;
        }

        system("CLS");
    }

}