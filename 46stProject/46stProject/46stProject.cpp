

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

using namespace std;

void BubbleSort(int* numbers, int arraySize);
void SortSelection(int* numbers, int arraySize);
void InsertionSort(int* numbers, int arraySize);

int main()
{
    int numbers[100] = { 0, };
    int* ptrNumbers = &numbers[0];
    int arraySize = 0;

    for (int i = 0; i < 100; i++)
    {
        if (arraySize == 0)
        {
            cout << "몇 개의 숫자를 입력하시겠습니까?(1~99) : ";
            cin >> arraySize;
        }
        else if (arraySize == i)
        {
            break;
        }
        cin >> numbers[i];
    }

    // 버블 정렬
    //BubbleSort(ptrNumbers, arraySize);
    // 선택 정렬
    //SortSelection(ptrNumbers, arraySize);
    // 삽입 정렬
    InsertionSort(ptrNumbers, arraySize);
}

// 버블 정렬
void BubbleSort(int* numbers, int arraySize)
{
    int count = 0;

    // 배열 만들기
    while (true)
    {
        if (count == arraySize)
        {
            Sleep(100000000);
        }

        // 버블 정렬은 인접한 인덱스를 처음부터 계속 비교한다.
        for (int i = count; i < arraySize; i++)
        {
            if (*(numbers + count) >= *(numbers + i))
            {
                int temp = 0;
                temp = *(numbers + i);
                *(numbers + i) = *(numbers + count);
                *(numbers + count) = temp;
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
void SortSelection(int* numbers, int arraySize)
{
    int count = 0;

    // 배열 만들기
    while (true)
    {
        if (count == arraySize)
        {
            Sleep(1000000000);
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

// 삽입 정렬
void InsertionSort(int* numbers, int arraySize)
{
    int count = 0;

    while (true)
    {
        // 정렬을 다 출력하면 무한 대기한다.
        if (count == arraySize + 1)
        {
            Sleep(1000000000);
        }

        // 정렬 과정 출력
        for (int i = 0; i < arraySize; i++)
        {
            printf("%d ", *(numbers + i));
        }

        // 왼쪽 인덱스가 오른쪽 인덱스 보다 크고 and 카운트가 1 이상일 경우
        if (*(numbers + count) >= *(numbers + count) && count > 0)
        {
            for (int i = 0; i < count; i++)
            {
                for (int j = 0; j < count; j++)
                {
                    if (*(numbers + j) >= *(numbers + j + 1))
                    {
                        int temp = 0;
                        temp = *(numbers + j + 1);
                        *(numbers + j + 1) = *(numbers + j);
                        *(numbers + j) = temp;
                    }
                }
            }

            // 맨 끝에 밀려난 숫자를 건드리지 않게 하기 위해
            // 배열 크기에서 -2를 한다.
            if (count <= arraySize - 2 ) // 맨 끝에 밀려난 숫자는 그대로 냅둔다.
            {
                int temp = 0;
                temp = *(numbers + count + 1);
                *(numbers + count + 1) = *(numbers + count);
                *(numbers + count) = temp;
            }
        }

        _getch();

        cout << "\n";

        count++;
    }
}
