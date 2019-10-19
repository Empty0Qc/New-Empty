//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#define MAX 100
////状态
//struct zt
//{
//	int left_c;
//	int right_c;
//	int left_y;
//	int right_y;
//	int boat_location;
//};
//struct zt ztarr[MAX];
//int index = 0;
//int numpass = 0;
//int start_c, start_y;
//
//
//int handle(zt t)
//{
//	//是否达到目标转态
//	if (t.right_c == start_c && t.right_y == start_y)
//	{
//		numpass++;
//		printf("\n找到第%d条路径！\n", numpass);
//		printf("左传\t左野\t右传\t右野\t船\n");
//		for (int i = 0; i <= index; i++)
//		{
//			printf("%2d\t", ztarr[i].left_c);
//			printf("%2d\t", ztarr[i].left_y);
//			printf("%2d\t", ztarr[i].right_c);
//			printf("%2d\t", ztarr[i].right_y);
//			printf("%2d\t", ztarr[i].boat_location);
//			printf("\n");
//		}
//		//找到多条路径的关键一
//		return 0;
//	}
//	//是否重复操作
//	for (int i = 0; i < index; i++)
//	{
//		if (t.left_c == ztarr[i].left_c && t.left_y == ztarr[i].left_y)
//		{
//			if (t.boat_location == ztarr[i].boat_location)
//			{
//				return 0;
//			}
//
//		}
//	}
//	//人数是否合理吗
//	if (t.left_c < 0 || t.left_y < 0 || t.right_c < 0 || t.right_y < 0)
//	{
//		return 0;
//	}
//	//传教士是否被吃
//	if ((t.left_c < t.left_y && t.left_c != 0) || (t.right_c < t.right_y && t.right_c != 0))
//	{
//		return 0;
//	}
//
//	//定义一个临时节点
//	struct zt tt;
//
//	//两个传教士过河
//	tt.left_c = t.left_c - 2 * t.boat_location;
//	tt.left_y = t.left_y;
//	tt.right_c = t.right_c + 2 * t.boat_location;
//	tt.right_y = t.right_y;
//	tt.boat_location = (-t.boat_location);
//	index = index + 1;
//	ztarr[index] = tt;
//	handle(ztarr[index]);
//	index = index - 1;
//
//	//两个野人过河
//	tt.left_c = t.left_c;
//	tt.left_y = t.left_y - 2 * t.boat_location;
//	tt.right_c = t.right_c;
//	tt.right_y = t.right_y + 2 * t.boat_location;
//	tt.boat_location = (-t.boat_location);
//	index = index + 1;
//	ztarr[index] = tt;
//	handle(ztarr[index]);
//	index = index - 1;
//
//	//一个野人，一个传教士过河
//	tt.left_c = t.left_c - 1 * t.boat_location;
//	tt.left_y = t.left_y - 1 * t.boat_location;
//	tt.right_c = t.right_c + 1 * t.boat_location;
//	tt.right_y = t.right_y + 1 * t.boat_location;
//	tt.boat_location = (-t.boat_location);
//	index = index + 1;
//	ztarr[index] = tt;
//	handle(ztarr[index]);
//	index = index - 1;
//
//	//一个传教士过河
//	tt.left_c = t.left_c - 1 * t.boat_location;
//	tt.left_y = t.left_y;
//	tt.right_c = t.right_c + 1 * t.boat_location;
//	tt.right_y = t.right_y;
//	tt.boat_location = (-t.boat_location);
//	index = index + 1;
//	ztarr[index] = tt;
//	handle(ztarr[index]);
//	index = index - 1;
//
//	//一个野人过河
//	tt.left_c = t.left_c;
//	tt.left_y = t.left_y - 1 * t.boat_location;
//	tt.right_c = t.right_c;
//	tt.right_y = t.right_y + 1 * t.boat_location;
//	tt.boat_location = (-t.boat_location);
//	index = index + 1;
//	ztarr[index] = tt;
//	handle(ztarr[index]);
//	index = index - 1;
//	//找到多条路径的关键二
//	return 0;
//}
//
//
//void main()
//{
//	printf("请输入初始传教士人数：");
//	scanf("%d", &start_c);
//	printf("请输入初始传教士人数：");
//	scanf("%d", &start_y);
//	ztarr[index].left_c = start_c;
//	ztarr[index].left_y = start_y;
//	ztarr[index].right_c = 0;
//	ztarr[index].right_y = 0;
//	ztarr[index].boat_location = 1;
//	handle(ztarr[index]);
//	printf("已为您找到%d条过河路径！并且已全部加载完毕！\n", numpass);
//}
