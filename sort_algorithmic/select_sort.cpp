#include<iostream>
#include<vector>
using namespace std;
void select_sort(vector<int>& vec){
if(vec.size()==0)return ;
int temp,pos;
for(int i=0;i<vec.size()-1;i++)
{
	temp=vec[i];
	pos=i;
	for( int j=i;j<vec.size();j++){
		if(vec[j]<temp)
		{
			temp=vec[j];
			pos=j;
		}
	}
	if(temp<vec[i])
		swap(vec[i],vec[pos]);
}
}
int main(){
	vector<int> vec{10,8,7,6,5,65,43,23,2};
	select_sort(vec);
	for(auto it=vec.begin();it!=vec.end();it++)
	cout<<*it<<" ";
	cout<<endl;
	return 0;
}
