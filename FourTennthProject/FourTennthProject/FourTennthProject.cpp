
#include <iostream>

using namespace std;

int main()
{
   
	char someAlphabet = 'A';
	bool isBigAlphabet = ('A' <= someAlphabet && someAlphabet <= 'Z');
	bool isSmallAlphabet = ('a' <= someAlphabet && someAlphabet <= 'z');
	bool isNumber = ('0' <= someAlphabet && someAlphabet <= '9');

	if (isBigAlphabet)	// 이것은 if문이다.
	{
		printf("영문 대문자 입니다. \n");
	}		// if문은 조건식이 참이면 스코프 안의 내용을 진행하고, 거짓이면 건너뛴다. 
	else if (isSmallAlphabet)
	{
		printf("영문 소문자 입니다. \n");
	}		// else if의 경우 위의 조건식이 거짓이면 한번더 조건식이 참인지 구분한다.
	else if (isNumber)
	{
		printf("숫자 입니다. \n");
	}
	else
	{
		printf("잘 모르겠습니다. \n");
	}		// 위의 조건식에서 참이 아닌, 다른 모든 경우 스코프 안의 내용을 진행한다.

}

