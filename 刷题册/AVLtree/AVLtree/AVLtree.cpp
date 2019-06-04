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
	//�ض���ڵ�����
	typedef AVLTree<T> Node;

	//��̬�������뺯��
	void Insert(const T& val)
	{
		//����
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

		cur->_parent = parent;
		//����

		//1.��ƽ������
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
				//��ת
				if (parent->_bf == -2 && cur->_bf == -1)
				{
					//����
					RotateR(parent);
				}
				else if (parent->_bf == 2 && cur->_bf == 1)
				{
					//����
					RotateL(parent);
				}
				else if (parent->_bf == 2 && cur->_bf == -1)
				{
					subR = parent->_right;
					subRL = subR->_left;
					int bf = subRL->_bf;
					RotateR(parent);
					RotateL(parent);
					if (bf == -1)
					{
						parent->_bf = 0;
						subR->_bf = 1;
					}
					else if (bf == 1)
					{
						parent->_bf = -1;
						subR->_bf = 0;
					}
				}
				else if (parent->_bf == -2 && cur->_bf == 1)
				{
					RotateL(parent);
					RotateR(parent);
				}
			}
		}
		void RotateR(Node* parent)
		{
			Node *SubL = parent->_left;
			Node *SubLR = SubL->_right;

			//���� 
			SubL->_right = parent;
			parent->_left = SubLR;
			
			if (SubLR)
				SubLR->_parent = parent;

			if (parent != _root)
			{
				Node* gparent = parent->_parent;
				if (gparent->_left == SubL)
					gparent->_left = SubL;
				else
					gparent->_right = SubL;
				SubL->_parent = gparent;
			}
			else
			{
				_root = SubL;
				SubL->_parent = nullptr;
			}
			parent->_parent = SubL;

			SubL->_bf = parent->_bf = 0;
		}
		void RotateL(Node* parent)
		{
			Node *SubR = parent->_right;
			Node *SubRL = SubL->_left;

			//���� 
			SubL->_left = parent;
			parent->_right = SubLR;

			if (SubRL)
				SubRL->_parent = parent;

			if (parent != _root)
			{
				Node* gparent = parent->_parent;
				if (gparent->_left == SubR)
					gparent->_left = SubR;
				else
					gparent->_right = SubR;
				SubR->_parent = gparent;
			}
			else
			{
				_root = SubR;
				SubR->_parent = nullptr;
			}
			parent->_parent = SubL;

			SubR->_bf = parent->_bf = 0;
		}
	}
private:
	Node* _root = nullptr;
};


int main()
{
	AVLTree<int>* a = new AVLTree<int>;
	a->Insert(1);
	a->Insert(4);
	a->Insert(2);
	a->Insert(4);
	a->Insert(5);
	return 0;
}