#include<bits/stdc++.h>
 using namespace std;
 //*****STRUCTURE FOR NODE*****
  struct node
  {
  	int data;
  	node*left,*right;
  	node(int val){
  		data=val;
  		left=NULL;
  		right=NULL;
  	}
  };
  //*****TO INSERT THE NODE IN BINARY TREE****
  node*insertBST(node*root,int val){
  	if(root==NULL){
  		return new node(val);
  	}
  	if (val< root->data)
  	{
  		root->left=insertBST(root->left,val);
  	}
  	else{
  		root->right=insertBST(root->right,val);
  	}
  	return root;
  }
  // ****INORDER FINDING PROCESS****
  void inorder(node*root){
  	if (root==NULL)
  	{
  		return;
  	}
  	inorder(root->left);
  	cout<<root->data<<" ";
  	inorder(root->right);

  }
  //S*****EARCH THE ELEMNT WHICH WE WANT TO SEACH*****
  node*searchInBST(node*root,int key){
  	if(root==NULL){
  		return NULL;
  	}
  	if (root->data==key)
  	{ return root;
  		 
  	}
  	if(root->data>key){
  		return searchInBST(root->left,key);
  	}
  	return searchInBST(root->right,key);
  }
   int main()
   {
   	node*root=NULL;
   	root=insertBST(root,5);
   	insertBST(root,1);
   	insertBST(root,3);
   	insertBST(root,4);
   	insertBST(root,2);
   	insertBST(root,7);
   	inorder(root);
   	cout<<endl;
   	if(searchInBST(root,5)==NULL){
	cout<<"key does not exist:";
}
else{
	cout<<"key is exist:";
}

   }