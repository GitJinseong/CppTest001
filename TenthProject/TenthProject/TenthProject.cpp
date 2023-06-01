
#include <iostream>

using namespace std;

int main()
{
    //정수형 데이터 타입들
    char charValue = 'A';               // 문자 하나를 저장하기 위한 데이터 타입
    short shortValue = 10;              // int 보다 작은 수를 저장하기 위한 데이터 타입
    int intValue = 100;                 // 가장 만만한 수를 저장하기 위한 데이터 타입
    long longValue = 200;               // int가 커져서 이제 잘 안쓰는 데이터 타입
    long long longLongValue = 1000;     // int보다 큰 수를 저장하기 위한 데이터 타입

    //실수형 데이터 타입들
    float floatValue = 10.1;            // 가장 만만한 실수를 저장하기 위한 데이터 타입
    float doubleValue = 100.1;          // float 보다 큰 실수를 저장하기 위한 데이터 타입
    long double longDoubleValue = 200.1;//double 보다 큰 실수를 저장하기 위한 데이터 타입

    cout << "Char 의 크기는? \n" << sizeof(charValue) << " byte \n";
    cout << "short 의 크기는? \n" << sizeof(shortValue) << " byte \n";
    cout << "int의 크기는? \n" << sizeof(intValue) << " byte \n";
    cout << "long의 크기는? \n" << sizeof(intValue) << " byte \n";
    cout << "long long의 크기는? \n" << sizeof(longLongValue) << " byte \n";

    cout << "float의 크기는? \n" << sizeof(floatValue) << " byte \n";
    cout << "double의 크기는? \n" << sizeof(doubleValue) << " byte \n";
    cout << "long double의 크기는? \n" << sizeof(longDoubleValue) << " byte \n";

    //상수형 데이터 타입들
    const float PI = 3.141592f; // 끝에 f가 없어도 상관 없지만 f를 붙이면
                                // float 라는 것을 인식하게 한다.
                                // 상수형 변수명은 대문자로 작성한다.
}
