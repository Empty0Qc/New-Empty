#pragma once

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef struct ListNode {
	int val;
	struct ListNode *next;
}ListNode;


struct ListNode* reverse(struct ListNode* list){
	if(list == NULL || list->next == NULL)
		return list; 
	struct ListNode* ne =reverse(list->next);
	list->next->next = list;
	list->next = NULL;
	return ne;
}
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
	struct ListNode* New;
	struct ListNode *ss;
	if(l1 == NULL || l2 == NULL){
		if( l1 != NULL)
			return l1;
		else
			return l2;
	}
	else if(l1->next == NULL && l2->next == NULL){
		if((l1->val + l2->val) > 9){
			New->val = (l1->val + l2->val)%10;            
			ss->val = 1;
			ss->next = NULL;
			New->next = ss;
			return New;
		}
		else
			New->val = (l1->val + l2->val)%10;
		New->next = NULL;
		return New;
	}
	struct ListNode *p1,*p2;
	p1 = reverse(l1);
	p2 = reverse(l2);
	struct ListNode *NewHead,*N;
	NewHead = p1;
	int flag = 1;
	while(p1 != NULL && p2 != NULL){
		N = p1;
		if((p1->val + p2->val) > 9){
			p1->val = (p1->val + p2->val)%10;
			flag = 2;
		}
		else if(flag == 2){
			p1->val = (p1->val + p2->val)%10 + 1;
			flag = 1;
		}
		else{
			p1->val = (p1->val + p2->val)%10;
		}
		p1 = p1->next;
		p2 = p2->next;
	}
	if(p2 != NULL){
		N->next = p2;
	}
	return NewHead;
}

int main(){
	ListNode *l1;
	ListNode *l2;
	ListNode *PPP;
	l2->val = l1->val = 5;
	l2->next = l1->next =NULL;
	PPP = addTwoNumbers(&l1,&l2);
	return 0;
}