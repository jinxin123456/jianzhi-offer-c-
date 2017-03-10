#include<iostream>

using namespace std;

void shell_sort(int *arr, int length){
	int step=3;
	for(step=3;step>0;step--){
		for(int i=0;i<step;i++){
			for(int j=i+step;j<length;j=j+step){
				if(arr[j]<arr[j-step]){
					int temp=arr[j];
					int k=j-step;
					while(k>=0&&arr[k]>temp){
						arr[k+step]=arr[k];
						k=k-step;
					}
					arr[k+step]=temp;
				}


			}
		}
	}
}
int main(){
	int arr[]={7,3,4,1,8,2,9,10,7,6,5};
	shell_sort(arr,11);
	for(int i=0;i<11 ;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}

