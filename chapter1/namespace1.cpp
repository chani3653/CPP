#include <iostream>

// using namespace std;
// -> std:: 생략가능
// 코테만 쓰지 실무에서는 비추

// using std::cout
// -> 이거는 cout에서만 한정으로 해주는 거, 컴파일러가 알아서 걸러줌



namespace first {
    int a = 10;

    int getSum(int a, int b) {
        return a + b;
    }

    struct Node {
        int x, y;
    };
}

namespace second {
    int getSum(int a, int b) {
        return (a + a + b + b) / 2;
    }
}

int main() {
    int d = first::getSum(3, 4);
    int g = second::getSum(5, 6);

    first::a = 300;

    return 0;
}
