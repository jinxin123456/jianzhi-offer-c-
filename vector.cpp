#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector< vector<int> > array(3);
	for(int i=0;i<3;i++)
		array[i].resize(3);
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			array[i][j]=i+j;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++)
			cout<<array[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
