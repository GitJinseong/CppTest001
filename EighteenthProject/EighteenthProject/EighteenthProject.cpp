
#include <iostream>

using namespace std;

int main()
{
    int loopCount = 1;
    while (loopCount <= 10)
    {
        if (loopCount == 7)
        {
            loopCount += 1;
            continue; // continue는 아래에 있는 코드를 무시한다.
                      // 하지만 루프문을 나가지는 않는다.
                      // if문에서 사용시 if문 안에 있는 코드만 무시한다.
            printf("이것은 continue 문이다.");
            break;  // break은 루프문을 나가는 함수다.
        }
        printf("이것은 무조건 출력되는 문장이다. %d \n", loopCount);
        loopCount += 1;
            // loop : 일정 횟수 반복
        // main()
    }
}

