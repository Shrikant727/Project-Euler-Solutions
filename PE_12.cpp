#include<bits/stdc++.h>
using namespace std;
int exponent(bool sieve[],int n){
	int div=1;
	int rem=n;
	for (int i = 2; i*i < n; ++i)
	{

		int exp=0;
		while(rem%i==0){
			exp++;
			rem/=i;
		}
		div*=(exp+1);
	}

	    if(rem!=1){
        return div*2;
    }
    else
    return div;
}
int main(){
	long long int s=1000000;
	bool sieve[s]={false};
	for(int i=2;i<s;i++){
		if(sieve[i]==false){
			for(int j=2*i;j<s;j+=i){
				sieve[j]=true;
			}
		}
	}
	int i=1;
    for(int j=2;exponent(sieve,i)<500;j++){
        i+=j;
    }
    cout<<i;
	return 0;
}
