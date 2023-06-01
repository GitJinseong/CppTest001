
#include <iostream>

using namespace std;

int main()
{
    printf("Hello World! \n");
    printf("Hello World! \n");
    printf("Hello World! \n");
    printf("Hello World! \n");
    printf("Hello World! \n");

    int loopCount = 5;

    while (1 <= loopCount)  // 조건식이 참이 될 때 까지 반복한다.
    {
		printf("Hello World! 몇 번째 돌고 있는지? %d \n", loopCount);
        loopCount -= 1; // 참이 되게 하기 위해서 1씩 감소시킨다.
    }       // loop: 루프 종료
}

