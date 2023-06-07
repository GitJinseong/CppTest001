
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

using namespace std;

void StartLotto();
void ShuffleLotto(int* number, int* number2);

int main()
{
    StartLotto();
}

// [실습]
// 로또번호 6개 Sleep() 활용해서 땅땅땅 나오도록 프로그램 만들기 (중복 없어야 함.)
void StartLotto()
{
    while (true)
    {
        int numbers[45];

        for (int i = 0; i < 45; i++)
        {
            numbers[i] = i + 1;
        }

        const int shuffleCount = 1000;
        int randomIndex, randomIndex2 = 0;

        srand(time(NULL));

        for (int i = 0; i < shuffleCount; i++)
        {
            randomIndex = rand() % 45;
            randomIndex2 = rand() % 45;

            ShuffleLotto(&numbers[randomIndex], &numbers[randomIndex2]);
        }

        for (int i = 0; i < 6; i++)
        {
            Sleep(200);
            cout << numbers[i] << " ";
        }

        _getch();
        cout << "\n\n";
    }
}

void ShuffleLotto(int* number, int* number2)
{
    int temp = 0;
    temp = *number;
    *number = *number2;
    *number2 = temp;
}