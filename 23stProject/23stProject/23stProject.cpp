
#include <iostream>
#include <conio.h> // _getch()를 사용할 때 필요하다.
#include <stdlib.h> // 랜덤 함수를 쓸 때 필요하다.
#include <time.h> // 시간을 사용할 때 필요하다.

void Description004();
void Description005();
void Description006();

int main()
{
    //Description005();
    //Description005();
    Description006();
}

void Description004()
{
    printf("For 문은 반복문이다. 이렇게 돌아간다 \n");

    for (int loopCount = 1; loopCount <= 5; loopCount += 1)
    {
        printf("어떻게 돌아가고 있는 것이지??? \n");
    }
    // printf("loop count 값이 얼마일까? %d \n", loopCount);
    // 위의 경우 for문의 스코프 범위를 벗어나서 loopCount 변수를
    // 불러올 수 없다.
    printf("\n");

    int loopCount2 = 1;
    for (/* 이거 비어도 가능 */ ; loopCount2 <= 5; loopCount2 += 1)
    {
        printf("어떻게 돌아가고 있는 것이지??? \n");
    }
    printf("\n");
}

void Description005()
{
    // 여기서 키 값을 바꿔볼 예정
    srand(33); // srand는 void 타입이라 반환 값이 없다.
               // 안에 입력한 SID 값에 따라 rand의 값이 변한다.
               // SID 값에 시간을 넣으면 같은 SID 값이 나오지 않는다.
               // 왜냐하면 time 함수에 있는 시간은 수십 년간 매초마다 1씩 올린
               // 값이기 떄문이다(현재 기준 엄청나게 높은 수).
    srand(time(NULL)); // C++ extern "C" static inline time_t __cdecl time(time_t *_Time)
                       // 위의 경우 타입은 time_t이다.
                       // NULL은 0이다.

    // Random 이해하기
    int randomNumber1, randomNumber2, randomNumber3 = 0;
    int randomNumber4, randomNumber5, randomNumber6 = 0;

    randomNumber1 = rand(); // rand는 int 타입으로 값을 반환한다.
    randomNumber2 = rand(); // rand는 SID 값이 같으면 같은 값을 반환한다.
    randomNumber3 = rand(); // srand로 SID 값을 변경할 수 있다.
    
    randomNumber4 = (rand() % 6) + 1; // 왼쪽은 주사위(1~6)의 랜덤 값을 출력한다.
    randomNumber5 = (rand() % 6) + 1; // rand() mod 6을 하면 0~5 값이 출력되므로 
    randomNumber6 = (rand() % 6) + 1; // +1을 해서 1~6이 출력되게 한다.
                                      // 왜냐하면 mod를 할 값은 딱 맞게 나눠지므로
                                      // 0이 되기 때문이다. 그러므로 (rand() % 6) + 1;
    printf("Random number?? %d \n", randomNumber1);
    printf("Random number?? %d \n", randomNumber2);
    printf("Random number?? %d \n\n", randomNumber3);

    printf("Random number?? %d \n", randomNumber4);
    printf("Random number?? %d \n", randomNumber5);
    printf("Random number?? %d \n\n", randomNumber6);
}

void Description006() {
    int randomNumber1, randomNumber2, randomNumber3 = 0;
    srand(time(NULL));

    printf("랜덤 번호 찍어보기 \n");
    for (int i = 0; i < 6; i++)
    {
        randomNumber2 = (rand() % 45) + 1;
        printf("%d", randomNumber2);
    }
    printf("\n\n");
}