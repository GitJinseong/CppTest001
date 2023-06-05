
#include <iostream>

void Descriotion003();

int main()
{
    Descriotion003();
}

void Descriotion003()
{
    // 배열이란 무엇인지 실습
    int numbers[5];         // 5개의 변수를 선언한 것이다.
    numbers[0] = 100;
    numbers[1] = 200;
    numbers[2] = 300;
    numbers[3] = 400;
    numbers[4] = 500;
    //numbers[5] = 500; // 배열에 선언된 값에서 벗어나는 인덱스 값은 안된다.

    int numbers4[5];

    for (int i = 0; i < 5; i++) // 배열을 이용한 for문 사용법
    {                           // 이외에도 while문, if문 등 다양한 문장에 사용 가능하다.
        numbers4[i] = (i + 1) * 100; // 배열 인덱스 값에 i를 넣어 0 부터 4까지 값을 추가하게 했다.
        printf("배열의 값 앞은 (인덱스, 뒤는 값) : (%d, %d) \n", i, numbers4[i]);
    }

    const int MAX_ARRAY = 5; // 상수 선언

    int numbers5[MAX_ARRAY]; // 5개의 변수를 선언한 것이다.

    for (int i = 0; i < 5; i++) // 조사식을 보려면 break를 걸고 f5를 눌러 실행하면 된다.
    {
        numbers[i] = (i + 1) * 100;
        printf("배열의 값 앞은 (인덱스, 뒤는 값) : (%d, %d) \n", i, numbers[i]);
    }

    int numbers2[5] = { 10, 20, 30, 40, 50 }; // 배열을 한 번에 선언하기.
    int numbers3[5] = { 0, }; // 배열의 모든 값을 0으로 초기화 한다는 의미

    printf("\n배열의 값 앞은 (인덱스, 뒤는 값) : (%d, %d) \n", 0, numbers[0]); // 하나씩 선언된 배열 값
    printf("배열의 값 앞은 (인덱스, 뒤는 값) : (%d, %d) \n", 1, numbers[1]);
    printf("배열의 값 앞은 (인덱스, 뒤는 값) : (%d, %d) \n", 2, numbers[2]);
    printf("배열의 값 앞은 (인덱스, 뒤는 값) : (%d, %d) \n", 3, numbers[3]);
    printf("배열의 값 앞은 (인덱스, 뒤는 값) : (%d, %d) \n\n", 4, numbers[4]);
    //printf("배열의 값 앞은 (인덱스, 뒤는 값) : (%d, %d) \n", 4, numbers[5]);  // 배열에 선언된 값에서 벗어나는 인덱스 값은 안된다.

    printf("배열의 값 앞은 (인덱스, 뒤는 값) : (%d, %d) \n", 0, numbers2[0]); // 한번에 선언된 배열 값
    printf("배열의 값 앞은 (인덱스, 뒤는 값) : (%d, %d) \n", 1, numbers2[1]);
    printf("배열의 값 앞은 (인덱스, 뒤는 값) : (%d, %d) \n", 2, numbers2[2]);
    printf("배열의 값 앞은 (인덱스, 뒤는 값) : (%d, %d) \n", 3, numbers2[3]);
    printf("배열의 값 앞은 (인덱스, 뒤는 값) : (%d, %d) \n\n", 4, numbers2[4]);

    printf("배열의 값 앞은 (인덱스, 뒤는 값) : (%d, %d) \n", 0, numbers3[0]); // 값을 0으로 초기화 했다.
    printf("배열의 값 앞은 (인덱스, 뒤는 값) : (%d, %d) \n", 1, numbers3[1]);
    printf("배열의 값 앞은 (인덱스, 뒤는 값) : (%d, %d) \n", 2, numbers3[2]);
    printf("배열의 값 앞은 (인덱스, 뒤는 값) : (%d, %d) \n", 3, numbers3[3]);
    printf("배열의 값 앞은 (인덱스, 뒤는 값) : (%d, %d) \n\n", 4, numbers3[4]);


}