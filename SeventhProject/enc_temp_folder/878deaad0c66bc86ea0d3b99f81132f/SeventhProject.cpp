

#include <iostream>

void PrintFunc(int age);    // main 함수보다 먼저 내가 만든 함수가 이런 모양이다
                            // 라고 알려주는 역할. 전방 선언이라고 한다.
                            // 원래는 main 함수 보다 아래에 만들면 작동하지 않는다.
void ROCK_PAPER_SCISSORS(int num);
void WIN();
void LOSE();
void DRAW();
void ERROR();

int main()
{
    //PrintFunc(27);

    printf("숫자 값을 입력해주세요(1=가위, 2=바위, 3=보) -> ");
    int inputNumber = 0;
    scanf_s("%d", inputNumber); // 입력 받는 함수

    ROCK_PAPER_SCISSORS(inputNumber);
}

//이런게 함수의 정의다.
void PrintFunc(int age)
{
    printf("최진성, 나이: %d, 010-1234-5678\n\n", age);
}


// 가위, 바위, 보 함수 만들기
// 플레이어는 1, 2, 3 중에 하나를 입력 받는다.
// 컴퓨터는 숫자 2를 가지고 있다.
// 1은 가위, 2는 바위, 3은 보다.
// 플레이어의 입력에 따라 플레이어의 승리 혹은 패배를 출력한다.
// 3일 경우 승리, 2일 경우 무승부, 1은 패배

void ROCK_PAPER_SCISSORS(int num)
{
    num == 1 ? LOSE() : num == 2 ? DRAW() : num == 3 ? WIN() : ERROR();
}

void WIN()
{
    printf("승리");
}

void LOSE()
{
    printf("패배");
}

void DRAW()
{
    printf("무승부");
}

void ERROR()
{
    printf("지정한 값을 벗어났습니다.");
}