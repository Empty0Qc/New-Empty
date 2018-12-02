#include "SqList.h"

//初始化
void ListInit(SList *SqList){
	assert(SqList);
	SqList->List_head = NULL;
}
//申请新空间
static Node* BuyListNode(DataType data){
}

//在头添加
void ListPushFront(SList *SqList,DataType data){
	Node *node;
	assert(SqList);
	//申请数据空间
	node = (Node *)malloc(sizeof(Node));
	assert(node);
	//给申请到的新空间赋值
	node->data = data;
	//把链表头指针的指向传给这块新空间的next
	node->next = SqList->List_head;
	//把头指针的指向变为这块新空间
	SqList->List_head = node;
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

//打印
void ListPrint(SList *SqList){
	Node *cur= SqList->List_head;
	assert(SqList);
	assert(SqList->List_head != NULL);
	for(; cur != NULL;cur=cur->next){
		printf("%d ",cur->data);
	}

}
