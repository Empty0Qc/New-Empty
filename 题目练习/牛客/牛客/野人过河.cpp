//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#define MAX 100
////״̬
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
//	//�Ƿ�ﵽĿ��ת̬
//	if (t.right_c == start_c && t.right_y == start_y)
//	{
//		numpass++;
//		printf("\n�ҵ���%d��·����\n", numpass);
//		printf("��\t��Ұ\t�Ҵ�\t��Ұ\t��\n");
//		for (int i = 0; i <= index; i++)
//		{
//			printf("%2d\t", ztarr[i].left_c);
//			printf("%2d\t", ztarr[i].left_y);
//			printf("%2d\t", ztarr[i].right_c);
//			printf("%2d\t", ztarr[i].right_y);
//			printf("%2d\t", ztarr[i].boat_location);
//			printf("\n");
//		}
//		//�ҵ�����·���Ĺؼ�һ
//		return 0;
//	}
//	//�Ƿ��ظ�����
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
//	//�����Ƿ������
//	if (t.left_c < 0 || t.left_y < 0 || t.right_c < 0 || t.right_y < 0)
//	{
//		return 0;
//	}
//	//����ʿ�Ƿ񱻳�
//	if ((t.left_c < t.left_y && t.left_c != 0) || (t.right_c < t.right_y && t.right_c != 0))
//	{
//		return 0;
//	}
//
//	//����һ����ʱ�ڵ�
//	struct zt tt;
//
//	//��������ʿ����
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
//	//����Ұ�˹���
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
//	//һ��Ұ�ˣ�һ������ʿ����
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
//	//һ������ʿ����
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
//	//һ��Ұ�˹���
//	tt.left_c = t.left_c;
//	tt.left_y = t.left_y - 1 * t.boat_location;
//	tt.right_c = t.right_c;
//	tt.right_y = t.right_y + 1 * t.boat_location;
//	tt.boat_location = (-t.boat_location);
//	index = index + 1;
//	ztarr[index] = tt;
//	handle(ztarr[index]);
//	index = index - 1;
//	//�ҵ�����·���Ĺؼ���
//	return 0;
//}
//
//
//void main()
//{
//	printf("�������ʼ����ʿ������");
//	scanf("%d", &start_c);
//	printf("�������ʼ����ʿ������");
//	scanf("%d", &start_y);
//	ztarr[index].left_c = start_c;
//	ztarr[index].left_y = start_y;
//	ztarr[index].right_c = 0;
//	ztarr[index].right_y = 0;
//	ztarr[index].boat_location = 1;
//	handle(ztarr[index]);
//	printf("��Ϊ���ҵ�%d������·����������ȫ��������ϣ�\n", numpass);
//}
