
#include <iostream>

void Description001();
void ArrayFunction(int* ptrArray);
void ArrayFunction2(int* ptrArray, int arraySize);
void ArrayFunction3(int array_[], int arraySize);
void ArrayFunction4(int* ptrArray, int arraySize);

int main()
{
    Description001();
}

void Description001()
{
    int numbers[10] = { 0, };

    for (int i = 0; i < 10; i++)
    {
        numbers[i] = (i + 1) * 10;
        
        printf("%d ", numbers[i]);
    }

    printf("\n");

    int* ptrNumber = &numbers[2];

    // 역참조 (배열의 5번째 값에 접근하려고 할 때)
    &numbers[4];         // 이 형태가 배열을 사용한 역참조(index로 역참조를 한다.)
    *(ptrNumber + 4);    // 이 형태가 포인터를 사용한 역참조

    printf("3번째 자리에 있는 값 + 1 -> %d \n", *(ptrNumber + 1));  // 참조된 값에 + 1을 더하면
                                                                 // &numbers[2] > &numbers[3]이 된다.
    // 아래의 두 포인터의 주소는 같다.
    // 같은 배열이기 때문.
    printf("numbers 가 들고 있는 값 -> %p \n", numbers);
    printf("numbers[0]의 주소 값 -> %p \n", &numbers[0]);
    printf("\n\n");

    ArrayFunction(numbers);
    ArrayFunction2(numbers, 10);
    ArrayFunction3(numbers, 10);
    ArrayFunction4(numbers, 10);
}

// 포인터에 저장된 배열의 주소값을 받아서 처리한다.
void ArrayFunction(int* ptrArray)
{
    printf("ptrArray 역참조 값 : %d \n", *(ptrArray));
    // 포인터에 저장된 배열의 인덱스 최대 값을 초과해도 값이 출력된다.
    printf("ptrArray + 1 주소의 역참조 값 : %d \n", *(ptrArray + 11));
}

// 포인터에 저장된 배열의 주소값과 배열의 크기를 받아서 처리한다.
void ArrayFunction2(int* ptrArray, int arraySize)
{
    for (int i = 0; i < 10; i++)
    {
        printf("ptrArray[%d] 역참조 값 : %d \n", i, *(ptrArray + i));
    }
}

void ArrayFunction3(int array_[], int arraySize)
{
    // sizeof(array_)로 받아온 배열의 자체적인 크기를 알 수 있다.
    // 실제 배열에 선언된 크기와는 다르다.
    printf("함수에서 찍어 본 numbers의 Size : %d\n", sizeof(array_));

    for (int i = 0; i < sizeof(array_) / sizeof(int); i++)
    {
        printf("array[%d]의 값 : %d \n", i, array_[i]);
    }
}

void ArrayFunction4(int* ptrArray, int arraySize)
{
    // int 형 포인터의 자체적인 크기
    printf("int 형 포인터의 자체적인 크기가 몇이지? %d\n", sizeof(ptrArray));
}