
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <iomanip>

using namespace std;

// 전방 선언 //
void Choice();
int Gambling();
void Walking();
void Battle();

// 플레이어 스텟 //
int level; // 레벨
int hp; // 체력
int maxHp; // 최대 체력
int atk; // 공격력
int gold; // 소지금

/// <summary>
/// [간단한 텍스트 RPG]
/// 전역 변수와 함수들을 호출하여
/// 간단하게 rpg 게임을 구현한다.
/// 
/// [시스템 로직]
/// 선택 시스템
///     배틀 시스템
///         도박 시스템
///             전투 시스템
///             스텟 시스템
///         걷기 시스템
/// </summary>
int main()
{
    Choice();
}
// main()

/// <summary>
/// [선택 시스템]
/// 사용자에게 값을 입력 받아 선택지에 맞게 선택한다.
/// </summary>
void Choice()
{
    int movement = true;
    while (movement == true)
    {
        char inputValue;
        Sleep(500);
        cout << "\n\n\n\n\n" << setw(45) << "" << "1. 길을 걷는다.\n\n\n";
        cout << setw(45) << "" << "2. 상태창을 연다.\n\n\n";
        cout << setw(45) << "" << "3. 종료한다.\n\n\n\n\n";
        cout << setw(30) << "" << "▶ 다음중 해당 되는 키를 눌러 상호작용 하시오.\n\n" << setw(34) << "> ";
        inputValue = _getch();

        switch (inputValue)
        {
            // 걷는다
            case ('1'):
                system("CLS");
                movement = false;
                Walking();
                break;

            // 상태창 호출
            case ('2'):
                system("CLS");
                movement = false;
                break;
            
            // 종료한다
            case ('3'):
                system("CLS");
                movement = false;
                break;

            default:
                system("CLS");
                break;
        }
    }
}

/// <summary>
/// [도박 시스템]
/// 무언가 행동을 할 때 사용되는 시스템
/// 랜덤 함수를 사용하여 출력되는 랜덤 값을
/// 리턴하여 여러가지 시스템에 활용한다.
/// </summary>
int Gambling()
{
    // 변수 선언
    int randomValue;

    // 시드 값 변경
    srand(time(NULL));

    // 랜덤 값 출력
    randomValue = rand() % 10 + 1;

    if (randomValue > 5)
    {
        randomValue = 1;
    }
    else if (randomValue > 2)
    {
        randomValue = 2;
    }
    else
    {
        randomValue = 3;
    }

    // 값 리턴
    return randomValue;
}

/// <summary>
/// [걷기 시스템]
/// 50% 확률로 산으로 이동한다. -> 전투 발생 -> 선택지로
/// 30% 확률로 길로 이동한다. -> 선택지로
/// 20% 확률로 강으로 이동한다. -> 선택지로
/// </summary>
void Walking()
{
    // 문장 출력
    Sleep(500);
    cout << "\n\n\n\n\n" << setw(30) << "";
    // 당신은 알 수 없는 힘의 작용으로 어딘가로 이동합니다.
    Sleep(100); cout << "▶"; Sleep(100); cout << " "; Sleep(100); cout << "당"; Sleep(100); cout << "신"; Sleep(100); cout << "은"; Sleep(100); cout << " "; Sleep(100); cout << "알"; Sleep(100); cout << " "; Sleep(100); cout << "수"; Sleep(100); cout << " "; Sleep(100); cout << "없"; Sleep(100); cout << "는"; Sleep(100); cout << " "; Sleep(100); cout << "힘"; Sleep(100); cout << "의"; Sleep(100); cout << " "; Sleep(100); cout << "작"; Sleep(100); cout << "용"; Sleep(100); cout << "으"; Sleep(100); cout << "로"; Sleep(100); cout << " "; Sleep(100); cout << "어"; Sleep(100); cout << "딘"; Sleep(100); cout << "가"; Sleep(100); cout << "로"; Sleep(100); cout << " "; Sleep(100); cout << "이"; Sleep(100); cout << "동"; Sleep(100); cout << "합"; Sleep(100); cout << "니"; Sleep(100); cout << "다"; Sleep(100); cout << ".";
    Sleep(1000);
    system("CLS");
    cout << "\n\n\n\n\n\n\n\n\n\n\n" << setw(54) << "";
    Sleep(200);
    cout << "이"; Sleep(100); cout << "동"; Sleep(100); cout << "중";
    Sleep(100);
    cout << ".";
    Sleep(100);
    cout << ".";
    Sleep(100);
    cout << ".";

    // 변수 선언
    int gamblingValue = Gambling();

    // 장소 이동
    switch (gamblingValue)
    {
        case 1:
            system("CLS");
            Sleep(500);
            cout << "\n\n\n\n\n\n\n" << setw(45) << "" << "당신은 '산'으로 이동했습니다.\n\n\n\n\n";
            cout << setw(43) << "" << "▶ 아무키를 눌러 상호작용 하시오.\n\n" << setw(47) << "> ";
            gamblingValue = _getch();
            system("CLS");
            Choice();
            break;

        case 2:
            system("CLS");
            Sleep(500);
            cout << "\n\n\n\n\n\n\n" << setw(45) << "" << "당신은 '길'으로 이동했습니다.\n\n\n\n\n";
            cout << setw(43) << "" << "▶ 아무키를 눌러 상호작용 하시오.\n\n" << setw(47) << "> ";
            gamblingValue = _getch();
            system("CLS");
            Choice();
            break;

        case 3:
            system("CLS");
            Sleep(500);
            cout << "\n\n\n\n\n\n\n" << setw(45) << "" << "당신은 '강'으로 이동했습니다.\n\n\n\n\n";
            cout << setw(43) << "" << "▶ 아무키를 눌러 상호작용 하시오.\n\n" << setw(47) << "> ";
            gamblingValue = _getch();
            system("CLS");
            Choice();
            break;

        default:
            break;
    }
    
    Sleep(10000000);

}

/// <summary>
/// [배틀 시스템]
/// 플레이어의 최대 HP는 50.
/// 몬스터가 등장하고 전투는 자동.
/// 몬스터의 체력,공격력과 플레이어의 체력,공격력 -> 도박시스템 호출
/// 50% 확률로 플레이어가 회복 -> 도박시스템 호출
/// </summary>
void Battle()
{

}

void Profile()
{

}

/*
    시스템 로직 짜기

    선택 시스템
        배틀 시스템
            도박 시스템
                전투 시스템
                스텟 시스템

        걷기 시스템
*/