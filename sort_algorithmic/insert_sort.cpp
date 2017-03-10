//insert sort
#include<iostream>
#include<vector>
using namespace std;
void insert_sort(vector<int> &nums){
	for(int i=1;i<nums.size();i++){
		for(int j=i;j>0;j--){
			if(nums[j-1]<nums[j])
				swap(nums[j-1],nums[j]);
			else
				break;
		}
	}
}
//insert_sort
/*void insert_sort(vector<int> &vec){
  if(vec.size()<=0)
  return ;
  for(int i=1;i<vec.size();i++){
  int temp=vec[i];
  int pos=i-1;
  while((pos>=0)&&(vec[pos]>temp)){
  vec[pos+1]=vec[pos];
  pos--;
  }
  vec[pos+1]=temp;
  }
  }*/
int main(){
	vector<int> vec{10,7,8,3,0,5,1};
	insert_sort(vec);
	for(vector<int>::iterator it=vec.begin();it!=vec.end();it++)
		cout<<*it<<" ";
	cout<<endl;
	return 0;
}
