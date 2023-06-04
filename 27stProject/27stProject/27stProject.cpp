
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <iomanip> // 공백 함수 setw(int)를 사용할 때 필요함

using namespace std;

// 전방 선언 //
int Gambling();
void Choice();
void Walking();
void Battle();
void Profile();
void StatUpgrade();

// 플레이어 스텟 //
int level; // 레벨(이동시 1씩 상승)
int hp = 50; // 체력
int maxHp = 50; // 최대 체력
int atk = 5; // 공격력
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
    // 함수 호출
    //Choice();
    Battle();
}
// main()

/// <summary>
/// [선택 시스템]
/// 사용자에게 값을 입력 받아 선택지에 맞게 선택한다.
/// </summary>
void Choice()
{
    // 변수 선언
    int whileValue = true;

    // 반복문
    while (whileValue == true)
    {
        // 변수 선언
        char inputValue;

        // 문장 출력 > 로딩중...
        cout << "\n\n\n\n\n\n\n\n\n\n\n" << setw(52) << "" << "로"; Sleep(100); cout << "" << "딩"; Sleep(100); cout << "" << "중"; Sleep(100); cout << "" << "."; Sleep(100); cout << "" << "."; Sleep(100); cout << "" << ".";
        Sleep(300);
        system("CLS");

        // 문장 출력
        cout << "\n\n\n\n\n" << setw(47) << "" << "1. 길을 걷는다.\n\n\n";
        cout << setw(47) << "" << "2. 상태창을 연다.\n\n\n";
        cout << setw(47) << "" << "3. 종료한다.\n\n\n\n\n";
        cout << setw(34) << "" << "▶ 다음중 해당 되는 키를 눌러 상호작용 하시오.\n\n" << setw(38) << "> ";

        // 입력
        inputValue = _getch();

        system("CLS");

        // 스위치문
        switch (inputValue)
        {
            // '1'일 경우 > 걷는다
            case ('1'):
                // 변수 증감
                whileValue = false;

                // 함수 호출
                Walking();

                break;

            // '2'일 경우 > 상태창 호출
            case ('2'):
                // 변수 증감
                whileValue = false;

                Profile();

                break;
            
            // '3'일 경우 > 종료한다
            case ('3'):
                // 변수 증감
                whileValue = false;

                break;

            // 그 외
            default:
                // 문장 출력
                Sleep(300);
                cout << "\n\n\n\n\n\n\n\n\n\n\n" << setw(59) << "Error!";
                Sleep(1000);
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

    // 랜덤 값(시드) 초기화
    srand(time(NULL));

    // 랜덤 값 출력
    randomValue = rand() % 10 + 1;

    if (randomValue > 5) // 50% 산일 경우
    {
        randomValue = 1;
    }
    else if (randomValue > 2)
    {
        randomValue = 2; // 30% 길일 경우
    }
    else // 20% 강일 경우
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
    // 변수 선언
    int gamblingValue = Gambling();
    int gamblingValue2;
    int addGold;

    // 문장 출력 > 당신은 알 수 없는 힘의 작용으로 어딘가로 이동합니다.
    Sleep(500);
    cout << "\n\n\n\n\n\n" << setw(30) << "";
    Sleep(100); cout << "▶"; Sleep(100); cout << " "; Sleep(100); cout << "당"; Sleep(100); cout << "신"; Sleep(100); cout << "은"; Sleep(100); cout << " "; Sleep(100); cout << "알"; Sleep(100); cout << " "; Sleep(100); cout << "수"; Sleep(100); cout << " "; Sleep(100); cout << "없"; Sleep(100); cout << "는"; Sleep(100); cout << " "; Sleep(100); cout << "힘"; Sleep(100); cout << "의"; Sleep(100); cout << " "; Sleep(100); cout << "작"; Sleep(100); cout << "용"; Sleep(100); cout << "으"; Sleep(100); cout << "로"; Sleep(100); cout << " "; Sleep(100); cout << "어"; Sleep(100); cout << "딘"; Sleep(100); cout << "가"; Sleep(100); cout << "로"; Sleep(100); cout << " "; Sleep(100); cout << "이"; Sleep(100); cout << "동"; Sleep(100); cout << "합"; Sleep(100); cout << "니"; Sleep(100); cout << "다"; Sleep(100); cout << ".";
    Sleep(1000);
    system("CLS");
    // 문장 출력 > 이동중...
    cout << "\n\n\n\n\n\n\n\n\n\n\n" << setw(54) << "";
    Sleep(200);
    cout << "이"; Sleep(100); cout << "동"; Sleep(100); cout << "중";
    Sleep(100);
    cout << ".";
    Sleep(100);
    cout << ".";
    Sleep(100);
    cout << ".";
    system("CLS");

    // 장소 이동
    switch (gamblingValue)
    {
        case 1:
            // 변수 증감
            level++;

            Sleep(500);
            cout << "\n\n\n\n\n\n\n" << setw(45) << "" << "당신은 '산'으로 이동했습니다.\n\n\n\n\n";
            cout << setw(43) << "" << "▶ 아무키를 눌러 상호작용 하시오.\n\n" << setw(47) << "> ";

            // 입력
            gamblingValue2 = _getch();

            // 문장 출력 > 조사중...
            system("CLS");
            cout << "\n\n\n\n\n\n\n\n\n\n\n" << setw(54) << "";
            Sleep(200);
            cout << "조"; Sleep(100); cout << "사"; Sleep(100); cout << "중"; Sleep(100); cout << "."; Sleep(100); cout << "."; Sleep(100); cout << "."; Sleep(100);
            system("CLS");

            // 랜덤 값 초기화 & 계산
            srand(time(NULL));
            gamblingValue2 = rand() % 2;

            if (gamblingValue2 == 4)
            {
                cout << "\n\n\n\n\n\n\n\n" << setw(52) << "" << "[조사 결과]\n\n\n\n";
                cout << setw(45) << "" << "적이 출몰 하였습니다!!!";
                Sleep(2000);
                system("CLS");

                // 함수 호출
                Battle();
            }
            else
            {
                // 변수 증감
                hp = maxHp;
                addGold = gamblingValue * 7;
                gold = gold + addGold;

                cout << "\n\n\n\n\n\n\n\n" << setw(52) << "" << "[조사 결과]\n\n\n\n";
                cout << setw(36) << "" << "생명의 물을 발견하여 체력이 모두 회복됩니다!\n\n";
                cout << setw(45) << "" << "골드를 +" << addGold << " 획득 하였습니다!\n\n";
                cout << setw(45) << "" << "레벨이 1 상승 하였습니다!";
                Sleep(3000);
                system("CLS");

                // 함수 호출
                Choice();
            }
            break;

        case 2:
            // 변수 증감
            level++;

            Sleep(500);
            cout << "\n\n\n\n\n\n\n" << setw(45) << "" << "당신은 '길'으로 이동했습니다.\n\n\n\n\n";
            cout << setw(43) << "" << "▶ 아무키를 눌러 상호작용 하시오.\n\n" << setw(47) << "> ";

            // 입력
            gamblingValue2 = _getch();

            // 문장 출력 > 조사중...
            system("CLS");
            cout << "\n\n\n\n\n\n\n\n\n\n\n" << setw(54) << "";
            Sleep(200);
            cout << "조"; Sleep(100); cout << "사"; Sleep(100); cout << "중"; Sleep(100); cout << "."; Sleep(100); cout << "."; Sleep(100); cout << "."; Sleep(100);
            
            // 문장 출력
            system("CLS");
            cout << "\n\n\n\n\n\n\n" << setw(52) << "" << "[조사 결과]\n\n\n\n";
            cout << setw(45) << "" << "레벨이 1 상승 하였습니다!\n\n";

            // 랜덤 값 초기화 & 계산
            srand(time(NULL));
            gamblingValue2 = rand() % 2;

            if (gamblingValue2 == 1)
            {
                // 변수 증감
                addGold = gamblingValue * 9;
                gold = gold + addGold;

                // 문장 출력
                cout << setw(45) << "" << "골드를 +" << addGold << " 획득 하였습니다!";
                Sleep(3000);
                system("CLS");
            }
            else
            {
                // 문장 출력
                cout << setw(44) << "" << "아무것도 발견하지 못했습니다.";
                Sleep(3000);
                system("CLS");
            }

            // 함수 호출
            Choice();

            break;

        case 3:
            // 변수 증감
            level++;

            // 문장 출력
            Sleep(500);
            cout << "\n\n\n\n\n\n\n" << setw(45) << "" << "당신은 '강'으로 이동했습니다.\n\n\n\n\n";
            cout << setw(43) << "" << "▶ 아무키를 눌러 상호작용 하시오.\n\n" << setw(47) << "> ";

            // 입력
            gamblingValue2 = _getch();

            // 문장 출력 > 조사중...
            system("CLS");
            cout << "\n\n\n\n\n\n\n\n\n\n\n" << setw(54) << "";
            Sleep(200);
            cout << "조"; Sleep(100); cout << "사"; Sleep(100); cout << "중"; Sleep(100); cout << "."; Sleep(100); cout << "."; Sleep(100); cout << "."; Sleep(100);
            
            // 문장 출력
            system("CLS");
            cout << "\n\n\n\n\n\n\n" << setw(52) << "" << "[조사 결과]\n\n\n\n";
            cout << setw(45) << "" << "레벨이 1 상승 하였습니다!\n\n";

            // 랜덤 값 초기화 & 계산
            srand(time(NULL));
            gamblingValue2 = rand() % 2;

            if (gamblingValue2 == 1)
            {
                // 변수 증감
                addGold = gamblingValue * 9;
                gold = gold + addGold;

                // 문장 출력
                cout << setw(45) << "" << "골드를 +" << addGold << " 획득 하였습니다!";
                Sleep(3000);
                system("CLS");
            }
            else
            {
                // 문장 출력
                cout << setw(44) << "" << "아무것도 발견하지 못했습니다.";
                Sleep(3000);
                system("CLS");
            }

            // 함수 호출
            Choice();

            break;

        default:
            break;
    }
    
    Sleep(10000000);

}

/// <summary>
/// [배틀 시스템]
/// 몬스터가 등장하고 전투는 자동.
/// </summary>
void Battle()
{
    // 변수 선언
    string monsterName;
    int monsterHp;
    int monsterAtk;
    int monsterDef;
    int monsterReward;
    int randomValue;

    // 주사위 굴리기(1~6)
    srand(time(NULL));
    randomValue = rand() % 5 + 1;

    // 몬스터 설정
    switch (randomValue)
    {
        // 주사위가 1일 경우
        case (1):
            monsterName = "강도";
            monsterHp = 0;
            monsterAtk = 0;
            monsterDef = 0;
            monsterReward = 0;
            break;

        // 주사위가 2일 경우
        case (2):
            monsterName = "산적";
            monsterHp = 0;
            monsterAtk = 0;
            monsterDef = 0;
            monsterReward = 0;
            break;

        // 주사위가 3일 경우
        case (3):
            monsterName = "약탈자";
            monsterHp = 0;
            monsterAtk = 0;
            monsterDef = 0;
            monsterReward = 0;
            break;

        // 주사위가 4일 경우
        case (4):
            monsterName = "범죄자";
            monsterHp = 0;
            monsterAtk = 0;
            monsterDef = 0;
            monsterReward = 0;
            break;
        
        // 주사위가 5일 경우
        case (5):
            monsterName = "소매치기";
            monsterHp = 0;
            monsterAtk = 0;
            monsterDef = 0;
            monsterReward = 0;
            break;

        // 주사위가 6일 경우
        case (6):
            monsterName = "살인마";
            monsterHp = 0;
            monsterAtk = 0;
            monsterDef = 0;
            monsterReward = 0;
            break;
    }

    while (true)
    {
        // 문장 출력
        cout << "[" << monsterName << "]";

        Sleep(100000000);

        if (hp <= 0)
        {
            system("CLS");
            Sleep(300);
            cout << "\n\n\n\n\n\n\n\n\n\n\n" << setw(62) << "[GAME OVER]";
            cout << "\n\n" << setw(68) << "당신은 사망하였습니다!";
            Sleep(1234567890);
        }
    }
}
/// <summary>
/// 플레이어의 스텟을 호출한다.
/// 레벨(이동 횟수) 소비 -> 도박시스템 호출 -> 스텟 상승
/// </summary>
void Profile()
{
    // 변수 선언
    int whileValue = true;
    char inputValue;

    // 문장 출력 > 로딩중...
    cout << "\n\n\n\n\n\n\n\n\n\n\n" << setw(52) << "" << "로"; Sleep(100); cout << "" << "딩"; Sleep(100); cout << "" << "중"; Sleep(100); cout << "" << "."; Sleep(100); cout << "" << "."; Sleep(100); cout << "" << ".";
    Sleep(300);
    system("CLS");

    // 문장 출력
    cout << "\n\n\n\n" << setw(47) << "" << "[ 스텟 정보 ]\n\n";
    cout << setw(40) << "" << "레벨 : " << level << "\n\n";
    cout << setw(40) << "" << "체력 : " << hp << " / " << maxHp << "\n\n";
    cout << setw(40) << "" << "공격력 : " << atk << "\n\n";
    cout << setw(40) << "" << "소지금 : " << gold << "\n\n\n\n";
    cout << setw(38) << "" << "▶ 아무키를 눌러 상호작용 하시오.\n\n" << setw(42) << "> ";

    // 입력
    inputValue = _getch();

    system("CLS");

    // 반복문
    while (whileValue == true)
    {
        // 문장 출력
        Sleep(300);
        cout << "\n\n\n\n\n\n" << setw(38) << "" << "1. 레벨을 사용하여 스텟을 올린다.\n\n\n";
        cout << setw(38) << "" << "2. 메인 화면으로 돌아간다.\n\n\n\n\n";
        cout << setw(34) << "" << "▶ 다음중 해당 되는 키를 눌러 상호작용 하시오.\n\n" << setw(38) << "> ";

        // 입력
        inputValue = _getch();

        system("CLS");

        // 스위치문
        switch (inputValue)
        {
            // '1'일 경우
            case ('1'):
                // 변수 증감
                whileValue = false;
                
                // 함수 호출
                StatUpgrade();

                break;
            
            // '2'일 경우
            case ('2'):
                // 변수 증감
                whileValue = false;

                // 함수 호출
                Choice();

                break;

            // 그 외
            default:
                // 문장 출력
                Sleep(300);
                cout << "\n\n\n\n\n\n\n\n\n\n\n" << setw(59) << "Error!";
                Sleep(1000);
                system("CLS");
                break;
        }
    }
}

void StatUpgrade()
{
    // 변수 선언
    int statAddValue = Gambling();
    char inputValue;

    // 문장 출력 > 로딩중...
    cout << "\n\n\n\n\n\n\n\n\n\n\n" << setw(52) << "" << "로"; Sleep(100); cout << "" << "딩"; Sleep(100); cout << "" << "중"; Sleep(100); cout << "" << "."; Sleep(100); cout << "" << "."; Sleep(100); cout << "" << ".";
    Sleep(300);
    system("CLS");

    if (level >= 1)
    {
        // 스텟 증감
        maxHp = maxHp + (statAddValue * 4);
        atk = atk + (statAddValue * 2);
        level--;

        // 문장 출력
        Sleep(500);
        cout << "\n\n\n\n\n\n" << setw(42) << "" << "최대 체력이 +" << (statAddValue * 4) << " 상승 하였습니다.\n\n\n";
        cout << setw(42) << "" << "공격력이 +" << (statAddValue * 2) << " 상승 하였습니다.\n\n\n\n";
        cout << setw(37) << "" << "▶ 아무키를 눌러 상호작용 하시오.\n\n" << setw(41) << "> ";

        // 입력
        inputValue = _getch();

        system("CLS");
    }
    else
    {
        // 문장 출력
        Sleep(300);
        cout << "\n\n\n\n\n\n\n\n\n\n\n" << setw(59) << "Error!";
        cout << "\n\n" << setw(65) << "레벨이 부족합니다!";
        Sleep(2000);
        system("CLS");
    }

    // 함수 호출
    Choice();
}