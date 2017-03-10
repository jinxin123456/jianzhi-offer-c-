//maopao
//exchange the x and y while(x>y)
#include<iostream>
#include<vector>
using namespace std;
void maopao(vector<int>& nums)
{
	for(int i=0;i<nums.size()-1;i++){
		for(int j=0;j<nums.size()-i-1;j++)
		{
			if(nums[j]>nums[1+j])
			swap(nums[j],nums[1+j]);
		}
	}
}
int main(){
	vector<int> vec{10,7,8,3,0,5,1};
	maopao(vec);
	for(vector<int>::iterator it=vec.begin();it!=vec.end();it++)
		cout<<*it<<" ";
	cout<<endl;
	return 0;
}
