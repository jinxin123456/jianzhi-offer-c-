#include<iostram>
#include<stack>
#include<deque>
using namespace std;
template<T>
struct BiNode{
	T data;
	BiTree<T> *lchild,rchild;
};

template<T>
class BiTree{
	public:
		BiTree();
		~BiTree();
		BiNode<T>* Getroot();
		void preorder(BiNode<T>*);
		void inorder(BiNode<T>*);
		void postinorder(BiNode<T>*);
		void levelorder(BiNode<T>*);
	private:
		BiNode<T> *root;
		BiNode<T> *Creat();
		void release(BiNode<T>* root);
};
template<T>
BiTree<T>::BiTree(){
	this->root=Creat();
}
template<T>
BiNode<T>* BiTree<T>::Creat(){
	BiNode<T>* root;
	T ch;
	cout<<"input the node"<<endl;
	cin>>ch;
	if(ch=="#")root=NULL;
	else
	{
		root=new BiNode<T>;
		root->data=ch;
		root->lchild=Creat();
		root->rchild=Creat();
	}
	return root;
}
template<T>
BiTree<T>::~BiTree(){
	release(root);
}

template<T>
void BiTree<T>::release(BiNode<T>* root){
	if(root!=NULL){
		release(root->lchild);
		release(root->rchild);
		delete root;
	}
}
	template<T>
BiNode<T> BiTree<T>::Getroot()
{
	return root;
}
//preorder
template<T>
void BiTree<T>::preorder(BiNode* root){
	if(root==NULL) return;
	stack<BiNode<T> > stk;
	stk.push(root);
	while(stk.empty()){
		BiNode cur=stk.top();
		cout<<cur.data<<" ";
		stk.pop();
		if(cur->rchild)
			stk.push(cur->rchild);
		if(cur->lchild)
			stk.push(cur->lchild);
	}
}
//inorder
template<T>
void BiTree<T>::inorder(BiNode* root){
	if(root==NULL)
		return;
	stack<BiNode<T> > stk;
	BiNode<T> cur=root;
	while(true){
		while(cur!=NULL){
			stk.push(cur);
			cur=cur->lchild;
		}
		if(stk.empty())
			break;
		cur=stk.top();
		cout<<cur->data<<"  ";
		stk.pop();
		cur=cur->rchild;
	}
}
//postorder
template<T>
void postorder(BiNode<T>* root){
	if(root==NULL)
		return;
	stack<BiNode<T> > stk,outstk;;
	stk.push(root);
	if(!stk.empty()){
		BiNode cur=stk.top();
		outstk.push(cur);
		stk.pop();
		if(cur->lchild)
			stk.push(lchild);
		if(cur->rchild)
			stk.push(cur->rchild);
	}
	while(!outstk.empty())
	{
		cout<<outstk.top()->data<<" ";
		outstk.pop();
	}
}
//levelorder
template<T>
void BiNode<T>::levelorder(BiNode* root){
	if(root==NULL)return;
	deque<BiNode<T> > deq;
	deq.push_back(root);
	while(deq.empty()){
		BiNode cur=deq.front();
		cout<<cur->data<<" ";
		if(cur->lchild)
			deq.push_back(cur->lchild);
		if(cur->rchild)
			deq.push_back(cur->rchild);
	}
}
//reconstruct BiTree by preorder and inorser
template<T>
BiNode* construct(T *preorder,T* inorder,T nodenum){
	if(preorder==NULL || inorder==NULL||nodenum==NULL)
		return NULL;
	BiNode* reconstruct(preorder,preorder+nodenum-1,inorder,inorder+nodenum-1);
}
BiNode* reconstruct(T* startpre,T *endpre,T *startin,T* endin){
	T rootvalue=startpre[0];
	BiNode* root=new BiNode();
	root->data=rootvalue;
	root->lcild=root->rchild=NULL;
	if(startpre==endpre){
		if(startin==endin)
			return root;
		else 
			return NULL;
	}
	T* rootin=startin;
	while(rootin<endin&&*rootin!=rootnalue)
		++ rootin;
	if(endin==rootin&&*rootin!=rootvalue)
		return NULL;
	T leftlength=rootin-startin;
	T* leftpreend=startpre+leftlength;
	if(length>0){
		root->lchild=construct(startpre+1,leftpreend,startin,rootin-1);
	}
	if(leftlength<endpre-startpre)
	{
		root->rchild=construct(leftpreend+1;endpre,rootin+1,endin);
	}
}
