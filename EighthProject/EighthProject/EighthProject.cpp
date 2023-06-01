
#include <iostream>

int main()
{
    //int num1 = 10;
    //int num2 = 12;
    //int result1, result2, result3;

    //num2 += 1;

    //result1 = ((num1 == 10) && (num2 == 12));
    //result2 = (num1 < 12 || num2 > 12);
    //result3 = (!num1);

    //printf("result1: %d \n", result1);
    //printf("result2: %d \n", result2);
    //printf("result3: %d \n", result3);

    // { 변수 선언부
    int result;
    int num1, num2;
    // } 변수 선언부

    // { 사용자 입력 받는 로직
    printf("정수 2개를 입력해주세요 : ");
    scanf_s("%d %d", &num1, &num2);
    // } 사용자 입력 받는 로직

    // { 실제 연산하는 로직 / 플러스 연산
    result = num1 + num2;
    printf("%d + %d = %d \n", num1, num2, result);
    // } 실제 연산하는 로직 / 플러스 연산

    // main 함수 여기서 종료
    return 0;       //리턴 후 함수 종료
}       // main() <- 가독성과 의도를 명확하게 하기 위해 main 함수의 범위라는 것을
        //           알려주는 주석 표시.
