#include<iostream>
#include<vector>
using namespace std;
void merge(int *arr,int first,int mid,int last){
	int *temp = new int[last-first+1];
	int i=first;
	int j=mid+1;
	int k=0;
	while(i<=mid&&j<=last){
		if(arr[i]<arr[j])
			temp[k++]=arr[i++];
		else
			temp[k++]=arr[j++];
	}
	while(i<=mid)
		temp[k++]=arr[i++];
	while(j<=last)
		temp[k++]=arr[j++];
	for(int m=0;m<last-first+1;m++){
		arr[first+m]=temp[m];
	}
}
void merge_sort(int *arr,int first, int last){
	if(first<last){
		int mid=(first+last)/2;
		merge_sort(arr,first,mid);
		merge_sort(arr,mid+1,last);
		merge(arr,first,mid,last);
	}
}
int main(){
	int arr[7]={9,5,7,4,3,6,1};
	merge_sort(arr,0,6);
	for(int i=0;i<7;i++)
		cout<<arr[i]<<" ";
		cout<<endl;
}
