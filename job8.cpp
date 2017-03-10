#include<iostream>
using namespace std;

int find_min(int arr[],int length){
	if(arr==NULL || length<=0)return 88;
	int left=0;
	int right=length-1;
	int mid=0;
	while(arr[left]>=arr[right]){
		if(right-left==1){
		mid=right;
		break;
		}
		mid=(left+right)/2;
		if(arr[mid]>=arr[left]){
			left=mid;
		}
		else if(arr[mid]<=arr[right]){
			right=mid;
		}
	}
	return arr[mid];
}
int main(){
	int arr[]={4,5,1,2,3};
	int min=find_min(arr,5);
	cout<<min<<endl;
}
