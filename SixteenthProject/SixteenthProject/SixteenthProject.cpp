
#include <iostream>

using namespace std;

// 1부터 10까지 while문으로 출력하는 프로그램 만들기
int main()
{
	// 정수형 데이터 타입 선언
	int whileCount = 1;

	// while문 생성
	while (whileCount <= 10)	// while문은 조건에 맞을 때 실행한다.
	{
		cout << "while문을 사용하고 있습니다. 현재 반복 횟수 : " << whileCount << "\n";
		whileCount += 1;
	}
}
