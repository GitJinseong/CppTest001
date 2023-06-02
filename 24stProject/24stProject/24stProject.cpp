
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void ODD_GAME();
void COMPARISONn();

int main()
{
    ODD_GAME();
}


// 홀짝 게임
// 컴퓨터가 주사위를 2번 굴린다.
// 플레이어는 숫자를 미리 볼 수 있다. 총합이 홀수인지, 짝수인지 출력한다. (Easy)
// 플레이어는 숫자를 미리 볼 수 없다. 플레이어가 홀, 짝을 맞춰야 한다. (Normal)
void ODD_GAME()
{
    // 변수 선언
    int randomNumber1, randomNumber2, total1, total2, point = 0;
    char inputValue;

    while (1)
    {
        // 랜덤 함수 SID값 변경
        srand(time(NULL));

        // 랜덤 값 만들기
        randomNumber1 = rand() % 6 + 1;
        randomNumber2 = rand() % 6 + 1;

        // 총합 계산
        total1 = randomNumber1 + randomNumber2;

        // 입력 값 받기(1=홀, 0=짝)
        printf("[홀/짝 게임!]\n");
        printf("컴퓨터가 주사위를 2번 굴려서 나온 값의 총합을 맞추세요!\n");
        printf("홀수로 배팅하시려면 1번\n짝수로 배팅하시려면 0번을 눌러주세요!\n: ");

        inputValue = _getch() - 48; // char 타입의 변수에 0이나 1이 들어가면
                                    // int와 값이 다르다. 왜냐하면
                                    // char의 아스키 코드표를 보면 0은 48, 1은 49이기 때문.
        // 홀/짝을 구분하기
        total2 = total1 % 2;

        if (total2 == inputValue)
        {
            printf("\n\n▶▶▶정답입니다!\n");
            point++;
            printf("▶▶▶주사위를 돌려서 나온 값 : %d\n",total1);
            printf("▶▶▶맞춘 횟수 : %d\n\n", point);
        }
        else
        {
            printf("\n\n▶▶▶틀렸습니다!\n");
            printf("▶▶▶주사위를 돌려서 나온 값 : %d\n", total1);
            printf("▶▶▶맞춘 횟수 : %d\n\n", point);
        }
    }
}