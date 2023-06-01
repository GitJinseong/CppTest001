
#include <iostream>

// 정수 3개를 입력 받아서 x + y * z의 결과를 출력하는 프로그램 만들기
// 1. 입력은 scanf_s를 사용하고, 한 라인에서 3개의 입력 값을 받는다.
// 2. 함수를 활용한다.
// 3. 사칙연산 순서에 유의할 것.
// (변형)
// (num1 - num2) * (num2 + num3) * (num3 % num1) 의 결과를
// 출력하는 함수를 추가로 작성해보기
// scanf_s에는 \n와 비슷한 단어 사용금지

using namespace std;

void PRINTER();
int CALCULATOR(int num1, int num2, int num3);
int STRAIN_CALCULATOR(int num1, int num2, int num3);

int main()
{
	PRINTER();
}

void PRINTER()
{
	int num1, num2, num3;
	int result;

	printf("정수 3개를 입력하시오(예시 : 1, 2, 3) \n → : ");

	scanf_s("%d %d %d", &num1, &num2, &num3); // &num1은 주소 값을 의미한다.
											  // num1은 보유한 값을 의미한다.
	result = CALCULATOR(num1, num2, num3);
	printf("\n %d + %d * %d 의 결과는 %d 입니다 \n\n", num1, num2, num3, result);

	result = STRAIN_CALCULATOR(num1, num2, num3);
	printf("( %d - %d ) * ( %d + %d ) * ( %d %% %d ) 의 결과는 %d 입니다. \n\n", num1, num2, num2, num3, num3, num1, result);
}

int CALCULATOR(int num1, int num2, int num3)
{
	return num1 + num2 * num3;
}

int STRAIN_CALCULATOR(int num1, int num2, int num3)
{
	return (num1 - num2) * (num2 + num3) * (num3 % num1);
}


