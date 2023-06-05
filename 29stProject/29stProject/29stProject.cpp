
#include <iostream>

void Description001(int number);
int main()
{
    Description001(10);
    printf("Description001 함수가 끝나면 되돌아와서 이걸 출력해야 함. \n");
}

void Description001(int number)
{
    printf("Number는 %d \n", number);
}
