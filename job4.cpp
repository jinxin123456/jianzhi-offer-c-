#include<iostream>

using namespace std;

#define MAXSIZE 50
void ReplaceBlank(char *str,int length){
	if(str==NULL||length<=0)
		return ;
	int origin_length=0;
	int result_length=0;
	int blank_count=0;
	for(int i=0;str[i]!='\0';i++){
		origin_length++;
		if(str[i]==' ')
			blank_count++;
	}
	//cout<<"origin_length:"<<origin_length<<"    "<<"blankcount:"<<blank_count<<endl;
	result_length=origin_length+blank_count*2;
	//cout<<"result:"<<result_length<<endl;
	if(result_length>MAXSIZE)return ;
	//while(result_length>origin_length&&origin_length>=0){
	while(origin_length!=result_length){//equal with last sentence
		if(str[origin_length]==' '){
			str[result_length--]='0';
			str[result_length--]='2';
			str[result_length--]='%';
		}
		else
		{
			str[result_length--]=str[origin_length];
		}
		--origin_length;
	}
	for(int i=0;str[i]!='\0';i++)
		cout<<str[i];
	cout<<endl;
}
int main()
{
	char str[MAXSIZE]="We are happy.";
	int length=MAXSIZE;
	ReplaceBlank(str,length);
	return 0;
}
