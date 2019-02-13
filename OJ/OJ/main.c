#pragma once
 
typedef struct CNode {
	int val;
	struct CNode *random;
	struct CNode *next;
}CNode;                                              

void CopyNewNodeBehindOld(CNode *head){
	CNode *cur = head;
}