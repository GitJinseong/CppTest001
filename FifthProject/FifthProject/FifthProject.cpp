
#include <iostream>

int main()
{
	int num1 = 10;
	int num2 = 12;
	int result1, result2, result3;
	
	result1 = (num1 == 10 && num2 == 12); // AND(논리곱) 조건문
										  // 둘 다 참일 경우 참(1)이다.

	result2 = (num1 < 12 || num2 > 12); // OR(논리합) 조건문
										// 둘 중 하나가 참일 경우 참(1)이다.

	result3 = (!num1); // NOT(논리부정) // NOT(논리부정) 조건문
									  // 거짓(0)일 경우 참(1)이다.
									  // 하지만 num1은 10 이므로 거짓(0)이다.

	printf("result1: %d \n", result1);
	printf("result2: %d \n", result2);
	printf("result3: %d \n", result3);

	int age = 27;
	bool boolResult;

	boolResult = (age < 20) ? true : false; // 삼항 연산문이며, 조건문이 포함되어 있다.
											// (조건식) ? 참일 경우 : 거짓일 경우;
	printf("Bool Result는 어떤 값? %d", boolResult);
}

