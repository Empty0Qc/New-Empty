#include "Sqlist.h"

Node *partition(SList* pHead, int x) {
	if (pHead == NULL) {
		return NULL;
	}
	Node *cur = pHead->List_head;
	Node *p1 = NULL, *r_p1 = NULL, *p2 = NULL, *r_p2 = NULL;
	while (cur != NULL) {
		if (cur->data <= x) {
			if (p1 == NULL) {
				p1 = r_p1 = cur;
			}
			else{
				r_p1->next = cur;
				r_p1 = r_p1->next;
			}
			
		}
		else {
			if (p2 == NULL) {
				p2 = r_p2 = cur;
			}
			else {
				r_p2->next = cur;
				r_p2 = r_p2->next;
			}
		}
		cur = cur->next;
	}
	if (p1 && p2) {
		r_p1->next = p2;
		r_p2->next = NULL;
		return p1;
	}
	else if (!p1 && !p2) {
		return NULL;
	}
	else if (p1 && !p2) {
		r_p2->next = NULL;
		return p2;
	}
	else {
		r_p1->next = NULL;
		return p1;
	}
}
void Gaga() {
	SList list;
	ListInit(&list);
	ListPushFront(&list, 2);
	ListPushFront(&list, 7);
	ListPushFront(&list, 9);
	ListPushFront(&list, 6);
	ListPushFront(&list, 5);
	ListPushFront(&list, 1);
	ListPushFront(&list, 4);
	ListPushFront(&list, 3);
	SList l2;
	ListInit(&l2);	
	ListPrint(&list);
	l2.List_head = partition(&list,6);
	ListPrint(&l2);
}

int main() {
	
	Gaga();
	/*ListPushFront(&list, 1);
	ListPushFront(&list, 2);
	ListPushFront(&list, 3);
	ListPushFront(&list, 4);
	ListPushBack(&list,5);
	ListPrint(&list);
	ListPopBack(&list);
	ListPrint(&list);
	Node *f_node = ListFind(&list, 3);
	ListInsertAfter(f_node, 99);
	ListPrint(&list);
	f_node = ListFind(&list, 99);
	ListEarseAfter(f_node);
	ListRemove(&list,4);
	ListPrint(&list);
	ListDestry(&list);
	ListPrint(&list);*/
	system("pause");

	return 0;
}
