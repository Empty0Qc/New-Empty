#include<cstdio>
#include<vector>
#include<cassert>
#include<string>
#include<iostream>
using namespace std;

template <class T>
class Vector
{
public:
	typedef T* iterator;
	typedef const T* const_iterator;
	Vector()
		: _start(nullptr)
		, _finish(nullptr)
		, _endOfstorage(nullptr)
	{}
	
	void PushBack(const T& val)
	{
		//�ж�����
		if (_finish == _endOfstorage)
		{
			size_t newCapacity = _start == nullptr ? 1 : 2 * Capacity();
			Reserve(newCapacity);
		}
		*_finish++ = val;
	}

	Vector(const Vector<T>& v)
	{
		//1.������� 2.���ռ� 3.���� 4.�ͷ�ԭ�пռ�
		_start = new T[v.Capacity()];
		for (int i = 0; i < v.Size(); i++)
		{
			_start[i] = v[i];
		}
		_finish = _start + v.Size();
		_endOfstorage = _start + v.Capacity();
	}

	//��ֵ���������
	Vector<T>& operator=(const Vector<T>& v)
	{
		//����Ƿ��Լ���ֵ
		//����ֵ����:���ã�Ϊ��������ֵ
		//����: *this
		if (this != &v)
		{
			T* tmp = new T[v.Capacity()];
			size_t sz = Size();
			for (int i = 0; i < v.Size(); i++)
				{
					tmp[i] = v[i];
				}
			if (_start)
			{	
				delete[] _start;
			}
			_start = tmp;
			_finish = _start + sz;
			_endOfstorage = _start + v.Capacity();
		}
		return *this;
	}

	void PopBack()
	{
		Erase(end() - 1);
		//Erase(_finish - 1);
	}

	Vector<T> operator=(Vector<T> v)
	{
		Swap(v);
		return *this;
	}

	void Swap(Vector<T>& v)
	{
		swap(_start, v._start);
		swap(_finish, v._finish);
		swap(_endOfstorage, v._endOfstorage);
	}

	//һ���ɶ���д�Ľӿ�
	T& operator[](size_t pos)
	{
		assert(pos < Size());
		return _start[pos];
	}
	const T& operator[](size_t pos) const
	{
		assert(pos < Size());
		return _start[pos];
	}
	size_t Capacity() const
	{
		return _endOfstorage - _start;
	}
	bool Empty()
	{
		return _strat == _finish;
	}

	size_t Size() const
	{
		return _finish - _start;
	}

	iterator begin()
	{
		return _start;
	}
	const_iterator begin() const
	{
		return _start;
	}
	iterator end()
	{
		return _finish;
	}
	const_iterator end() const
	{
		return _finish;
	}
	void Reserve(size_t n)
	{
		if (n > Capacity())
		{
			int len = Size();
			//�����¿ռ�
			T* tmp = new T[n];
			//����ԭ��(ǳ������ʽ���������)
			/*if (_start)
			{
				memcpy(tmp, _start, sizeof(T)*len);
				delete[] _start;
			}*/
			//�����Զ������͵ĸ�ֵ��������أ��������
			if (_start)
			{
				for (int i = 0; i < len; i++)
				{
					tmp[i] = _start[i];
				}
				delete[] _start;
			}
			//����ָ��
			_start = tmp;
			_finish = _start + len;
			_endOfstorage = _start + n;
		}
	}

	//���뵼�µ�����ʧЧ��������ԭ�пռ䱻�ͷţ�������ָ���λ��ʧЧ
	void Insert(iterator pos, const T& val)
	{
		assert(pos <= _finish && pos >= _start);
		size_t len = pos - _start;
		//���ռ��Ƿ��㹻
		if (_finish == _endOfstorage)
		{
			size_t newC = _start == nullptr ? 1 : 2 * Capacity();
			Reserve(newC);
		}
		//���ݺ󣬵������ĸ���
		pos = _start + len;
		iterator end = _finish;
		//�Ӻ���ǰŲ��Ԫ�أ��ڳ�pos�Ŀռ䣬����µ�Ԫ��val
		while (end > pos)
		{
			*end = *(end - 1);
			end--;
		}
		*pos = val;
		_finish++;
	}

	iterator Earse(iterator pos)
	{
		assert(pos < _finish && pos >= _start);
		iterator begin = pos + 1;
		while (begin < _finish)
		{
			*(begin - 1) = *begin;
			++begin;
		}

		--_finish;

		return pos;
	}

	void Resize(size_t n, const T& val = T())
	{
		if (n <= Size())
		{
			_finish = _start + n;
		}
		else
		{
			if (n > Capacity())
				Reserve(n);
			//����λ�ø�ֵ
			while (_finish != _start + n)
			{
				*_finish = val;
				++_finish;
			}
		}
	}
	~Vector()
	{
		if (_start)
		{
			delete[]  _start;
			_start = _finish = _endOfstorage = nullptr;
		}
	}
	/*size_t capacity()const
	{
		return Capacity();
	}*/
private:
	T* _start;
	T* _finish;
	T* _endOfstorage;
};

template<class T>
void PrintVector(const Vector<T>& v)
{
	for (int i = 0; i < (int)v.Size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}

template<class T>
void PrintVectorIterator(const Vector<T>& v)
{
	//Vector<T>::const_iterator-->vit;
	//Vector<T>::const_iterator vit = v.begin();
	auto vit = v.begin();
	while (vit != v.end())
	{
		cout << *vit << " ";
		++vit;
		//ǰ��++���������ʱ����������++�����
	}
	cout << endl;
}

template<class T>
void PrintVectorIterator2(const Vector<T>& v)
{
	for (const auto& e : v)
	{
		cout << e << " ";
	}
	cout << endl;
}
void test1()
{
	Vector<int> v;
	v.PushBack(1);
	v.PushBack(2);
	v.PushBack(3);
	v.PushBack(4);
	// int()
	// Ϊ��֧�ַ��ͣ���������Ҳ�����������ڹ��캯���ķ�ʽ��������
	int b = int();
	int c = int(3);
	v.Resize(10,c);

	auto vit = v.begin();
	while (vit != v.end())
	{
		if (*vit % 2 == 0)
			vit = v.Earse(vit);
		else
			++vit;
	}

	//for (int i = 0; i < (int)v.Size(); i++)
	//{
	//	cout << v[i] << " ";
	//}
	//cout << endl;
	/*Vector<string> v2;
	v2.PushBack("abc");
	v2.PushBack("def");
	v2.PushBack("ghi");
	v2.PushBack("jkl");
	v2.Insert(v2.begin(),"hao");
	v2.Insert(v2.end(), "zhong");
	v2.Insert(v2.begin() + 1, "guo");*/
	//v2[2] = "chaoqiwen shi xiaoguapi";
	//auto vit = v2.begin();
	//*vit = "xiaoguapi";
	//PrintVectorIterator(v2);
	PrintVectorIterator2(v);

}
int main()
{
	//vector<int> v;
	//cout << v.capacity() << endl;
	test1();
	system("pause");
	return 0;
}


