#include <iostream>
using namespace std;

template<class T>
struct AVLNode
{
	AVLNode(const T& val = T())
	:_left(nullptr)
	, _right(nullptr)
	, _parent(nullptr)
	, _data(val)
	, _bf(0)
	{}
	AVLNode<T> _left;	
	AVLNode<T> _right;
	AVLNode<T> _parent;

	T _data;
	int _bf;
};

template<class T>
class AVLTree
{
public:
	//重定义节点名字
	typedef AVLTree<T> Node;

	//动态调整插入函数
	void Insert(const T& val)
	{
		//插入
		if (_root == nullptr)
		{
			_root = new Node(val);
			return true;
		}
		Node* cur = _root;
		Node* parent = nullptr;
		while (cur)
		{
			if (val > cur->_data)
			{
				parent = cur;
				cur = cur->_right;
			}
			else if (val < cur->_data)
			{
				parent = cur;
				cur = cur->_left;
			}
			else
				return false;
		}
		cur = new Node(val);
		if (parent->_left == cur->_data)
			parent->_left = cur;
		else
			parent->_right = cur;

		cur->parent = parent;
		//调节

		//1.调平衡因子
		while (parent)
		{
			if (parent->_left == cur)
				--parent->_bf;
			else
				++parent->_bf;
			if (parent->_bf == 0)
				break;
			else if (parent->_bf == 1 || parent->_bf == -1)
			{
				cur = parent;
				parent = parent->_bf;
			}
			else if (parent->_bf == 2 || parent->_bf == -2)
			{
				//旋转
				if (parent->_bf == -2 && cur->_bf == -1)
				{
					//右旋
					RotateR(parent);
				}
				if (parent->_bf == 2 && cur->_bf == 1)
				{
					//左旋
				}
			}
		}

		void RotateR(Node* parent)
		{
			Node *SubL = parent->_left;
			Node *SubLR = SubL->_right;

			//单链 
			SubL->_right = parent;
			parent->_left = SubLR;
			
			if (SubLR)
				SubLR->parent = parent;

			if (parent != _root)
			{
				Node* gparent = parent->parent;
				if (gparent->_left == SubL)
					gparent->_left = SubL;
				else
					gparent->_right = SubL;
				SubL->parent = gparent;
			}
			else
			{
				_root = SubL;
				SubL->parent = nullptr;
			}
			parent->parent = SubL;

			SubL->_bf = parent->_bf = 0;
		}
	}
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