#include<iostream>

using namespace std;

int F(int n){
	int  result[]={0,1};
	if(n<2)return result[n];
	int first=0;
	int second=1;
	int nth=0;
	for(int i=2;i<=n;i++){
		nth=first+second;
		first=second;
		second=nth;
	}
	return nth;
}
int main(){
	int n;
	while(true){
	cin>>n;
	cout<<F(n)<<endl;
	}
	return 0;
}
