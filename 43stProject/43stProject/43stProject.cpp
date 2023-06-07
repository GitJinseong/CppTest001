

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

using namespace std;

void StartCardGame();
void ShuffleNumber(char** firstNumber, char** secondNumber);

int main()
{
    StartCardGame();
}


// [과제]
// 트럼프 카드 1장을 랜덤하게 뽑아서 출력하는 프로그램 만들기
// 힌트1.	int cards[52] = { 0, };
//	        char cardPattern[4] = ('♠', '◇', '♡', '♣');
// 힌트2. A, 2, 3, 4, 5, 6, 7, 8, 9, 10, J, Q, K
// (한 무늬당 13장씩 존재한다.)
// 
// 출력 예시
// ---------
// │♠5     │
// │       │
// │       │
// │       │
// │     ♠5│ 
// ---------
//
// [로직]
// 모양 배열 만들기
// 숫자 배열 만들기
// 셔플하기
// 출력시 모양 배열과 / 숫자 배열 출력하기
void StartCardGame()
{
    // char 변수명[길이][용량] 이런식으로 사용가능하다.
    // 원래는 문자 하나만 저장 할수 있지만 이렇게하면 여러 문자를 저장할 수 있다. 
    char cardPattern[4][8] = {"Spade", "Diamond", "Heart", "Clover"};
    char cardNumber[13][3] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};

    const int SHUFFLE_COUNT = 100;
    int randomIndex1, randomIndex2 = 0;
    int randomIndex3, randomIndex4 = 0;

    srand(time(NULL));

    for (int i = 0; i < SHUFFLE_COUNT; i++)
    {

    }

    cout << cardPattern[0] << " / " << cardNumber[0];
}


void ShuffleNumber(char* firstNumber,  char* secondNumber)
{
    cout << *firstNumber;
    char temp = 0;
    temp = *firstNumber;
    *firstNumber = *secondNumber;
    *secondNumber = temp;
}

// 위 방법은 나중에 할 수 있따.
// 현재 배운 방법으로는 어렵다.