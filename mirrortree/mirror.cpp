#include<iostream>
#iclude"treenode.h"
using namespace std;
void mirror(Node* root){
	if(root==NULL)return ;
	if(root->lchild==NULL&&root->rchild==NULL)return ;
	Node* cur=root->lchild;
	root->lchild=root->rchild;
	root->rchild=cur;
	if(cur->lchild)
		mirror(cur->lchild);
	if(cue->rchild)
		mirror(cur->rchild);
}
