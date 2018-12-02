#include "Sqlist.h"

//��ʼ��
void ListInit(SList *SqList){
	assert(SqList);
	SqList->List_head = NULL;
}
void ListDestry(SList *SqList){
	assert(SqList);
	Node *node;
	for (Node *cur = SqList->List_head; cur != NULL;cur = node ) {
		node = cur->next;
		free(cur);
	}
	SqList->List_head = NULL;
}
//�����¿ռ�
Node *BuyListNode(DataType data){
	Node* node = (Node *)malloc(sizeof(Node));
	assert(node);
	node->data = data;
	node->next = NULL;
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
	assert(SqList);
	if (SqList->List_head == NULL){
		ListPushFront(SqList,data);
		return;
	}
	Node *last = SqList->List_head;
	for (; last->next != NULL; last = last->next) {}
	Node *node = BuyListNode(data);
	assert(node);
	last->next = node;
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
	assert(SqList);
	assert(SqList->List_head);
	if (SqList->List_head->next == NULL) {
		ListPopFront(SqList);
		return;
	}
	Node *old_node = SqList->List_head;
	for (;old_node->next->next!=NULL; old_node = old_node->next);
	free(old_node->next);
	old_node->next = NULL;

}
//����
Node *ListFind(SList *SqList, DataType data) {
	assert(SqList);
	for (Node *cur = SqList->List_head; cur != NULL; cur = cur->next) {
		if (cur->data == data)
			return cur;
	}
	return NULL; 
}

//ĳ�ڵ�������
void ListInsertAfter(Node *pos, DataType n_data) {
	assert(pos);
	Node *node = BuyListNode(n_data);
	node->next = pos->next;
	pos->next = node;
}

//ĳ�ڵ����ɾ��
void ListEarseAfter(Node *pos) {
	assert(pos);
	assert(pos->next != NULL);
	Node *old_node = pos->next;
	pos->next = pos->next->next;
	free(old_node);
}
//ɾ�������е�һ�������Ľڵ�
void ListRemove(SList *SqList, DataType r_data) {
	assert(SqList);
	Node *prev = NULL;
	Node *cur = SqList->List_head;
	while (cur != NULL && cur->data != r_data)
	{
		prev = cur;
		cur = cur->next;
	}
	if (cur == NULL){
		return;
	}
	if(prev == NULL)
	{
		ListPopFront(SqList);
		return;
	}
	
	prev->next = cur->next;
	free(cur);

}
//��ӡ
void ListPrint(SList *SqList){
	Node *cur= SqList->List_head;
	assert(SqList);
	for(; cur != NULL;cur=cur->next){
		printf("%d-->",cur->data);
	}
	printf("NULL\n");
}
