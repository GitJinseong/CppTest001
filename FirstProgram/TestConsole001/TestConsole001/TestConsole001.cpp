// TestConsole001.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <stdio.h>       // 전처리기 지시문
                         // #include 안에 <, > 안에 적어주는 것이 헤더파일
                         // F12로 헤더파일 안쪽으롣 들어갈 수 있고 Ctrl - 로 되돌아올수 있음
                         // 이 안에 함수 있다.

void MyNewPrint(int number)
{
    printf("입력 값은 %d 입니다. \n", number);
}


int plusTwoNumbers(int number1, int number2)
{
    printf("입력 값은 %d, %d 입니다.", number1, number2);
    return number1 + number2;
}

int multiplyThreeNumbers(int number1, int number2, int number3)
{
    printf("입력 값은 %d, %d, %d 입니다.", number1, number2, number3);
    return number1 * number2 * number3;
}

int main(void)
{
    int number = 10;

    std::cout << "Hello World!\n";
    printf("Hello World! \t\t\t");

    printf("Hello World! \n");
    printf("Hello World! \n");
    printf("Hello World! %d \n", number - 7);

    MyNewPrint(100);

    printf("두 수의 합은 %d 입니다. \n\n", plusTwoNumbers(5, 7));
    printf("세 수를 곱한 값은 %d 입니다. \n\n", multiplyThreeNumbers(9, 11, 13));

    // Comment 주석 이 라인은 프로그램에 영향을 주지 않는다.
    // 내가 필요한 글자를 마음대로 적으면 된다.

    //한줄주석이라고 한다.

    /*
    * 이걸 여러줄 주석이라고 한다.
    * 여러줄 주석
    * 이 라인들은 프로그램에 영향을 주지 않는다.
    */
}
