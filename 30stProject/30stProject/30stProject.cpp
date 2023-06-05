

#include <iostream>

void AddOne(int* localNumber1, int* localNumber2);

int main()
{
    // 오늘 할 거 '포인터' Preview
    int mainNumber1 = 0;
    int mainNumber2 = 0;
    AddOne(&mainNumber1, &mainNumber2); // &를 사용하여 값이 아닌 변수의 주소를 보냄.

    // 주소 값은 실행 할 떄마다 값이 변한다.
    printf("number의 주소 1: %#x, 2: %#x \n\n", &mainNumber1, &mainNumber2);
    printf("number의 값 1: %d, 2: %d \n\n", mainNumber1, mainNumber2);
}

void AddOne(int* localNumber1, int* localNumber2) // *이 자료형과 만나면 포인터다.
{                                                 // ex) *int localNumber1
    *localNumber1 += 1;
    *localNumber2 += 2;
}