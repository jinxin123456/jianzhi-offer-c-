#include<iostream>
using namespace std;

bool FindNum(int array[4][4],int row,int col,int num){
	if(array==NULL)return false;
	if(row<=0||col<=0)return false;
	int row1=0;
	while(row1<=row&&col>0){
		if(num==array[row1][col-1])
		{
			return true;
			break;
		}
		else
			if(num>array[row1][col-1])
				row1++;
			else
				col--;
	}
}

int main(){
	int findnum;
	while(true){
		cin>>findnum;
		int array[4][4]={1,2,8,9,2,4,9,12,4,7,10,13,6,8,11,15};
		int result=FindNum(array,4,4,findnum);
		cout<<result<<endl;
	}
}
