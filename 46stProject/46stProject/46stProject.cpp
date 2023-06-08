

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

using namespace std;

void SortAscending(int* numbers, int arraySize);
void SortAscending2(int* numbers, int arraySize);

int main()
{
    int numbers[100] = { 0, };
    int* ptrNumbers = &numbers[0];
    int arraySize = 0;

    for (int i = 0; i < 100; i++)
    {
        if (arraySize == 0)
        {
            cout << "몇 개의 숫자를 입력하시겠습니까?(1~100) : ";
            cin >> arraySize;
        }
        else if (arraySize == i)
        {
            break;
        }
        cin >> numbers[i];
    }

    // 버블 정렬
    // SortAscending(ptrNumbers, arraySize);
    // 선택 정렬
    SortAscending2(ptrNumbers, arraySize);
}

// 버블 정렬
void SortAscending2(int* numbers, int arraySize)
{
    int count = 0;

    // 배열 만들기
    while (true)
    {
        if (count == arraySize)
        {
            Sleep(1234567890);
        }

        // 버블 정렬은 인접한 인덱스를 처음부터 계속 비교한다.
        for (int i = count; i < arraySize; i++)
        {
            if (*(numbers + count) <= *(numbers + i + 1))
            {
                int temp = 0;
                temp = *(numbers + count);
                *(numbers + count) = *(numbers + i);
                *(numbers + i) = temp;
            }
        }

        for (int i = 0; i < arraySize; i++)
        {
            printf("%d ", *(numbers + i));
        }

        _getch();

        cout << "\n";

        count++;
    }
}

// 선택 정렬
void SortAscending2(int* numbers, int arraySize)
{
    int count = 0;

    // 배열 만들기
    while (true)
    {
        if (count == arraySize)
        {
            Sleep(1234567890);
        }

        // 선택 정렬은 이미 바꾼 인덱스는 무시하고 넘어간다.
        for (int i = count + 1; i < arraySize; i++)
        {
            if (*(numbers + count) >= *(numbers + i))
            {
                int temp = 0;
                temp = *(numbers + count);
                *(numbers + count) = *(numbers + i);
                *(numbers + i) = temp;
            }
        }

        for (int i = 0; i < arraySize; i++)
        {
            printf("%d ", *(numbers + i));
        }

        _getch();

        cout << "\n";

        count++;
    }
}
