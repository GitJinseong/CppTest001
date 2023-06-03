
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

using namespace std;

// 플레이어 스텟 //
int level; // 레벨
int hp; // 체력
int maxHp; // 최대 체력
int atk; // 공격력
int gold; // 소지금
/// <summary>
/// 배틀 시스템 + 걷기 시스템 구현
/// 최대 Hp는 50
/// 6번 길을 걸으면 게임종료
/// [걷기 시스템]
/// 랜덤하게 진행한다.
/// 30% 확률로 길 -> 다시 이동
/// 20% 확률로 강 -> 다시 이동
/// 50% 확률로 산 -> 전투 발생 -> 다시 이동
/// [전투 시스템]
/// 몬스터가 등장. 전투는 Auto.
/// 몬스터의 체력,공격력,플레이어의 공격력은 자유
/// 전투는 40% 확률로 발생
/// 60% 확률로 플레이어가 회복한다. 회복량 자유.
/// </summary>
int main()
{
    
}
