#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[20][20];
	int maxo=0;
	for (int i = 0; i < 20; ++i)
	{
		for (int j = 0; j < 20; ++j)
		{
			cin>>a[i][j];
		}
	}
	for (int i = 0; i < 20; ++i)
	{
		for (int j = 0; j< 20; ++j)
		{
			if(i<17 &&j<3){
			   int a1=a[i][j]*a[i][j+1]*a[i][j+2]*a[i][j+3];
			   maxo=max(a1,maxo);
			   a1=a[i][j]*a[i+1][j]*a[i+2][j]*a[i+3][j];
			   maxo=max(a1,maxo);
			   a1=a[i][j]*a[i+1][j+1]*a[i+2][j+2]*a[i+3][j+3];
			   maxo=max(a1,maxo);
			}
			else if(i<17 && j>2&&j<17){
			   int a1=a[i][j]*a[i][j+1]*a[i][j+2]*a[i][j+3];
			   maxo=max(a1,maxo);
			   a1=a[i][j]*a[i+1][j]*a[i+2][j]*a[i+3][j];
			   maxo=max(a1,maxo);
			   a1=a[i][j]*a[i+1][j+1]*a[i+2][j+2]*a[i+3][j+3];
			   maxo=max(a1,maxo);
			   a1=a[i][j]*a[i+1][j-1]*a[i+2][j-2]*a[i+3][j-3];
			    maxo=max(a1,maxo);
			}
			else if(i<17 &&j>16){
				int a1=a[i][j]*a[i+1][j]*a[i+2][j]*a[i+3][j];
			   maxo=max(a1,maxo);
			   a1=a[i][j]*a[i+1][j-1]*a[i+2][j-2]*a[i+3][j-3];
			    maxo=max(a1,maxo);
			}
			else if(i>16&&j<17){
				int a1=a[i][j]*a[i][j+1]*a[i][j+2]*a[i][j+3];
			   maxo=max(a1,maxo);
		}
		}
	}
	cout<<maxo;
	return 0;
}
