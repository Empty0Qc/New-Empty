#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int QDataType;

typedef struct QNode{
	QDataType val;
	struct QNode *next;
}QNode;

typedef struct Queue{
	QNode *front;
	QNode *rear;
	int size;
}Queue;

//初始化/销毁
void QueueInit(Queue *queue){
	queue->front = queue->rear = NULL;
	queue->size = 0;
}
void QueueDestory(Queue *queue){
	QNode *next,*cur;
	assert(queue);
	for (cur=queue->front; cur!=NULL; cur=next){
		next = cur->next;
		free(cur);
	}
	queue->front = queue->rear =NULL;
	queue->size = 0;
}
//增删查改

void QueuePush(Queue *queue,QDataType val){
	QNode *node = (QNode *)malloc(sizeof(QNode));
	assert(node);
	assert(queue);
	node->val = val;
	node->next = NULL;
	queue->size++;
	if (queue->rear == NULL){
		queue->front = queue->rear = node;
	}
	else{
		queue->front->next = node;
		queue->rear = node;
	}
}

void QueuePop(Queue *queue,QDataType val){
	QNode *oldNode;
	assert(oldNode);
	assert(queue);
	assert(queue->size > 0);
	oldNode = queue->front;
	queue->size--;
	queue->front = queue->front->next;
	free(oldNode);
	if (queue->front == NULL)
	{
		queue->rear = NULL;
	}
}

QDataType QueueFront(const Queue *queue){
	assert(queue);
	assert(queue->size > 0);
	return queue->front->val;
}

int QueueEmpty(const Queue *queue){
	assert(queue);
	return queue->size == 0 ? 1:0;
}

int QueueSize(const Queue *queue){
	return queue->size;
}