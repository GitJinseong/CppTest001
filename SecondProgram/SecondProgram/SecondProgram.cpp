// SecondProgram.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

//이런게 함수의 정의다.
int PRS_INF_PRN(int age)
{
	printf("이름 : 최진성\n나이:%d살\n전화번호:010-2725-3062", age);
	return 0;
}

int main()
{
	printf("이게 처음 호출된다. \n");
	// 중요한 거, C++에서 main 함수는 무조건 있어야 한다.
	// 프로그램은 main 함수에서부터 시작한다.
	PRS_INF_PRN(27);		//이런게 함수의 호출이다.
}
