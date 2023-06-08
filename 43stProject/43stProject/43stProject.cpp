

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

using namespace std;

void StartCardGame();

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
void StartCardGame()
{
    // char 변수명[길이][용량] 이런식으로 사용가능하다.
    // 원래는 문자 하나만 저장 할수 있지만 이렇게하면 여러 문자를 저장할 수 있다. 
    char cardPattern[4][8] = {"Spade", "Diamond", "Heart", "Clover"};
    char cardNumber[13][3] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};

    while (true)
    {
        int randomIndex1, randomIndex2 = 0;

        srand(time(NULL));

        randomIndex1 = rand() % 4;
        randomIndex2 = rand() % 13;

        cout << cardPattern[randomIndex1] << " / " << cardNumber[randomIndex2] << "\n";

        _getch();

        Sleep(1000);
    }
}
// 시그니처가 같을 경우 *변수명 없이 지역 함수를 호출할 수 있다.