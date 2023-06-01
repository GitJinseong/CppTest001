
#include <iostream>

using namespace std;

int main()
{
    // 정수형 데이터 타입
    char charValue = 'B';


    printf("char 출력할 때는 C로 해보자. -> %c \n", 65);
    
    bool isSame = ('A' == 65);  // 알파벳을 'A' 이런식으로 입력하면
                                // 아스키코드(숫자)로 인식한다.
    printf("\n진짜로 같은가?? %d \n", isSame);

    char someAlphabet = 's';
    bool isBigAlphabet = ('A' <= someAlphabet && someAlphabet <= 'Z');  // 대문자는 아스키 코드 기준
                                                                        // A(65) ~ Z(90)사이에 있다.
                                                                        // 그러므로 &&(AND)를 사용하면
                                                                        // 알 수 있다.
    printf("\nSome Alphabet은 대문자인가?? %d \n", isBigAlphabet);
}
