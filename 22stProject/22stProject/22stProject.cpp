
#include <iostream>
#include <conio.h>

void Description003();

int main()
{
    Description003();
}

void Description003()
{
    // 변수 선언
    char userInput;
    
    // 문자 입력 받기
    printf("user input : ");
    userInput = _getch(); // _getch()는 문자 하나를 입력 받을때
                          // 유용하다. 왜냐하면 엔터를 누를 필요 없이
                          // 하나의 문자를 입력하면 값이 자동으로
                          // 전송되기 떄문이다.
                          // 하지만 char 값만 입력 받을 수 있기 때문에
                          // 아스키코드에 포함되지 않은 '화살표'와 같은 키는
                          // 입력 받을 수 없다(문자,숫자는 가능).
                          // #include <conio.h>가 필요하다.
    printf("/n/n");

    // switch문
    switch (userInput)
    {
    // case문
    // ex) case 'a': 로  사용한다.
    case 'a':
        printf("이것은 가위 \n");
        break;
    case 'b':
        printf("이것은 바위 \n");
        break;
    case 'c':
        printf("이것은 보 \n");
        break;
    default:
        printf("처리되지 않은 예외 입력입니다. \n");
        break;
    }

    printf("Press any Key... \n");
    _getch(); // 이와 같은 경우로 사용하는 이유는
              // _getch()에서 입력받은 값을 저장할 변수가
              // 없어 값을 저장하는 용도로 사용하는게 아니라
              // 아무키나 누르면 종료한다는 기능을 위해 사용했다.
}