/*A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.*/
#include <iostream>

unsigned int makePalindrome(unsigned int a){
    unsigned int result=a*1000;
    result+=a/100;
    result+=((a/10)%10)*10;
    result+=(a%10)*100;
    return result;
}
int main()
{   
    bool flag=true;
    for(int i=999;i>=100&&flag;i--){
        int Pdrome=makePalindrome(i);
        for(int j=100;j*j<=Pdrome&&flag;j++){
            if(Pdrome%j==0){
                int other=Pdrome/j;
                if(other<1000&&other>=100){
                    std::cout << Pdrome << std::endl;
                    flag=false;
                }
            }
        }
    }
    return 0;
}
