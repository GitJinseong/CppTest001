
#include <iostream>

using namespace std;

// 캐릭터 하나를 입력 받아서 해당 문자가 특수문자인지 판별하는 프로그램 작성
// 1. 대문자 알파벳 아니고, 소문자 알파벳 아니면 특수문자로 인정(Easy)
// 2. 아무거나 입력, 오직 특수문자만 인정(Hard)
// 3. 함수를 활용, 전방선언을 활용한다.
void SPECIAL_CHARACTER_DISCRIMINATOR(char text);

int main()
{
    // 정수형 데이터 타입
    char text;

    // 값을 입력받고 특수문자 판별기에 넣는 기능
    cout << "원하시는 문자를 입력해주세요 \n : ";
    scanf_s("%c",&text); // char은 %c를 사용한다.
                         // scanf_s 사용시 띄워쓰기를 하면 오류가 발생한다!
    SPECIAL_CHARACTER_DISCRIMINATOR(text);


    // printf의 새로운 사용법
    printf("\n\n1은 1과 %s", (1 == 1) ? "맞다" : "틀리다");  // printf에 조건문을 사용할 수 있다.
                                                        // 하지만 출력 결과에 맞는 기호가 필요하다.
                                                        // 문자의 경우 %s, 숫자의 경우 %d, 상수의 경우 %f
                                                        // 그러나 printf는 문자만 인식한다.
}
// 특수문자를 판별하는 함수
void SPECIAL_CHARACTER_DISCRIMINATOR(char text)
{
    bool isSpecialCharacter = ('!' <= text && text <= '/') || (':' <= text && text <= '@') || 
        ('[' <= text && text <= '`') || ('{' <= text && text <= '~');   // 코드가 다 안보일 경우
                                                                        // 엔터로 내려도 된다.
    cout << "입력하신 값은 " << (isSpecialCharacter == true ? "특수문자가 맞습니다." : "특수문자가 아닙니다.");
}