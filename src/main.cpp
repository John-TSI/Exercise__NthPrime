// https://exercism.org/tracks/cpp/exercises/nth-prime

#include<iostream>
#include"../include/prime.hpp"


int main()
{   system("cls");

    std::cout << prime::is_prime(5) << std::endl;
    std::cout << prime::find_prime(1200);

    return 0;
}