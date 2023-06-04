
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

using namespace std;

int Random();
void Game();
void Battle();

int playerHp = 50;
int playerMaxHp = 50;
int playerAttack = 15;
int playerMoves;

int monsterHp = 50;
int monsterMaxHp = 50;
int monsterAttack = 10;

int main()
{
    Game();
}

void Game()
{
    while (true)
    {
        char inputValue;
        int randomValue;

        if (playerMoves >= 6)
        {
            system("CLS");
            cout << "당신은 승리했습니다.";
            break;
        }

        Sleep(2000);
        system("CLS");

        cout << "아무키를 눌러 걸으시오.";

        inputValue = _getch();

        system("CLS");

        cout << "당신은 걷고 있습니다.";

        Sleep(1000);
        system("CLS");

        randomValue = Random();

        if (randomValue > 5)
        {
            cout << "산을 발견했습니다.";
            Sleep(1000);
            system("CLS");

            randomValue = Random();

            if (randomValue > 5)
            {
                cout << "적이 출몰했습니다";
                Sleep(1000);

                Battle();
            }
            else
            {
                cout << "아무도 없습니다.";

                playerMoves++;
            }

        }
        else if (randomValue > 2)
        {
            cout << "길을 발견했습니다.";

            playerMoves++;
        }
        else
        {
            cout << "강을 발견했습니다.";

            playerMoves++;
        }
    }
}

int Random()
{
    int randomValue;

    srand(time(NULL));
    randomValue = rand() % 10 + 1;

    return randomValue;
}

void Battle()
{
    int randomValue;
    monsterHp = monsterMaxHp;

    randomValue = Random();

    system("CLS");
    if (randomValue >= 6)
    {
        cout << "전투 발생!";
        Sleep(500);
        system("CLS");
        while (true)
        {
            cout << "나의 체력 : " << playerHp << " / " << playerMaxHp << "\n\n";
            cout << "적의 체력 : " << monsterHp << " / " << monsterMaxHp << "\n\n";
            Sleep(500);
            system("CLS");
            cout << "서로 공격을 주고받았다.";
            playerHp = playerHp - monsterAttack;
            monsterHp = monsterHp - playerAttack;
            Sleep(500);
            system("CLS");
            if (playerHp <= 0)
            {
                cout << "나는 죽었다.";
                Sleep(100000000);
            }
            else if (monsterHp <= 0)
            {
                cout << "몬스터를 처치했다.";
                Sleep(2000);
                system("CLS");
                break;
            }
        }
        playerMoves++;
    }
    else
    {
        cout << "적을 몰래 따돌렸습니다.\n";
        cout << "그리고 체력포션을 마셨습니다.";
        playerHp = playerMaxHp;
        Sleep(2000);
        system("CLS");

        playerMoves++;
    }

    Game();
}