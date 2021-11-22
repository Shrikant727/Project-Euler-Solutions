#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
	ll factorial(int n){
		if(n==1){
			return 1;
		}
		return n*factorial(n-1);
	}
	ll half(int n){
		if(n==21){
			return 21;
		}
		return n*half(n-2);
	}
int main(){
	ll forty=half(39);
	cout<<forty*(1<<10)/factorial(10);
	return 0;
}
