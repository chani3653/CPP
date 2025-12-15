// using namespace std;
// -> std:: 생략가능
// 코테만 쓰지 실무에서는 비추

// using std::cout
// -> 이거는 cout에서만 한정으로 해주는 거, 컴파일러가 알아서 걸러줌



// 다음 C++ 코드에서 빈칸에 들어갈 알맞은 코드를 채우세요.
#include <iostream>

namespace Animal {
    void sound() {
        std::cout  << "Animal Sound" << std::endl;
    }
}

namespace Dog {
    void sound() {
        std::cout  << "Bark" << std::endl;
    }
}

int main() {
    //____::sound()
    //____::sound()
    
    Animal::sound();
    Dog::sound();
}