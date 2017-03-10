#include<iostream>

using namespace std;

void quick_sort(int arr[],int left, int right){
	if(left>=right)return;
	int i=left,j=right;
	int base=arr[i];
	while(i<j){
		while(i<j && arr[j]>=base)j--;
		arr[i]=arr[j];
		while(i<j && arr[i]<=base)i++;
		arr[j]=arr[i];
	}
	arr[i]=base;
	quick_sort(arr,left,i-1);
	quick_sort(arr,i+1,j);
}
int main(){
	int arr[]={3,7,8,5,2,1,9,4};
	quick_sort(arr,0,7);
	for(int i=0;i<7;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}
