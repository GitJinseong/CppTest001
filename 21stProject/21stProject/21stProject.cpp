
#include <iostream>

void Description003();

int main()
{
    Description003();
}

void Description003()
{
    // switch / case 문

    int userInput = 0;

    printf("User input : ");
    scanf_s("%d", &userInput);


    switch (userInput)
    {
    case 1:
        printf("이것은 1 \n");
        break;
    case 2:
        printf("이것은 2 \n");
        break;
    case 3:
        printf("이것은 3 \n");
        break;
    default:
        printf("처리되지 않은 예외 입력입니다. \n");
        break;
    }
    printf("프로그램을 종료합니다. \n");
}
