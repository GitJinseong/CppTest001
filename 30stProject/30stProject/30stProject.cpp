

#include <iostream>

void AddOne(int* localNumber1, int* localNumber2);
void Decription002();

int main()
{
    // 오늘 할 거 '포인터' Preview
    int mainNumber1 = 0;
    int mainNumber2 = 0;
    AddOne(&mainNumber1, &mainNumber2); // &를 사용하여 값이 아닌 변수의 주소를 보냄.

    // 주소 값은 실행 할 떄마다 값이 변한다.
    printf("number의 주소 1: %#x, 2: %#x \n\n", &mainNumber1, &mainNumber2);
    printf("number의 값 1: %d, 2: %d \n\n", mainNumber1, mainNumber2);

    Decription002();
}

void AddOne(int* localNumber1, int* localNumber2) // *이 자료형과 만나면 포인터다.
{                                                 // ex) *int localNumber1
    *localNumber1 += 1;
    *localNumber2 += 2;
}

void Decription002()
{
    // 캐스팅 테스트
    // 강제로 데이터 타입을 변환한다.
    // ex) (int)char_; , (float)int_;
    // 값 손실이 날 수 있으니 명확한 것만 한다. ex) bool 타입(0, 1)
    char char_ = 'A';
    int int_ = (int)char_;

    float floatValue = 100.123;
    int_ = (int)floatValue;

    printf("int_ 변수 안에 무슨 값이 들어있나? %f \n", (float)int_);
}