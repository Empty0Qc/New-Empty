#include <iostream>
using namespace std;

template<class T>
struct Node
{
	
};

/*
Node *parent = parent;

subR->_left = parent;
parent->right = subRL;

if(subRL) subRL = parent;
Node* gparent = parent->parent;
if(gparent != nullptr)
{
	if (gparent->_left == parent)
		gparent->_left = subR;
	else
		gparent->_right = subR;
}
else
{
	subR->parent = nullptr;
	_root = subR;
}
parent->parent = subR;
subR->bf = parent->bf = 0;
*/