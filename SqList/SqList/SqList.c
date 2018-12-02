#include "SqList.h"

//��ʼ��
void ListInit(SList *SqList){
	assert(SqList);
	SqList->List_head = NULL;
}
//�����¿ռ�
static Node* BuyListNode(DataType data){
}

//��ͷ���
void ListPushFront(SList *SqList,DataType data){
	Node *node;
	assert(SqList);
	//�������ݿռ�
	node = (Node *)malloc(sizeof(Node));
	assert(node);
	//�����뵽���¿ռ丳ֵ
	node->data = data;
	//������ͷָ���ָ�򴫸�����¿ռ��next
	node->next = SqList->List_head;
	//��ͷָ���ָ���Ϊ����¿ռ�
	SqList->List_head = node;
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

//��ӡ
void ListPrint(SList *SqList){
	Node *cur= SqList->List_head;
	assert(SqList);
	assert(SqList->List_head != NULL);
	for(; cur != NULL;cur=cur->next){
		printf("%d ",cur->data);
	}

}
