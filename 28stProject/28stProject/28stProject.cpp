

#include <iostream>

int main()
{
    // NEW 스타일;
    int number = 1;
    if (0 <= number) 
    {
        // 이 아래가 문제가 생길까?
        std::cout << "Hello World!\n";
    }

    // LEGACY(OLD) 스타일;
    // 한 줄이라도 더 줄이기 위해 사용하는 방법. 
    if (true){
        // 이 아래가 문제가 생길까?
        std::cout << "Hello World!\n";
    }
}

