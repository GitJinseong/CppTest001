
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <Windows.h>

using namespace std;

void Description004();
void DescShuffle();
void Shuffle(int* ptrArray, int arraySize, int shuffleCount);
void ShuffleOnce(int* firstNumber, int* secondNumber);

int main()
{
    //Description004();
    DescShuffle();
}

void Description004()
{
    // 포인터 직접 쳐보기
    int number = 100;
    int* ptrNumber = &number; // int*(포인터)를 사용해야 주소 값을 받을 수 있다.

    printf("number 변수의 주소는 : %p, 할당된 값은 : %d \n", &number, number); // %p는 포인터를 호출할 때 사용
    printf("ptrNumber 변수의 주소는 : %p, 할당된 값은 : %p, 역참조한 값: %d\n",
        &ptrNumber, ptrNumber, *ptrNumber); // %p는 포인터(주소)를 호출할 때 사용
    // %d로 호출할 경우 이상한 값 출력
}

void DescShuffle()
{
    // { 배열의 선언과 초기화
    int numbers[10] = { 0, };
    for (int i = 0; i < 10; i++)
    {
        numbers[i] = i + 1;
    }
    // } 배열의 선언과 초기화

    // { 배열의 출력
    printf("Shuffle 하기 전\n\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n\n");
    // } 배열의 출력

    // 셔플 함수 호출
    Shuffle(numbers, 10, 200);

    // { 배열의 출력
    printf("Shuffle 한 후\n\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n\n");
    // } 배열의 출력
        // Description()
}

void Shuffle(int* ptrArray, int arraySize, int shuffleCount)
{
    int randomIndex1, randomIndex2 = 0;
    srand(time(NULL));

    for (int i = 0; i < shuffleCount; i++)
    {
        randomIndex1 = rand() % arraySize;
        randomIndex2 = rand() % arraySize;
        ShuffleOnce(ptrArray + randomIndex1, (ptrArray + randomIndex2));
    }
    printf("\n");
}

// 첫 번째 값과 , 두 번째 값을 한 번만 셔플한다.
// 해당 함수의 경우 중복 값은 나오지 않는다.
// 최악의 경우 섞이지 않는다.
void ShuffleOnce(int* firstNumber, int* secondNumber)
{
    int temp = 0;
    temp = *firstNumber;
    *firstNumber = *secondNumber;
    *secondNumber = temp;
}   // ShuffleOnce()