
#include <iostream>
using namespace std;

void Description001();

int main()
{
    Description001();
}

void Description001()
{
    char str[300] = { 0, }; // 0은 NULL이랑 값이 같다.
                            // 그래서 0으로 배열을 초기화 한다.
    printf("문자열을 입력하시오(200자 이내로) : ");
    cin >> str; // scanf_s의 경우 오류가 발생하므로 cin을 사용한다.

    printf("제대로 입력을 받았는지? -> %s", str);
}