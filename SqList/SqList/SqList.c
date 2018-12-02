#include "SqList.h"

//��ʼ��
void ListInit(SList *SqList){
	assert(SqList);
	SqList->List_head = NULL;
}
//�����¿ռ�
Node *BuyListNode(DataType data){
	Node* node = (Node *)malloc(sizeof(Node));
	assert(node);
	node->data = data;
	return node;
}

//��ͷ���
void ListPushFront(SList *SqList,DataType data){
	Node *node;
	assert(SqList);

	node = BuyListNode(data);
	//������ͷָ���ָ�򴫸�����¿ռ��next
	node->next = SqList->List_head;
	//��ͷָ���ָ���Ϊ����¿ռ�
	SqList->List_head = node;
}


//β��
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


//ͷɾ
void ListPopFront(SList *SqList){
	Node *old_list;
	assert(SqList); //û������
	assert(SqList->List_head != NULL); //������������Ϊ��
	old_list = SqList->List_head;
	SqList->List_head = SqList->List_head->next;
	free(old_list);
}
//βɾ
void ListPopBack(SList *SqList){
	Node *old_node = SqList->List_head;
	assert(SqList);
	for (;old_node->next->next!=NULL; old_node = old_node->next);
	free(old_node->next);
	old_node->next = NULL;

}

//��ӡ
void ListPrint(SList *SqList){
	Node *cur= SqList->List_head;
	assert(SqList);
	assert(SqList->List_head != NULL);
	for(; cur != NULL;cur=cur->next){
		printf("%d ",cur->data);
	}
}
