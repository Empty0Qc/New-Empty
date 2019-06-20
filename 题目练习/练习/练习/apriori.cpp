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
//	void getBasket(string filelocation);//从文件读取购物篮
//	void findFreItem();//求事务的频繁项
//	vector<vector<int>> apriGen(int K);//连接两个Lk-1，得到第k级候选频繁项Ck。Ck中存储的是freID
//	bool almostSame(vector<int>, vector<int>);//看两个vector是否：最后一个不同，前面元素都相同
//	bool hasInfreSubset(vector<int>, map < vector<int>, int >);//第一个参数中是否有这样的k-1项子集：它不在第二个参数中
//	void printKItem();//打印频繁项集
//private:
//	map<string, int> totalID;//项名：总体编号(编号1-n)
//	map<int, int> freID;//第一遍扫描中~总体编号：项计数值。。。后来~总体编号：频繁项编号（非频繁项编号1-m，非频繁项的总体编号对应0）
//	map<int, string> freID2item;//频繁项编号：项名
//	map< int, vector<int> > basket;//<购物篮编号，购物篮>，购物篮中存的是项的totalID。模拟数据库中的数据
//	vector<map<vector<int>, int>> KItem;//存储频繁项集，K从2开始，即频繁项不存储在其中。其中map的第二参数代表项集的出现次数
//	int minSupport;//最小阈值
//};
//
////打印频繁项集（注意：计算中，频繁项编码是字典序的，对应项名不一定是字典序，输出时应先排序）
//void myApriori::printKItem()
//{
//	cout << "**********************************" << endl;
//	cout << "minSupport=" << minSupport << " 时频繁项集：" << endl;
//	//L1单独打印
//	cout << "L1:" << endl;
//	vector<string> freitem;
//	map<int, string>::iterator itt;
//	for (itt = freID2item.begin(); itt != freID2item.end(); itt++)
//		freitem.push_back(itt->second);
//	sort(freitem.begin(), freitem.end());
//	for (int i = 0; i < freitem.size(); i++)
//		cout << freitem[i] << ' ';
//	cout << endl;
//	//打印L2及以上
//	for (int i = 0; i < KItem.size(); i++)
//	{
//		cout << "L" << i + 2 << ":" << endl;
//		map<vector<int>, int> Lk = KItem[i];
//		map<vector<int>, int>::iterator it;
//		for (it = Lk.begin(); it != Lk.end(); it++)
//		{
//			vector<string> itemname;
//			for (int j = 0; j < it->first.size(); j++)//项名先排序
//				//cout << it->first[j] << ' ';//打印频繁项编号
//				//cout << freID2item[it->first[j]] << ' ';//打印项名
//				itemname.push_back(freID2item[it->first[j]]);
//			sort(itemname.begin(), itemname.end());
//			//打印排序后的
//			for (int i = 0; i < itemname.size(); i++)
//				cout << itemname[i] << ' ';
//			cout << "sup:" << it->second << endl;
//		}
//	}
//}
//
////从A的[begin,A.size-1]段选一个数放入sub的index位置，index++迭代，当index==k时，将sub加入result
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
////返回A的所有大小为k的子集构成的vector，若没有则返回空vector
//vector<vector<int>> kSubset(vector<int> &A, int k)
//{
//	vector<int> sub;
//	sub.resize(k);
//	vector<vector<int>> result;
//	findKSubset(A, result, sub, 0, 0, k);
//	return result;
//}
//
////检查temp是否是Ct中的一个元素
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
//		vector<int> countCk(Ck.size());//Ck的计数数组
//		if (Ck.size() == 0)//再没有频繁项集
//			return;
//		//对每个购物篮中所有大小为k的子集检查
//		map<int, vector<int>>::iterator it;
//		for (it = basket.begin(); it != basket.end(); it++)
//		{
//			vector<int> nowbasket = it->second;
//			//将nowbasket中频繁项找出，构成新vector
//			vector<int> nowbasketfre;
//			for (int i = 0; i < nowbasket.size(); i++)
//			if (freID[nowbasket[i]] != 0)
//				nowbasketfre.push_back(freID[nowbasket[i]]);
//			vector<vector<int>> Ct = kSubset(nowbasketfre, k);
//			//对Ck中每一个在Ct中的元素，相应计数+1
//			for (int i = 0; i < Ck.size(); i++)
//			{
//				vector<int> temp = Ck[i];
//				if (isIn(temp, Ct))
//					countCk[i]++;
//			}
//		}
//		//从Ck中寻找Lk
//		map<vector<int>, int> Lk;
//		for (int i = 0; i < countCk.size(); i++)
//		if (countCk[i] >= minSupport)//是频繁的
//			Lk[Ck[i]] = countCk[i];
//		KItem.push_back(Lk);
//		k++;
//	}
//}
//
//vector<vector<int>> myApriori::apriGen(int k)
//{
//	vector < vector<int>> result;
//	if (k == 2)//对k=2的情况单独处理
//	{
//		map<int, int>::iterator it1;
//		map<int, int>::iterator it2;
//		for (it1 = freID.begin(); it1 != freID.end(); it1++)
//		{
//			if (it1->second == 0)//非频繁项
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
//	//k>2情况
//	map<vector<int>, int> Lksub1 = KItem[k - 3];//Lk-1（K_item是从k=2开始）
//	map<vector<int>, int>::iterator it1;
//	map<vector<int>, int>::iterator it2;
//	for (it1 = Lksub1.begin(); it1 != Lksub1.end(); it1++)
//	{
//		vector<int> p = it1->first;//要合并的第一个
//		for (it2 = it1; it2 != Lksub1.end(); it2++)
//		{
//			vector<int> q = it2->first;//要合并的第二个
//			if (almostSame(p, q))//除了最后一个元素之外都相同，可以合并
//			{
//				vector<int> c(q);//声明c为q的拷贝
//				c.pop_back();
//				c.push_back(min(q[q.size() - 1], p[p.size() - 1]));
//				c.push_back(max(q[q.size() - 1], p[p.size() - 1]));
//				if (hasInfreSubset(c, Lksub1))//如果c中包含不频繁的k-1项集
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
//	if (Lksub1.size() < c.size())//数学上不够，注意应是true
//		return true;
//	for (int i = 0; i < c.size(); i++)//对每一项，检查剩余项构成的子集是否存在于Lksub1
//	{
//
//		bool isin = false;
//		map<vector<int>, int>::iterator it;
//		for (it = Lksub1.begin(); it != Lksub1.end(); it++)
//		{
//			vector<int> temp = it->first;
//			int index1 = 0, index2 = 0;//c和temp中的指针
//			int count = 0;//c和temp中按序相等的元素的个数
//			while (index1 < c.size() && index2 < temp.size())
//			{
//				if (index1 == i)	{ index1++; continue; }
//				if (c[index1++] != temp[index2++])//当前temp不匹配
//					break;
//				count++;
//			}
//			if (count == c.size() - 1)//找到匹配的temp8
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
////返回是否：最后一个元素不同，前面元素都相同
//bool myApriori::almostSame(vector<int> p, vector<int>q)
//{
//	if (p.size() != q.size())
//		return false;
//	for (int i = 0; i < p.size() - 1; i++)
//	if (q[i] != p[i])
//		return false;
//	if (p[p.size() - 1] == q[q.size() - 1])//最后一个也相同，完全相同
//		return false;
//	return true;
//}
//
////从文件读取购物篮，并同时完成第一次扫描。（同时给totalID、freID、freID2item、basket赋值）
//void myApriori::getBasket(string filelocation)
//{
//	ifstream in;
//	in.open(filelocation);
//	if (!in)
//	{
//		cout << "打开文件出错！" << endl;
//		return;
//	}
//	string temp;
//	int basket_num = 0;//购物篮编号
//	int total_num = 1;//总体编号
//	while (getline(in, temp))//读一行
//	{
//		vector<int> newbasket;
//		int begin = 0;//该行代表的事务中，一个项的起始位置
//		for (int i = 0; i <= (int)temp.size(); i++)		//将该购物篮转为项构成的vector
//		if (temp[i] == ' ' || i == (int)temp.size())//分割标志或者到结尾
//		{
//			string nowitem = temp.substr(begin, i - begin);
//			begin = i + 1;
//			//更新totalID
//			int nowitemID = totalID[nowitem];
//			if (nowitemID == 0)//新item
//				totalID[nowitem] = total_num++;
//
//			freID[totalID[nowitem]]++;//更新freID
//			newbasket.push_back(totalID[nowitem]);//放入购物篮
//		}
//		sort(newbasket.begin(), newbasket.end());//字典序排序
//		basket[basket_num++] = newbasket;
//	}
//
//	//打印购物篮
//	cout << "basket:" << endl;
//	for (int i = 0; i < basket.size(); i++)
//	{
//		for (int j = 0; j < basket[i].size(); j++)
//			cout << basket[i][j] << ' ';
//		cout << endl;
//	}
//	//打印totalID
//	map<string, int>::iterator it;
//	cout << "totalID:" << endl;
//	for (it = totalID.begin(); it != totalID.end(); it++)
//		cout << it->first << ':' << it->second << endl;
//	//打印freID
//	map<int, int>::iterator itt;
//	cout << "freID（频繁项编码前）:" << endl;
//	for (itt = freID.begin(); itt != freID.end(); itt++)
//		cout << itt->first << ':' << itt->second << endl;
//	//频繁项编码并给freID2item赋值
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
//	//打印freID
//	map<int, int>::iterator itttt;
//	cout << "freID（频繁项编码后）:" << endl;
//	for (itttt = freID.begin(); itttt != freID.end(); itttt++)
//		cout << itttt->first << ':' << itttt->second << endl;
//	//打印freID2item
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
//	myA.printKItem();//打印频繁项集
//
//	//map<vector<int>, int> m;
//	//vector<int> v1;
//	//vector<int> v2;
//	//v1.push_back(1);
//	//v2.push_back(1);
//	//m[v1] == 9;
//	//v1.push_back(1);
//	//cout << m[v1] << endl;
//	//cout << m[v2] << endl;//表示map#不会#按内容判断vector是否相同
//	//cout << m.size() << endl;//会自动添加
//	//map<string, int>mm;
//	//string s1 = "s";
//	//string s2 = "s";
//	//mm[s1] = 9;
//	//cout << mm[s2] << endl;//表示map#会#按内容判断string是否相同。
//	system("pause");
//}
////
////两批测试用购物篮：
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