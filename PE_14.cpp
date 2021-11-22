#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll chain(map<ll,ll>&mappa,ll n){
	if(n==1||n==2){
		mappa[n]=1;
		return mappa[n];
	}
	ll answer;
	if(mappa[n]!=0){return mappa[n];}
	else{
		if(n%2==0){
			answer=1+chain(mappa,n/2);
		}
		else{
			answer=1+chain(mappa,3*n+1);
		}
		mappa[n]=answer;
		return mappa[n];
	}
}

 int main(){
	std::map<ll, ll> mappa;
	ll maxo=0;
	ll length=0;
	for (ll i = 1000000 ; i >0; --i)
	{
if(mappa[i]==0){
            chain(mappa,i);
        }
        if(length<mappa[i]){
                length=mappa[i];
                maxo=i;
            }
	}
	cout<<maxo<<" "<<length<<endl;
	return 0;
}
