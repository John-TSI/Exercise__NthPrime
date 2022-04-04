#include"../include/prime.hpp"

namespace prime
{
    bool is_prime(int num)
    {   
        for(int i=2; i<num; i++)
        {
            if(num%i == 0)
                return false;
        }
        return true;
    }


    int find_prime(int n)
    {
        int i = 1, num = 2;
        while(i < n)
        {
            num++;
            if(is_prime(num))
                i++;
        }
        return num;
    }
}