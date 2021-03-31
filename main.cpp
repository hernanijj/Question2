#include <iostream>

// the condition was done using ternary operator
int main(void)
{
    int ind = 1;
    int teste;

    for(ind = 1;ind<=100;ind++){
        (ind%(3*5) == 0)? std::cout << "FooBaa"<<std::endl :
            (ind%3 == 0) ? std::cout << "Foo"<<std::endl :
                (ind%5 == 0) ? std::cout << "Baa"<<std::endl :std::cout << ind <<std::endl;

    }

    std:: cin.get();
    return 0;
}
