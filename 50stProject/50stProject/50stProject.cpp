
#include <iostream>

void Desc003();

int main()
{
    Desc003();
}

void Desc003()
{
    const int INT_TEN = 10;

    int userInput = -1;

    printf("원하는 크기만큼 배열을 만들겠음. 크기를 입력하시오 : ");
    scanf_s("%d", &userInput);

    // new 동적할당
    // int* numbers2 = new int[10];으로 동적할당하여
    // 배열을 생성할 수 있다.
    int numbers[INT_TEN] = { 0, }; // 일반 배열의 경우 상수로 크기를 지정할 수 있다.
    // heap에 동적할당하여 할당 해제하기 전까지 비주얼 스튜디오를 꺼도,
    // 프로그램을 종료해도 사라지지 않는다. (컴퓨터를 재부팅해야 사라진다)
    // 그래서 반드시 프로그램 종료시에 delete[] 변수명;을 해줘야 한다.
    int* numbers2 = new int[userInput]; // 힙에 배열을 할당했다.

    for (int i = 0; i < userInput; i++)
    {
        numbers2[i] = i + 1;
    }

    for (int i = 0; i < userInput; i++)
    {
        printf("i값 : %d \n", numbers2[i]);
    }
    printf("\n\n");

    // !프로그램 종료시에 할당 해제
    delete[] numbers2;  // heap에 동적 할당된 배열을 삭제한다.
 }
