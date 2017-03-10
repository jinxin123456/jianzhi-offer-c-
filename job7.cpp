#include<iostream>
#include<stack>
using namespace std;
template<T>
class CQueue{
	public:
		CQueue();
		~CQueue();
		void add(const T& node);
		T del();
	private:
		stack<T> stack1,stack2;
};
template<T>
void CQueue<T>::add(const T& node){
	if(node==NULL)
		return NULL;
	stack1.push_back(node);
}
template<T>
T CQueue<T>::del()
{
	while(stack2.size()>0){
		if(stack1.size()>0){
			T data=stack1.top();
			stack1.pop();
			stack2.push(data);
		}
	}
	if(stack.empty())
		return NULL;
	T head=stack2.top();
	stack2.pop();
	return head;
}
