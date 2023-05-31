
#include <iostream>

int PLUS(int num1, int num2)
{
    return num1 + num2;
}

int MINUS(int num1, int num2)
{
    return num1 - num2;
}

int MULTIPLICATION(int num1, int num2)
{
    return num1 * num2;
}

int DIVISION(int num1, int num2)
{
    return num1 / num2;
}

int REST(int num1, int num2)
{
    return num1 % num2;
}


// 맥스HP가 50
// 힐량도 입력
// 현재 HP 20
// 힐을 받은 HP를 출력

int RECOVERY_ONE_S_PHYSICAL_STRENGTH(int maxHp, int heal, int hp)
{
    hp = hp + heal;
    return hp > maxHp ? maxHp : hp; //맞을 경우 왼쪽 값, 틀릴 경우 오른쪽 값 출력
                                    //로직은 힐량과 현재 체력을 합한 값이 최대HP 이상인 경우
                                    //최대 HP를 리턴하고 아닐 경우 현재 HP와 힐량을 더한 값을 리턴한다.
}

int main()
{
    int number; // 변수를 선언
    number = 0; // 변수를 초기화

    int number2 = 0; // 선언과 초기화를 동시에 사용

    printf("number 변수를 찍어볼까? : %d \n\n", number);
    printf("number2 변수를 찍어볼까? : %d \n\n", number2);

    int num1 = 9, num2 = 2;
    int result1 = 0;

    result1 = result1 + (num1 + num2); // 복합 연산자 사용 전
    result1 += (num1 + num2); // 복합 연산자 사용 후

    printf("%d + %d = %d \n", num1, num2, num1 + num2); // 더하기
    printf("%d - %d = %d \n", num1, num2, num1 - num2); // 빼기
    printf("%d * %d = %d \n", num1, num2, num1 * num2); // 곱하기
    printf("%d / %d = %d \n", num1, num2, num1 / num2); // 나누기
    printf("%d %% %d = %d \n\n", num1, num2, num1 % num2); // 나머지(mod연산)

    printf("%d + %d = %d \n", num1, num2 , PLUS(num1, num2)); // 더하기
    printf("%d + %d = %d \n", num1, num2, MINUS(num1, num2)); // 빼기
    printf("%d + %d = %d \n", num1, num2, MULTIPLICATION(num1, num2)); // 곱하기
    printf("%d + %d = %d \n", num1, num2, DIVISION(num1, num2)); // 나누기
    printf("%d + %d = %d \n\n", num1, num2, REST(num1, num2)); // 나머지(mod연산)

    printf("현재 HP = %d \n\n", RECOVERY_ONE_S_PHYSICAL_STRENGTH(50, 100, 20)); // 최대체력, 힐량, 현재체력
}


