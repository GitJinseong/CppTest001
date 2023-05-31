
#include <iostream>
#include <cstdlib>
#include <stdlib.h>

void CRITICAL_HIT_DAMAGE_PRN(int damage)
{
    float critical = damage * 1.5;
 
    srand(time(NULL));  // 난수 초기화
    int probabilitySuccess = rand() % 3+1; // 0~3 사이의 랜덤 값을 설정

    if (probabilitySuccess <= 2) // 나온 값이 2 이상시 성공(50%)
            printf("데미지 %f를 가했습니다.", critical);
        else
            printf("실패했습니다.");
}

int main()
{
    std::cout << "Hello World!\n";
    CRITICAL_HIT_DAMAGE_PRN(100);
}
