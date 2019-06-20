//#pragma once
//#include<iostream>
//#include<fstream>
//#include<string>
//#include <vector>
//#include <map>
//#include <algorithm>
//using namespace std;
//
//class myApriori
//{
//public:
//	myApriori(int minsupport = 0)	{ minSupport = minsupport; }
//	//~myApriori() {};
//	void getBasket(string filelocation);//���ļ���ȡ������
//	void findFreItem();//�������Ƶ����
//	vector<vector<int>> apriGen(int K);//��������Lk-1���õ���k����ѡƵ����Ck��Ck�д洢����freID
//	bool almostSame(vector<int>, vector<int>);//������vector�Ƿ����һ����ͬ��ǰ��Ԫ�ض���ͬ
//	bool hasInfreSubset(vector<int>, map < vector<int>, int >);//��һ���������Ƿ���������k-1���Ӽ��������ڵڶ���������
//	void printKItem();//��ӡƵ���
//private:
//	map<string, int> totalID;//������������(���1-n)
//	map<int, int> freID;//��һ��ɨ����~�����ţ������ֵ����������~�����ţ�Ƶ�����ţ���Ƶ������1-m����Ƶ����������Ŷ�Ӧ0��
//	map<int, string> freID2item;//Ƶ�����ţ�����
//	map< int, vector<int> > basket;//<��������ţ�������>���������д�������totalID��ģ�����ݿ��е�����
//	vector<map<vector<int>, int>> KItem;//�洢Ƶ�����K��2��ʼ����Ƶ����洢�����С�����map�ĵڶ�����������ĳ��ִ���
//	int minSupport;//��С��ֵ
//};
//
////��ӡƵ�����ע�⣺�����У�Ƶ����������ֵ���ģ���Ӧ������һ�����ֵ������ʱӦ������
//void myApriori::printKItem()
//{
//	cout << "**********************************" << endl;
//	cout << "minSupport=" << minSupport << " ʱƵ�����" << endl;
//	//L1������ӡ
//	cout << "L1:" << endl;
//	vector<string> freitem;
//	map<int, string>::iterator itt;
//	for (itt = freID2item.begin(); itt != freID2item.end(); itt++)
//		freitem.push_back(itt->second);
//	sort(freitem.begin(), freitem.end());
//	for (int i = 0; i < freitem.size(); i++)
//		cout << freitem[i] << ' ';
//	cout << endl;
//	//��ӡL2������
//	for (int i = 0; i < KItem.size(); i++)
//	{
//		cout << "L" << i + 2 << ":" << endl;
//		map<vector<int>, int> Lk = KItem[i];
//		map<vector<int>, int>::iterator it;
//		for (it = Lk.begin(); it != Lk.end(); it++)
//		{
//			vector<string> itemname;
//			for (int j = 0; j < it->first.size(); j++)//����������
//				//cout << it->first[j] << ' ';//��ӡƵ������
//				//cout << freID2item[it->first[j]] << ' ';//��ӡ����
//				itemname.push_back(freID2item[it->first[j]]);
//			sort(itemname.begin(), itemname.end());
//			//��ӡ������
//			for (int i = 0; i < itemname.size(); i++)
//				cout << itemname[i] << ' ';
//			cout << "sup:" << it->second << endl;
//		}
//	}
//}
//
////��A��[begin,A.size-1]��ѡһ��������sub��indexλ�ã�index++��������index==kʱ����sub����result
//void findKSubset(vector<int> &A, vector<vector<int>> &result, vector<int> &sub, int index, int begin, int k)
//{
//	if (index == k)
//	{
//		result.push_back(sub);
//		return;
//	}
//	if (begin >= A.size())
//		return;
//	for (int i = begin; i < A.size(); i++)
//	{
//		sub[index] = A[i];
//		findKSubset(A, result, sub, index + 1, i + 1, k);
//	}
//	return;
//}
//
////����A�����д�СΪk���Ӽ����ɵ�vector����û���򷵻ؿ�vector
//vector<vector<int>> kSubset(vector<int> &A, int k)
//{
//	vector<int> sub;
//	sub.resize(k);
//	vector<vector<int>> result;
//	findKSubset(A, result, sub, 0, 0, k);
//	return result;
//}
//
////���temp�Ƿ���Ct�е�һ��Ԫ��
//bool isIn(vector<int> &temp, vector<vector<int>> &Ct)
//{
//	int i, j;
//	for (i = 0; i < Ct.size(); i++)
//	{
//		if (temp.size() != Ct[i].size())
//			continue;
//		for (j = 0; j < Ct[i].size(); j++)
//		if (temp[j] != Ct[i][j])
//			break;
//		if (j == Ct[i].size())
//			return true;
//	}
//	return false;
//}
//
//void myApriori::findFreItem()
//{
//	int k = 2;
//	while (true)
//	{
//		vector<vector<int>> Ck = apriGen(k);
//		vector<int> countCk(Ck.size());//Ck�ļ�������
//		if (Ck.size() == 0)//��û��Ƶ���
//			return;
//		//��ÿ�������������д�СΪk���Ӽ����
//		map<int, vector<int>>::iterator it;
//		for (it = basket.begin(); it != basket.end(); it++)
//		{
//			vector<int> nowbasket = it->second;
//			//��nowbasket��Ƶ�����ҳ���������vector
//			vector<int> nowbasketfre;
//			for (int i = 0; i < nowbasket.size(); i++)
//			if (freID[nowbasket[i]] != 0)
//				nowbasketfre.push_back(freID[nowbasket[i]]);
//			vector<vector<int>> Ct = kSubset(nowbasketfre, k);
//			//��Ck��ÿһ����Ct�е�Ԫ�أ���Ӧ����+1
//			for (int i = 0; i < Ck.size(); i++)
//			{
//				vector<int> temp = Ck[i];
//				if (isIn(temp, Ct))
//					countCk[i]++;
//			}
//		}
//		//��Ck��Ѱ��Lk
//		map<vector<int>, int> Lk;
//		for (int i = 0; i < countCk.size(); i++)
//		if (countCk[i] >= minSupport)//��Ƶ����
//			Lk[Ck[i]] = countCk[i];
//		KItem.push_back(Lk);
//		k++;
//	}
//}
//
//vector<vector<int>> myApriori::apriGen(int k)
//{
//	vector < vector<int>> result;
//	if (k == 2)//��k=2�������������
//	{
//		map<int, int>::iterator it1;
//		map<int, int>::iterator it2;
//		for (it1 = freID.begin(); it1 != freID.end(); it1++)
//		{
//			if (it1->second == 0)//��Ƶ����
//				continue;
//			for (it2 = it1; it2 != freID.end(); it2++)
//			{
//				if (it2->second == 0 || it1 == it2)
//					continue;
//				vector<int> temp;
//				temp.push_back(it1->second);
//				temp.push_back(it2->second);
//				result.push_back(temp);
//			}
//		}
//		return result;
//	}
//	//k>2���
//	map<vector<int>, int> Lksub1 = KItem[k - 3];//Lk-1��K_item�Ǵ�k=2��ʼ��
//	map<vector<int>, int>::iterator it1;
//	map<vector<int>, int>::iterator it2;
//	for (it1 = Lksub1.begin(); it1 != Lksub1.end(); it1++)
//	{
//		vector<int> p = it1->first;//Ҫ�ϲ��ĵ�һ��
//		for (it2 = it1; it2 != Lksub1.end(); it2++)
//		{
//			vector<int> q = it2->first;//Ҫ�ϲ��ĵڶ���
//			if (almostSame(p, q))//�������һ��Ԫ��֮�ⶼ��ͬ�����Ժϲ�
//			{
//				vector<int> c(q);//����cΪq�Ŀ���
//				c.pop_back();
//				c.push_back(min(q[q.size() - 1], p[p.size() - 1]));
//				c.push_back(max(q[q.size() - 1], p[p.size() - 1]));
//				if (hasInfreSubset(c, Lksub1))//���c�а�����Ƶ����k-1�
//					continue;
//				result.push_back(c);
//			}
//		}
//	}
//	return result;
//}
//
//bool myApriori::hasInfreSubset(vector<int> c, map<vector<int>, int> Lksub1)
//{
//	if (Lksub1.size() < c.size())//��ѧ�ϲ�����ע��Ӧ��true
//		return true;
//	for (int i = 0; i < c.size(); i++)//��ÿһ����ʣ����ɵ��Ӽ��Ƿ������Lksub1
//	{
//
//		bool isin = false;
//		map<vector<int>, int>::iterator it;
//		for (it = Lksub1.begin(); it != Lksub1.end(); it++)
//		{
//			vector<int> temp = it->first;
//			int index1 = 0, index2 = 0;//c��temp�е�ָ��
//			int count = 0;//c��temp�а�����ȵ�Ԫ�صĸ���
//			while (index1 < c.size() && index2 < temp.size())
//			{
//				if (index1 == i)	{ index1++; continue; }
//				if (c[index1++] != temp[index2++])//��ǰtemp��ƥ��
//					break;
//				count++;
//			}
//			if (count == c.size() - 1)//�ҵ�ƥ���temp8
//			{
//				isin = true;
//				break;
//			}
//		}
//		if (!isin)
//			return true;
//	}
//	return false;
//}
//
////�����Ƿ����һ��Ԫ�ز�ͬ��ǰ��Ԫ�ض���ͬ
//bool myApriori::almostSame(vector<int> p, vector<int>q)
//{
//	if (p.size() != q.size())
//		return false;
//	for (int i = 0; i < p.size() - 1; i++)
//	if (q[i] != p[i])
//		return false;
//	if (p[p.size() - 1] == q[q.size() - 1])//���һ��Ҳ��ͬ����ȫ��ͬ
//		return false;
//	return true;
//}
//
////���ļ���ȡ����������ͬʱ��ɵ�һ��ɨ�衣��ͬʱ��totalID��freID��freID2item��basket��ֵ��
//void myApriori::getBasket(string filelocation)
//{
//	ifstream in;
//	in.open(filelocation);
//	if (!in)
//	{
//		cout << "���ļ�����" << endl;
//		return;
//	}
//	string temp;
//	int basket_num = 0;//���������
//	int total_num = 1;//������
//	while (getline(in, temp))//��һ��
//	{
//		vector<int> newbasket;
//		int begin = 0;//���д���������У�һ�������ʼλ��
//		for (int i = 0; i <= (int)temp.size(); i++)		//���ù�����תΪ��ɵ�vector
//		if (temp[i] == ' ' || i == (int)temp.size())//�ָ��־���ߵ���β
//		{
//			string nowitem = temp.substr(begin, i - begin);
//			begin = i + 1;
//			//����totalID
//			int nowitemID = totalID[nowitem];
//			if (nowitemID == 0)//��item
//				totalID[nowitem] = total_num++;
//
//			freID[totalID[nowitem]]++;//����freID
//			newbasket.push_back(totalID[nowitem]);//���빺����
//		}
//		sort(newbasket.begin(), newbasket.end());//�ֵ�������
//		basket[basket_num++] = newbasket;
//	}
//
//	//��ӡ������
//	cout << "basket:" << endl;
//	for (int i = 0; i < basket.size(); i++)
//	{
//		for (int j = 0; j < basket[i].size(); j++)
//			cout << basket[i][j] << ' ';
//		cout << endl;
//	}
//	//��ӡtotalID
//	map<string, int>::iterator it;
//	cout << "totalID:" << endl;
//	for (it = totalID.begin(); it != totalID.end(); it++)
//		cout << it->first << ':' << it->second << endl;
//	//��ӡfreID
//	map<int, int>::iterator itt;
//	cout << "freID��Ƶ�������ǰ��:" << endl;
//	for (itt = freID.begin(); itt != freID.end(); itt++)
//		cout << itt->first << ':' << itt->second << endl;
//	//Ƶ������벢��freID2item��ֵ
//	int freitem_num = 1;
//	map<string, int>::iterator iit;
//	for (iit = totalID.begin(); iit != totalID.end(); iit++)
//	{
//		if (freID[iit->second] < minSupport)
//			freID[iit->second] = 0;
//		else
//		{
//			freID2item[freitem_num] = iit->first;
//			freID[iit->second] = freitem_num++;
//		}
//	}
//	//��ӡfreID
//	map<int, int>::iterator itttt;
//	cout << "freID��Ƶ��������:" << endl;
//	for (itttt = freID.begin(); itttt != freID.end(); itttt++)
//		cout << itttt->first << ':' << itttt->second << endl;
//	//��ӡfreID2item
//	map<int, string>::iterator iiit;
//	cout << "freID2item:" << endl;
//	for (iiit = freID2item.begin(); iiit != freID2item.end(); iiit++)
//		cout << iiit->first << ":" << iiit->second << endl;
//}
//
//
//void main()
//{
//	myApriori myA(2);
//	string file = "D:\\360MoveData\\Users\\Administrator\\Desktop\\item.txt";
//	myA.getBasket(file);
//	myA.findFreItem();
//	myA.printKItem();//��ӡƵ���
//
//	//map<vector<int>, int> m;
//	//vector<int> v1;
//	//vector<int> v2;
//	//v1.push_back(1);
//	//v2.push_back(1);
//	//m[v1] == 9;
//	//v1.push_back(1);
//	//cout << m[v1] << endl;
//	//cout << m[v2] << endl;//��ʾmap#����#�������ж�vector�Ƿ���ͬ
//	//cout << m.size() << endl;//���Զ����
//	//map<string, int>mm;
//	//string s1 = "s";
//	//string s2 = "s";
//	//mm[s1] = 9;
//	//cout << mm[s2] << endl;//��ʾmap#��#�������ж�string�Ƿ���ͬ��
//	system("pause");
//}
////
////���������ù�������
////i1 i2 i3 i4 i5
////i2 i3 i4 i5 i6
////i3 i4 i5 i6 i7
////i4 i5 i6 i7 i8
////i5 i6 i7 i8 i9
////
////A C D
////B C E
////A B C E
////B E