
#include<iostream>
#include<stack>
using namespace std;

struct ListNode{
	int data;
	ListNode* next;
};
void PrintList(ListNode* pHead){
	stack<ListNode*> s;
	ListNode* pNode=pHead;
	while(pNode!=NULL){
		s.push(pNode);
		pNode=pNode->next;
	}
	while(!s.empty()){
		pNode=s.top();
		cout<<pNode->data<<" ";
		s.pop();
	}
	cout<<endl;
}
int main(){
	ListNode* pHead=new ListNode;
	//pHead->data=0;
	//pHead->next=NULL;
	for(int i=1;i<10;i++){
		ListNode* Node=new ListNode;
		Node->data=i;
		Node->next=pHead->next;
		pHead->next=Node;
	}	
	pHead=pHead->next;
	while(pHead!=NULL){
	cout<<pHead->data<<"  ";
	pHead=pHead->next;}
	cout<<endl;
	PrintList(pHead);
	return 0;
}
