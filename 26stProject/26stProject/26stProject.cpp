

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

/// <summary>
/// 지난번에 만들었던 크리티컬 데미지 주는 함수 수정해서
/// 60% 확률로 크리티컬 데미지 주는 함수 만들기
/// 1. Loop 사용해서 종료 입력 전까지 반복
/// 2. 플레이어가 어떤 상태인지 출력해서 보여줄 것.
/// 2 - 1. 왜 크리티컬인지, 아닌지 알 수 있어야 함.
/// 3. 매직 넘버(나만이 알수 있는 넘버) 사용금지!
/// 4. const int 변수(대문자)로 초기에 모두가 알 수 있게 선언해야함.
/// 5. 성공시 크리티컬 데미지 150%
/// </summary>
void CriticalDamageOutput(); // 함수 위에 '/' 세 번누르면 함수전용 <summary> 주석나옴

int main()
{
    CriticalDamageOutput();
}

void CriticalDamageOutput()
{
    // 상수(값 수정불가) 변수
    const float DAMAGE = 10; // 기본 데미지 10
    const float CRITICAL_DAMAGE = 1.5; // 크리티컬 데미지 150%
    const int CRITICAL_CHANCE = 6; // 크리티컬 확률 60%
    const int MONSTER_HP = 30; // 몬스터 체력 1000

    // 인트 변수
    int mobHp = MONSTER_HP; // 상수로 등록된 몬스터 체력 변수 값으로 변경.
    int movement = true; // false시 while문 종료
    int criticalSuccess = false; // true시 크리티컬 성공

    // 플롯 변수
    float finalDamage; // 최종 데미지

    // 캐릭터 변수
    char inputValue; // 입력 값 저장

    // 반복문
    // movement가 false가 될 경우 중단
    while (movement == true)
    {
        // 랜덤 함수 SID값 변경
        srand(time(NULL));

        // 크리티컬 성공/실패 계산
        printf("크리티컬 확률 계산중...\n\n\n\n");

        // 1초 대기
        Sleep(1000);
        
        // 크리티컬 확률 계산
        criticalSuccess = rand() % 10 + 1;
        
        // 크리티컬 성공여부 출력
        printf("%s\n", (criticalSuccess <= CRITICAL_CHANCE) ? "▶크리티컬 성공!\n" : "▶크리티컬 실패..\n");

        // 크리티컬 성공확률 출력
        printf("크리티컬 확률( %d ) <= 크리티컬 성공확률( %d )\n\n", criticalSuccess, CRITICAL_CHANCE);

        // 데미지 출력
        finalDamage = criticalSuccess <= CRITICAL_CHANCE ? DAMAGE * CRITICAL_DAMAGE : DAMAGE;
        printf("%.2f", finalDamage); // %.2f를 하면 소수점이 두자리만 출력된다.
        printf(" 데미지를 가했습니다.\n\n\n");                   // %.4f의 경우 소수점이 네자리 출력된다.

        // 몬스터 체력 계산 & 출력
        mobHp = mobHp - finalDamage;
        printf("남은 몬스터의 체력 : %d \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n", mobHp);

        // 몬스터의 체력이 0일 경우
        if (mobHp <= 0)
        {
            // 화면 지우기
            system("CLS");
            // 0.1초 대기
            Sleep(100);
            printf("\n\n\n\n\n몬스터가 사망했습니다.\n\n\n\n\n\n\n\n");
            break;
        }

        // 안내문구 출력
        printf("프로그램을 다시 시작하시려면 아무키를 입력해주세요\n");
        printf("프로그램을 종료하시려면 'q' 또는 'Q'를 입력해주세요.\n\n\n\n");

        // 사용자 입력 값 받기
        // 한 글자만 받는다.
        inputValue = _getch();
        // 스위치문(입력받은 변수)
        switch (inputValue)
        {
            // 'q'를 눌렀을 경우
            case 'q' :
            printf("프로그램을 종료합니다.\n\n");
            // 반복 중단
            movement = false;
            // switch문 나가기
            break;

            // 'Q'를 눌렀을 경우
            case 'Q' :
            printf("프로그램을 종료합니다.\n\n");
            // 반복 중단
            movement = false;
            // switch문 나가기
            break;

            // 아무키를 눌렀을 경우
            default :
            // 0.1초 대기
            Sleep(100);
            // 화면 지우기
            system("CLS");
        }
    }
}