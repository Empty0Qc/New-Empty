#pragma	once
#include<cassert>

template<class T>
struct _ListNode
{
	T _data;
	_ListNode<T>* _prev;
	_ListNode<T>* _next;

	_ListNode(const T& x = T()) //T() 带缺省值的T调用它的默认构造或匿名构造
		:_data(x)
		, _next(nullptr)
		, _prev(nullptr)
	{}

};

//迭代器的构造
template<class T, class Ref, class Ptr>
struct _ListIterator
{
	typedef _ListNode<T> Node;
	typedef _ListIterator<T,Ref,Ptr> Self;
	Node* _node;

	_ListIterator(Node* node)
		:_node(node)
	{}

	Ref operator*()
	{
		return _node->_data;
	}
	Ptr operator->()
	{
		return &_node->_data;
		//return &(operator*());
	}

	//++it; --> it.operator++(&it)
	Self& operator--()
	{
		_node = _node->_prev;
		return *this;
	}
	Self operator--(int)
	{
		Self tmp(*this);
		_node = _node->_prev;
		return tmp;
	}
	Self& operator++()
	{
		_node = _node->_next;
		return *this;
	}
	Self operator++(int)
	{
		Self tmp(*this);
		_node = _node->_next;
		return tmp;
	}
	bool operator != (const Self& s)
	{
		return _node != s._node;
	}
	bool operator == (const Self& s)
	{
		return _node == s._node;
	}
};

template<class T>
class List
{
	typedef _ListNode<T> Node;
public:
	typedef _ListIterator<T,T&,T*> iterator;
	typedef _ListIterator<T,const T&,const T*> const_iterator;


	iterator begin()
	{
		return iterator(_head->_next);
	}

	iterator end()
	{
		return iterator(_head);
	}

	const_iterator begin() const
	{
		return const_iterator(_head->_next);
	}

	const_iterator end() const
	{
		return const_iterator(_head);
	}
	List()
	{
		_head = new Node;
		_head->_next = _head;
		_head->_prev = _head;
	}

	List(const List<T>& l)
	{
		_head = new Node;
		_head->_next = _head;
		_head->_prev = _head;
		List<int>::const_iterator it = l.begin();
		while (it != l.end())
		{
			PushFront(*(it++));
		}
	}
	//List<T>& operator=(const List<T>& l);
	List<T>& operator=(List<int> l)
	{
		swap(_head, l._head);
		return *this;
	}

	~List()
	{
		Clear();
		delete _head;
		_head = nullptr;
	}

	size_t Size()
	{
		size_t size = 0;
		for (const auto& e : *this)
		{
			++size;
		}
		return size;
	}

	bool Empty()
	{
		return _head->_next == _head;
		//return begin() == end();
	}
	void Clear()
	{
		Node* cur = _head->_next;
		while (cur != _head)
		{
			Node* next = cur->_next;
			delete cur;

			cur = next;
		}
		_head->_next = _head;
		_head->_prev = _head;
	}

	void PushBack(const T& x)
	{
		//Insert(end(),x); 

		Node* newnode = new Node(x);
		Node* tail = _head->_prev;
		tail->_next = newnode;
		newnode->_prev = tail;
		newnode->_next = _head;
		_head->_prev = newnode;

	}
	void PopBack()
	{
		Erase(end());
	}
	void PushFront(const T& x)
	{
		Insert(begin(), x);
	}
	void PopFront()
	{
		Erase(begin());
	}
	void Insert(iterator pos, const T& x)
	{
		Node* cur = pos._node;
		Node* prev = cur->_prev;
		Node* newnode = new Node(x);
		prev->_next = newnode;
		newnode->_next = cur;
		newnode->_prev = prev;
		cur->_prev = newnode;
	}
	void Erase(iterator pos)
	{
		Node* cur = pos._node;
		Node* prev = cur->_prev;
		Node* next = cur->_next;

		prev->_next = next;
		next->_prev = prev;
		delete cur;
	}
private:
	Node* _head;
};