// 49stProject.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <iomanip>  // setw(int)를 사용하기 위한 헤더파일

using namespace std;

void StartSlidingGame(int size);
void ShuffleNumbers(int* numArray, int arraySize, int x, int y);
void KeyPad(int* examArray, int arraySize, int* ptr_X, int* ptr_Y, int loopCount, char inputValue);

int main()
{
    int inputValue;

    while (true)
    {
        cout << "3~6 사이의 숫자를 입력해주세요!\n : ";

        cin >> inputValue;

        if (2 <= inputValue && inputValue <= 6)
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
    while (true)
    {
        int answer[7][7] = { 0, };
        int exam[7][7] = { 0, };
        int arraySize = size * size;
        int count = 1;
        int player_X = 0;
        int player_Y = 0;
        int loopCount = 0;
        int* ptrExam = &exam[0][0];
        int* ptr_X = &player_X;
        int* ptr_Y = &player_Y;
        char inputValue;

        // 숫자 배열 넣기
        for (int y = 0; y < size; y++)
        {

            for (int x = 0; x < size; x++)
            {
                answer[y][x] = count;
                exam[y][x] = count;
                count++;
            }

        }

        cout << "로딩중...";

        // 셔플 함수 호출
        ShuffleNumbers(ptrExam, size, player_X, player_Y);

        // 셔플 함수 호출
        KeyPad(ptrExam, arraySize, player_X, player_Y, 100);

        // 랜덤한 위치의 값 0으로 설정
        srand(time(NULL));

        player_X = rand() % (size);
        player_Y = rand() % (size);

        exam[player_X][player_Y] = 0;

        // 대기
        Sleep(1000);

        system("CLS");

        // 반복문으로 게임 플레이
        while (true)
        {

            // 정답 확인
            // 답안지와 푼 문제가 일치할 경우 승리
            int answerCount = 0;

            for (int y = 0; y < size; y++)
            {

                for (int x = 0; x < size; x++)
                {

                    if (exam[y][x] == answer[y][x])
                    {
                        answerCount++;
                    }

                }

            }

            if (loopCount == 0 && answerCount == ((arraySize - size) or (arraySize - 1)))
            {
                cout << "불가능한 퍼즐이 나왔습니다.\n";
                cout << "다시 시작합니다.\n";
                Sleep(1000);
                system("CLS");
                break;
            }

            loopCount++;

            if (answerCount >= (arraySize)-1)
            {
                system("CLS");
                cout << "승리하였습니다!\n";
                Sleep(1000000000);
            }

            cout << "\n\n\n" << setw(12) << "" << "[시스템] 맞은 갯수 : " << answerCount + 1 << "\n\n";

            // 화면 출력
            for (int y = 0; y < size; y++)
            {
                cout << setw(18) << "";
                for (int x = 0; x < size; x++)
                {

                    if (exam[y][x] == 0)
                    {

                        player_Y = y;
                        player_X = x;
                        cout << " " << "*" << " ";
                        continue;

                    }

                    cout << " " << exam[y][x] << " ";

                }

                cout << "\n";

            }

            cout << "\n\n";

            cout << "*공백은 보너스로 맞은 갯수에서 +1 카운트됩니다." << "\n\n";

            // w, a, s, d 키로 이동하기
            // 근처에 있는 값이 0 이상일 경우
            // 이동시 서로 값을 바꾼다
            inputValue = _getch();

            int temp = 0;
            int temp2 = 0;

            // 키 입력
            KeyPad(ptrExam, arraySize, player_X, player_Y, 0, inputValue);

            switch (inputValue)
            {
            case 'w':
                temp = exam[player_Y][player_X];
                temp2 = exam[player_Y - 1][player_X];

                if (temp2 > 0)
                {
                    player_Y = player_Y ? --player_Y : player_Y;
                    exam[player_Y + 1][player_X] = temp2;
                    exam[player_Y][player_X] = temp;
                }

                break;

            case 's':
                temp = exam[player_Y][player_X];
                temp2 = exam[player_Y + 1][player_X];

                if (temp2 > 0)
                {
                    player_Y = player_Y < size - 1 ? ++player_Y : player_Y;
                    exam[player_Y - 1][player_X] = temp2;
                    exam[player_Y][player_X] = temp;
                }

                break;

            case 'a':
                temp = exam[player_Y][player_X];
                temp2 = exam[player_Y][player_X - 1];

                if (temp2 > 0)
                {
                    player_X = player_X ? --player_X : player_X;
                    exam[player_Y][player_X + 1] = temp2;
                    exam[player_Y][player_X] = temp;
                }

                break;

            case 'd':
                temp = exam[player_Y][player_X];
                temp2 = exam[player_Y][player_X + 1];

                if (temp2 > 0)
                {
                    player_X = player_X < size - 1 ? ++player_X : player_X;
                    exam[player_Y][player_X - 1] = temp2;
                    exam[player_Y][player_X] = temp;
                }

                break;

            default:
                break;
            }

            system("CLS");
        }
    }
    
}

void ShuffleNumbers(int* numArray, int arraySize, int x, int y)
{

    const int LOOP_COUNT = 1000;
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

void KeyPad(int* examArray, int arraySize, int* ptr_X, int* ptr_Y, int loopCount, char inputValue)
{

    int temp = 0;
    int temp2 = 0;

    for (int i = 0; i < loopCount; i++)
    {
    switch (inputValue)
    {
    case 'w':
        temp = *(examArray + (*ptr_Y * *ptr_X));
        temp2 = *(examArray + ((*ptr_Y - 1) * *ptr_X));

        if (temp2 > 0)
        {
            *ptr_Y = player_Y ? --player_Y : player_Y;
            exam[player_Y + 1][player_X] = temp2;
            exam[player_Y][player_X] = temp;
        }

        break;

    case 's':
        temp = exam[player_Y][player_X];
        temp2 = exam[player_Y + 1][player_X];

        if (temp2 > 0)
        {
            player_Y = player_Y < size - 1 ? ++player_Y : player_Y;
            exam[player_Y - 1][player_X] = temp2;
            exam[player_Y][player_X] = temp;
        }

        break;

    case 'a':
        temp = exam[player_Y][player_X];
        temp2 = exam[player_Y][player_X - 1];

        if (temp2 > 0)
        {
            player_X = player_X ? --player_X : player_X;
            exam[player_Y][player_X + 1] = temp2;
            exam[player_Y][player_X] = temp;
        }

        break;

    case 'd':
        temp = exam[player_Y][player_X];
        temp2 = exam[player_Y][player_X + 1];

        if (temp2 > 0)
        {
            player_X = player_X < size - 1 ? ++player_X : player_X;
            exam[player_Y][player_X - 1] = temp2;
            exam[player_Y][player_X] = temp;
        }

        break;

    default:
        break;
    }
}