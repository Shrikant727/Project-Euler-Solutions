/*The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?*/

#include <iostream>

int main()
{
    unsigned long long a=600851475143;
    for(int i=2;i*i<=a;i++){
        while(a%i==0&&a!=i){
            a/=i;
        }
    }
    std::cout << a << std::endl;
    return 0;
}
//Answer:6857
