#include <iostream>
using namespace std;

template<class T>
struct BSTNode
{
	BSTNode(const T& val = T())
	:_left(nullptr)
	, _right(nullptr)
	, _data(val)
	{}
	BSTNode<T>* _left;
	BSTNode<T>* _right;
	T _data;
};

template<class T>
class BStree
{
public:
	typedef BSTNode<T> Node;
	BStree(Node* root = nullptr)
		:_root(root)
	{}
	/*BStree(const BStree<T>& bst)
	{}
	BStree<T>& operator=(const BStree<T>& bst)
	{}*/
	//~BStree()
	//{}

	Node* find(const T& x)
	{
		if (_root == nullptr)
			return nullptr;
		Node* cur = _root;
		while (cur)
		{
			if (cur->_data == x)
				return cur;
			else if (x > cur->_data)
				cur = cur->_right;
			else
				cur = cur->_left;
		}
		return nullptr;
	}

	bool Insert(const T& x)
	{
		if (_root == nullptr)
		{
			_root = new Node(x);
			return true;
		}
		Node* cur = _root;
		Node* parent = nullptr;
		while (cur)
		{
			if (cur->_data == x)
				return false;
			parent = cur;
			if (x > cur->_data)				
				cur = cur->_right;
			else		
				cur = cur->_left;
		}
		cur = new Node(x);
		if (x > parent->_data)
			parent->_right = cur;
		else
			parent->_left = cur;
		return true;
	}
	bool earse(const T& x)
	{
		if (_root == nullptr)
			reutrn false;
		Node* cur = _root;
		Node* parent = nullptr;
		while (cur)
		{
			if (cur->_data == x)
				break;
			parent = cur;
			if (x > cur->_data)
				cur = cur->_right;
			else
				cur = cur->_left;
		}
		if (cur == nullptr)return false;
		//1.叶子节点
		if (cur->_left == nullptr && cur->_right == nullptr)
		{
			if (cur != _root)
			{
				if (parent->_left == x)
					parent->_left = nullptr;
				else
					parent->_right = nullptr;
			}
			else
				_root = nullptr;
			delete cur;
			cur = nullptr;
		}
		//孩子节点不完整
		else if (cur->_left == nullptr)
		{
			if (cur != _root)
			{
				if (parent->_left == x)
					parent->_left = cur->_right;
				else
					parent->_right = cur->_right;
			}
			else
				_root = cur->_right;
			delete cur;
			cur = nullptr;
		}
		else if (cur->_right == nullptr)
		{
			if (cur != _root)
			{
				if (parent->_left == x)
					parent->_left = cur->_left;
				else
					parent->_right = cur->_left;
			}
			else
				_root = cur->_left;
			delete cur;
			cur = nullptr;
		}
		//孩子节点完整
		//把左树最大值，和找右树最小值，对最终排序结果无影响
		else
		{
			Node* leftMost = cur->_left;
			parent = cur;
			while (leftMost->_right)
			{
				parent = leftMost;
				leftMost = leftMost->_right;
			}
			cur->_data = leftMost->_data;
			if (parent->_left == leftMost)
				parent->_left = leftMost->_left;
			else
				parent->_right = nullptr;
			delete leftMost;
			leftMost = nullptr;
		}
	}
		void Inorder()
		{
			_Inorder(_root);
			cout << endl;
		}

		void _Inorder(Node* root)
		{
			if (root)
			{
				_Inorder(root->_left);
				cout << root->_data << " ";
				_Inorder(root->_right);
			}
		}
private:
	Node* _root;
};


int main()
{
	BStree<int> s;
	s.Insert(4);
	s.Insert(2);
	s.Insert(56);
	s.Insert(2);
	s.Insert(6);
	s.Insert(21);
	s.Insert(63);
	s.Inorder();
	return 0;
}