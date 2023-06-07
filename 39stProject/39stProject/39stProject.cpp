
#include <iostream>

using namespace std;

void Description003();
void Swap(char* firstChar, char* secondChar);

int main()
{
    Description003();
}

void Description003()
{
    char str[10] = "Hello";     // index는 0부터 시작
    char temp = '\0';

    str[0], str[4] = str[4], str[0];    // 2017년 이후 C++에 추가된 튜플 계산
    str[0] = str[4];
    str[4] = temp;

    printf("str의 0번째 값 : %c str의 4번째 값 : %c \n", str[0], str[4]);
    printf("%s \n", str);

    Swap(&str[0], &str[4]); // 주소 값 전달.
}

void Swap(char* firstChar, char* secondChar) // 데이터 타입*으로 주소 값 받기
{
    printf("[스왑하기 전] firstChar 값 : %c, secondChar 값 : %c \n", *firstChar, *secondChar);
    
    char temp = '\0';

    temp = (*firstChar);            // 포인터(*)로 주소에 접근해서 값을 옮긴다.
    (*firstChar) = (*secondChar);   // 연산자 우선순위 모를경우 소괄호() 사용하기
    (*secondChar) = temp;           // 주소 안에 있는 값을 변경한다.
            
    printf("[스왑한 후] firstChar 값 : %c, secondChar 값 : %c \n", *firstChar, *secondChar); // 포인터(*)로 다른 함수에 있는
                                                                                           // 지역 변수를 호출한다.
}