
#include <iostream>

int main()
{
	int loopCount = 1;
	char userInput;

	//while (1) 이런식으로 사용시 break문이 나오기 전까지
			  // 무한히 반복한다.
	while ('A' <= userInput <= 'Z') // 해당 조건문(이항 연산자)의 경우
									// 'A' <= userInput 을 먼저 계산한다.
									// 참일 경우 1, 아닐 경우 0
									// 그 후에 <= 'Z'와 비교한다.
									// ex) 1. 'A' <= userInput 의 결과는 0
									//     2. 1 <= 'Z' 의 결과는 0
	{
		if (loopCount == 1)
		{
			printf("[튜토리얼] 만약 게임을 만들려고 한다면 이런식으로 \n");
		}

		printf("[System] 당신은 플레이어 입니다. \n");
		printf("수행할 액션을 입력해 주세요. : ");
		scanf_s("%c",&userInput);

		if (userInput == 'q' || userInput == 'Q')
		{
			printf("[System] 프로그램을 종료합니다. \n");
			break;	// 반복문을 종료한다.
		}
		else
		{
			printf("[System] 해당 입력은 정의되어 있지 않습니다. \n");
			loopCount += 1;
			continue; // continue는 if문 안에 있으므로
					  // if문을 종료한다.
					  // 하지만 반복문에서 continue를 사용하면
					  // 아래에 있는 코드만 무시할 뿐, 조건에 충족하면
					  // 계속 반복한다.
		}

		loopCount += 1;
	}
}

