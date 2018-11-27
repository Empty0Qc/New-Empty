#include "SeqList.h"

int main()
{
	SeqList sl;
	printf("≥ı ºªØ:\n");
	SeqListInit(&sl,10);
	printf("Œ≤≤Â:\n") ;
	SeqListPushBack(&sl, 1) ;
	SeqListPushBack(&sl, 2) ;
	SeqListPushBack(&sl, 3) ;
	SeqListPushBack(&sl, 4) ;
	SeqListPushBack(&sl, 5) ;
	SeqListPrint(&sl) ;
	printf("Œ≤…æ:\n") ;
	SeqListPopBack(&sl) ;
	SeqListPrint(&sl) ;
	printf("Õ∑≤Â: \n") ;
	SeqListPushFront(&sl,0) ;
	SeqListPrint(&sl) ;




	return 0 ;
}
