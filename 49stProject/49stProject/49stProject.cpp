// 49stProject.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

using namespace std;

void StartSlidingGame(int size);
void ShuffleNumbers(int* numArray, int arraySize);
int CheckAnswer(int* examArray, int* answerArray, int arraySize);

int main()
{
    int inputValue;

    while (true)
    {
        cout << "3~6 사이의 숫자를 입력해주세요!\n : ";

        cin >> inputValue;

        if (3 <= inputValue && inputValue <= 6)
        {
            // 3~6 사이의 매개변수 입력
            StartSlidingGame(inputValue);
            break;
        }
    }
}

// [과제]
// 슬라이딩 퍼즐게임 구현해서 제출하기
// 3 ~ 6 사이의 값을 입력받아서 해당 사이즈에 맞는 슬라이딩 퍼즐 구현하기(Normal)
// ex) 3 x 3 = ㅁㅁㅁ
//             ㅁㅁㅁ
//             ㅁㅁ 
// 게임 배열이 오름차순으로 정렬될 경우 게임 클리어.
// 클리어가 불가능한 퍼즐은 존재하지 않도록 구현할 것(Very Hard)
void StartSlidingGame(int size)
{
 
    int answerPaper[6][6] = { -1, };
    int examPaper[6][6] = { -1, };
    int count = 1;
    int playerLocation_X = 0;
    int playerLocation_Y = 0;
    int* ptrAnswerPaper = &answerPaper[0][0];
    int* ptrExamPaper = &examPaper[0][0];
    char inputValue;

    // 숫자 배열 넣기
    for (int y = 0; y < size; y++)
    {

        for (int x = 0; x < size; x++)
        {
            answerPaper[y][x] = count;
            examPaper[y][x] = count;
            count++;
        }

    }

    cout << "로딩중...";

    // 셔플 함수 호출
    ShuffleNumbers(ptrExamPaper, size);

    srand(time(NULL));
    playerLocation_X = rand() % (size);
    playerLocation_Y = rand() % (size);
    int a = playerLocation_X;
    int b = playerLocation_Y;

    // 랜덤한 위치의 값 0으로 설정
    answerPaper[playerLocation_X][playerLocation_Y] = 0;
    examPaper[playerLocation_X][playerLocation_Y] = 0;

    Sleep(1000);

    system("CLS");
    
    while (true)
    {

        // 정답 확인
        if (CheckAnswer(ptrExamPaper, ptrAnswerPaper, size) == true)
        {
            cout << "승리하셨습니다!";
            Sleep(100000000);
        }

        // 화면 출력
        for (int y = 0; y < size; y++)
        {

            for (int x = 0; x < size; x++)
            {

                if (examPaper[y][x] == 0)
                {

                    playerLocation_Y = y;
                    playerLocation_X = x;
                    cout << " " << " " << " ";
                    continue;

                }

                    cout << " " << examPaper[y][x] << " ";

            }

            cout << "\n";

        }

        cout << "\n\n";

        // w, a, s, d 키로 이동하기
        // 상 하 좌 우 에 있는 값이 0 이상일 경우
        // 체인지하기
        inputValue = _getch();

        int temp = 0;
        int temp2 = 0;

        switch (inputValue)
        {
        case 'w':
            temp = examPaper[playerLocation_Y][playerLocation_X];
            temp2 = examPaper[playerLocation_Y - 1][playerLocation_X];

            if (temp2 > 0)
            {
                playerLocation_Y = playerLocation_Y ? --playerLocation_Y : playerLocation_Y;
                examPaper[playerLocation_Y + 1][playerLocation_X] = temp2;
                examPaper[playerLocation_Y][playerLocation_X] = temp;
            }

            break;

        case 's':
            temp = examPaper[playerLocation_Y][playerLocation_X];
            temp2 = examPaper[playerLocation_Y + 1][playerLocation_X];

            if (temp2 > 0)
            {
                playerLocation_Y = playerLocation_Y < size - 1 ? ++playerLocation_Y : playerLocation_Y;
                examPaper[playerLocation_Y - 1][playerLocation_X] = temp2;
                examPaper[playerLocation_Y][playerLocation_X] = temp;
            }

            break;

        case 'a':
            temp = examPaper[playerLocation_Y][playerLocation_X];
            temp2 = examPaper[playerLocation_Y][playerLocation_X - 1];

            if (temp2 > 0)
            {
                playerLocation_X = playerLocation_X ? --playerLocation_X : playerLocation_X;
                examPaper[playerLocation_Y][playerLocation_X + 1] = temp2;
                examPaper[playerLocation_Y][playerLocation_X] = temp;
            }

            break;

        case 'd':
            temp = examPaper[playerLocation_Y][playerLocation_X];
            temp2 = examPaper[playerLocation_Y][playerLocation_X + 1];

            if (temp2 > 0)
            {
                playerLocation_X = playerLocation_X < size - 1 ? ++playerLocation_X : playerLocation_X;
                examPaper[playerLocation_Y][playerLocation_X - 1] = temp2;
                examPaper[playerLocation_Y][playerLocation_X] = temp;
            }

            break;

        default:
            break;
        }

        system("CLS");

    }

}

void ShuffleNumbers(int* numArray, int arraySize)
{

    const int LOOP_COUNT = 100;
    int num1 = 0;
    int num2 = 0;

    srand(time(NULL));

    for (int i = 0; i < 100; i++)
    {
        num1 = rand() % arraySize;
        num2 = rand() % arraySize;

        // 2차원 배열 역참조 할 때 1차원 배열처럼 사용가능
        // ex) array[3][3]은  *(array + 8)와 같다.
        int temp = 1;
        temp = *(numArray + num1);
        *(numArray + num1) = *(numArray + num2);
        *(numArray + num2) = temp;
    }

}

int CheckAnswer(int* examArray, int* answerArray, int arraySize)
{

    int size = arraySize * arraySize;
    int count = 0;

    for (int i = 0; i < size; i++)
    {

        if (*(examArray + i) == *(answerArray + i))
        {
            count++;
        }

    }

    if (count == size)
    {
        return true;
    }
    else
    {
        return false;
    }

}