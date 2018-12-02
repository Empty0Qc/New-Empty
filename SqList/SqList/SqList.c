#include "SqList.h"

//初始化
void ListInit(SList *SqList){
	assert(SqList);
	SqList->List_head = NULL;
}
//申请新空间
Node *BuyListNode(DataType data){
	Node* node = (Node *)malloc(sizeof(Node));
	assert(node);
	node->data = data;
	return node;
}

//在头添加
void ListPushFront(SList *SqList,DataType data){
	Node *node;
	assert(SqList);

	node = BuyListNode(data);
	//把链表头指针的指向传给这块新空间的next
	node->next = SqList->List_head;
	//把头指针的指向变为这块新空间
	SqList->List_head = node;
}


//尾插
void ListPushBack(SList *SqList,DataType data){
	Node *last = SqList->List_head;
	Node *node = BuyListNode(data);
	assert(node);
	assert(SqList);
	if (SqList->List_head == NULL)
	{
		ListPushFront(SqList,data);
		return;
	}
	for (;last->next != NULL;last = last->next);
	last->data = node;
	last->next = NULL;
}


//头删
void ListPopFront(SList *SqList){
	Node *old_list;
	assert(SqList); //没有链表
	assert(SqList->List_head != NULL); //有链表，但链表为空
	old_list = SqList->List_head;
	SqList->List_head = SqList->List_head->next;
	free(old_list);
}
//尾删
void ListPopBack(SList *SqList){
	Node *old_node = SqList->List_head;
	assert(SqList);
	for (;old_node->next->next!=NULL; old_node = old_node->next);
	free(old_node->next);
	old_node->next = NULL;

}

//打印
void ListPrint(SList *SqList){
	Node *cur= SqList->List_head;
	assert(SqList);
	assert(SqList->List_head != NULL);
	for(; cur != NULL;cur=cur->next){
		printf("%d ",cur->data);
	}
}
