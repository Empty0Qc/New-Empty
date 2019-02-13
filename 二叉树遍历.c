#if 0
Node *Find(Node *root,int val){
	if (root == NULL){
		return NULL;
	}
	if(root->val == val){
		return root;
	}
	Node *r1 = Find(root->left,val);
	if(r1 != NULL){
		return r1;
	}
	Node *r2 = Find(root->right,val);
	if(r2 != NULL){
		return r2;
	}
	
	return NULL;
}
#endif

void AdjustDown(){
	int left  = 2 * root + 1;
	int right = 2 * root + 2;
}
void CreatHeap(int array[],int size){
	
}