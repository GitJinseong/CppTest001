

#include <iostream>

int Recovery(int hp, int maxHp, int heal)
{
    return hp+heal > maxHp ? maxHp : hp+heal;
}

int main()
{
    printf("현재 체력은 %d 입니다.\n\n", Recovery(20, 50, 300)); //현재체력 , 최대체력, 힐량
}