
#include <iostream>

using namespace std;

int main()
{
    char string_[15] = "Good Morning!\n";
    char stringCopy[16] = { 0, };

    char string2[] = "Good Morning \n"; // 배열의 크기를 지정하지 않아도 자동으로 정해진다.
    int numbers[10] = { 0, };

    // 배열의 크기를 늘리려면 > 배열을 새로 만든 후(원하는 크기로)
    // 새 배열에 기존 배열을 옮긴다.


    //string_ = "Good Morning!\n";

    printf("%s", string_);
    printf("정수형 배열의 크기 %d\n", sizeof(numbers));                 // sizeof()로 배열의 크기를 예측 가능.
    printf("정수형 배열의 길이 %d\n", sizeof(numbers) / sizeof(int));   // sizeof() / sizeof(자료형)으로 배열의 길이 예측 가능. 
    printf("문자열 배열의 크기 %d\n", sizeof(string_));                 // sizeof()로 배열의 크기를 예측 가능.
    printf("문자열 배열의 크기 %d\n", sizeof(string2));                 // char의 경우 1bit라서 바로 계산이 가능하지만
                                                                     // 다른 타입의 경우 bit가 달라서 ex)나누기로 역산해야 한다.

    // 위에서 선언된 문자열(문자배열)을 수정하는 예시
    string_[0] = 'G';
    string_[1] = 'g';
    string_[2] = 'g';

    printf("문자열 배열이 정말로 수정되는지? -> %s \n", string_);

    bool isNullSameZero = false;
    if (0 == '\0')
    {
        isNullSameZero = true;
    }
    else
    {
        isNullSameZero = false;
    }

    printf("Null은 0과 같은 값인가? : [%d] \n", isNullSameZero);

    char string3[4];
    string3[0] = 'H';
    string3[1] = 'i';
    string3[2] = '!';

    char string4[4] = "Hi!";

    char string5[4];
    string5[0] = 'H';
    string5[1] = 'i';
    string5[2] = '!';
    string5[3] = '\0';  // NULL(\0) 문자를 넣어 끝을 알려준다.

    // 아래의 경우 끝을 알 수 없어 오류 문자열이 출력된다.
    printf("string3번 찍어보겠음. -> %s \n", string3);

    // 아래는 끝을 알 수 있어 정상적으로 출력된다.
    printf("string4번 찍어보겠음. -> %s \n", string4);

    // 아래의 경우 NULL을 넣어 끝을 알 수 있어 정상적으로 출력된다.
    printf("string5번 찍어보겠음. -> %s \n", string5);
}
