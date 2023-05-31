
#include <iostream>

//이런게 함수의 정의다.
int PRS_INF_PRN(int age)
{
	printf("이름 : 최진성\n나이:%d살\n전화번호:010-2725-3062", age);
	return 0;
}

int main() //여기서 프로그램 실행이 시작되고 종료된다.
{

	int number = 10;	// integer가 정수다. 그러니 정수를 저장하기 위한
						// 데이터 타입으로 줄임말인 int를 썻다.

	int number2 = 1.6; // int에 소수점을 입력하면 출력시 소수점이 나오지 않는다. 
	float number3 = 1.6;	// float는 실수다. 

	printf("이게 처음 호출된다. \n");
	printf("%d \n", number2);	// int는 %d를 사용한다.
	printf("%f \n", number3);	// float는 %f를 사용한다.

	// 중요한 거, C++에서 main 함수는 무조건 있어야 한다.
	// 프로그램은 main 함수에서부터 시작한다.

	PRS_INF_PRN(27);		//이런게 함수의 호출이다.

}
