#include "DLSq.h"

static Node* BuyNode(DLTypeData data){
	Node* node = (Node*)malloc(sizeof(Node));
	node->next = node->prev = NULL;
	node->val = data;
	return node;
}

void DLlistInit(DLlist *list)
{
	Node *head = BuyNode(0);
	assert(list);
	assert(head);
	head->next = head;
	head->prev = head;
	list->head = head;
}
void DLlistDestory(DLlist *list){
	assert(list);
	i = list->head->val;
	while(i--){
		DLlistPopFront(list);
	}
	list->head->val = 0;
}

//删除所有val元素
void DLlistRemove(DLlist *list,DLTypeData val){
	Node *pos = NULL;
	assert(list);
	i = list->head->val;
	while(i>0){
		i--;
		pos = NULL;
		if((pos = NodeFind(list,val))!=NULL){
			DLlistErase(list,pos);
		}
	}
}
void DLlistPushFront(DLlist *list,DLTypeData data){
	Node *node = BuyNode(data);
	assert(node);
	assert(list);
	
	node->prev = list->head;
	node->next = list->head->next;
	list->head->next->prev = node;
	list->head->next = node;
	list->head->val++;
}
void DLlistPopFront(DLlist *list)
{
	Node *oldNode = NULL;
	assert(list);
	if(list->head->next == list->head){return;}
	if(list->head->next->next == list->head){
		oldNode = list->head->next;
		list->head->next = list->head;
		list->head->prev = list->head;
		free(oldNode);
		return;}
	oldNode = list->head->next;
	oldNode->next->prev = list->head;
	list->head->next = oldNode->next;
	free(oldNode);
	list->head->val--;
}

void DLlistPushBack(DLlist *list,DLTypeData data){
	Node *node = BuyNode(data);
	assert(node);
	assert(list);
	if(list->head->next == list->head)
	{
		DLlistPushFront(list,data);
		return;
	}
	node->next = list->head;
	node->prev = list->head->prev;
	list->head->prev->next = node;
	list->head->prev = node;
	list->head->val++;
}
void DLlistPopBack(DLlist *list){
	Node *old = NULL;
	assert(list);
	if(list->head->next == list->head){return;}
	if(list->head->next->next == list->head){DLlistPopFront(list);return;}
	old = list->head->prev;
	old->prev->next = list->head;
	list->head->prev = old->prev;
	free(old);
	list->head->val--;
}
Node* NodeFind(DLlist *list,DLTypeData val){
	Node *node = NULL,*cur = NULL;
	assert(list);
	cur = list->head;
	i = list->head->val;
	while(i--){
		cur = cur->next;
		if (cur->val == val)
		{
			return cur;
		}
	}
	return NULL;
	
}

//在pos前插入数据
void DLlistInsert(DLlist *list,Node *pos,DLTypeData val){
	Node *node = BuyNode(val);
	assert(pos);
	node->next = pos;
	node->prev = pos->prev;
	pos->prev->next = node;
	pos->prev = node;
	list->head->val++;
}
//删除pos数据
void DLlistErase(DLlist *list,Node *pos){
	assert(list);
	pos->prev->next = pos->next;
	pos->next->prev = pos->prev;
	free(pos);
	list->head->val--;
}

void Print(DLlist *list){
	Node *cur = list->head->next;
	Node *next = NULL;
	assert(list);
	if(list->head->next == list->head){ goto flag;return;}
	for(;cur!=list->head;cur = next)
	{
		next = cur->next;
		printf("%d-->",cur->val);
	}
flag:
	printf("\n双向带头链表共有%d个元素\n",list->head->val);
}
