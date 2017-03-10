#include<iostream>
using namespace std;
int bit(int n){
	if(n<0) return 0;
	int count=0;
	while(n){
		n=(n-1)&n;
		count++;
	}
	return count;
}
int main(){
	int n;
	cin>>n;
	cout<<bit(n)<<endl;
}
