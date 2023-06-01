
#include <iostream>

using namespace std;

// 원의 반지름을 입력받아서 원의 넓이를 출력하는 프로그램 작성.
// 1. 함수를 사용할 것. 전방선언 할 것.
// 2. 원의 반지름은 정수.
// 3. 출력 값은 상수로.
void FIND_AREA_CIRCLE(int radius);

int main()
{
    // 정수형 데이터 타입
    int num;

    // 입출력 기능
    cout << "원의 반지름을 입력하시오. \n → ";
    scanf_s("%d", &num);
    FIND_AREA_CIRCLE(num);
}

void FIND_AREA_CIRCLE(int radius)
{
    // 상수형 데이터 타입
    const float PI = 3.141592f;
    float RESULT;   // 상수형 변수의 이름은 항상 대문자다.

    // 원의 반지름 구하는 기능
    RESULT = PI * radius * radius;
    cout << "원의 넓이는 다음과 같습니다. \n" << RESULT;
}
