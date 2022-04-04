// https://exercism.org/tracks/cpp/exercises/nth-prime

#include<iostream>
#include"../include/prime.hpp"


int main()
{   system("cls");

    int input = 1;
    std::cout << "Which number prime do you want to find?" << std::endl;
    std::cin >> input;
    std::cout << prime::find_prime(input);

    return 0;
}