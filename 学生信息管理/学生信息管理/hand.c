#include "hand.h"
char n;

//加载data数据 ，文件操作
pstu LoadInfo()
{
	int   num;
	char name[20];
	char sub1[20];
	char sub2[20];
	char sub3[20];
	float score1;
	float score2;
	float score3;
	
	char filename[] = "C:\\Users\\Administrator\\Desktop\\New Code\\GitHub\\New-Empty\\学生信息管理\\学生信息管理.txt";  //文件名,此处为简化编程，采用固定地址名称，未作输入
   	FILE *fp; 
	pstu head,ptr;
	
	//创建带表头结点的空单链表head，用来存放载入信息
	head = (pstu)malloc(SIZE);
	ptr = head;
	ptr->next = NULL;
	
	
	//加载data文件，存入head链表
	if( NULL == (fp = fopen(filename,"r")) ) 			//判断文件是否存在及可读
	{ 
		printf("error!"); 
		exit(0); 
	} 
	
	while (!feof(fp)) 
	{ 
		fscanf(fp,"%d %s %s %f %s %f %s %f\n",&num,&name,
			  &sub1,&score1,&sub2,&score2,&sub3,&score3); //读取一行，采用格式化读取，避免了其他各种读取方法的数据处理问题
																//该方法缺点明显，对数据格式要求教研，故data文件规定数据格式
		ptr->next = (pstu)malloc(SIZE);
		ptr = ptr->next;
		ptr->next = NULL;
		
		ptr->num = num;
		strcpy(ptr->name,name);
		strcpy(ptr->subject[0].name,sub1);
		ptr->subject[0].score = score1;
		strcpy(ptr->subject[1].name,sub2);
		ptr->subject[1].score = score2;
		strcpy(ptr->subject[2].name,sub3);
		ptr->subject[2].score = score3;
		
	} 
	
    fclose(fp);                     					//关闭文件,已得到保存data信息的链表head
	
	return head;
}
 
 

 
//添加学生
pstu AddStu(pstu x)  
{
	char namestu[20];
	char *p;
	char subname1[20],subname2[20],subname3[20];
	pstu head,ptr;
	
	head = x;
	ptr = head;
	
	while( NULL != ptr->next )					//遍历链表，找到链尾结点
	{
		ptr = ptr->next;
	}
	
	ptr->next = (pstu)malloc(SIZE);				//默认在链表末追加添加信息
	ptr = ptr->next;
	ptr->next = NULL;
	
	printf("请输入添加学生的信息：\n");
 
	printf("请输入添加学生的学号：");
	scanf("%d",&ptr->num);
	getchar();
 
	printf("请输入添加学生的姓名：");
	scanf("%s",namestu);
	getchar();
	p = namestu;
	strcpy(ptr->name,p);
 
	printf("请输入添加学生的科目1名称：");
	scanf("%s",&subname1);
	getchar();
	p = subname1;
	strcpy(ptr->subject[0].name,p);
 
	printf("请输入添加学生的科目1成绩：");
	scanf("%f",&ptr->subject[0].score);
	getchar();
 
	printf("请输入添加学生的科目2名称：");
	scanf("%s",&subname2);
	getchar();
	p = subname2;
	strcpy(ptr->subject[1].name,p);
 
	printf("请输入添加学生的科目2成绩：");
	scanf("%f",&ptr->subject[1].score);
	getchar();
 
	printf("请输入添加学生的科目3名称：");
	scanf("%s",&subname3);
	getchar();
	p = subname3;
	strcpy(ptr->subject[2].name,p);
 
	printf("请输入添加学生的科目3成绩：");
	scanf("%f",&ptr->subject[2].score);
	getchar();
	
	putchar('\n');
	return head;
}
 
//删除学生
pstu DeleStu(pstu x)   
{
	int num;
	pstu head,ptr,qtr;
	
	head = x;
	ptr = head->next;
	qtr = head;
 
	printf("请输入要删除的学生的学号：");
	scanf("%d",&num);
	getchar();
 
	while(ptr!=NULL)
	{
		if( ptr->num != num)				//遍历查找链表结点，未找到跳过该结点
		{
			ptr = ptr->next;
			qtr = qtr->next;
		}
		else						//找到则删除结点
		{
			ptr = ptr->next;
			qtr->next = ptr;
			break;
		}
	}
	
	printf("该学生信息已删除！\n\n");
	return head;
}
 
//修改学生信息
pstu RwrStu(pstu x)   
{
	char namestu[20];
	char *p;
	char subname1[20],subname2[20],subname3[20];
	int num;
	pstu head,ptr;
	
	head = x;
	ptr = head->next;
 
	printf("请输入要修改的学生的学号：");
	scanf("%d",&num);
	getchar();
 
	while(ptr!=NULL)
	{
		if( ptr->num == num )
		{
			printf("已找到该学生信息，请填入修改项目：");
 
			printf("请输入修改学生的姓名：");
			scanf("%s",namestu);
			getchar();
			p = namestu;
			strcpy(ptr->name,p);
 
			printf("请输入修改学生的科目1名称：");
			scanf("%s",subname1);
			getchar();
			p = subname1;
			strcpy(ptr->subject[0].name,p);
 
			printf("请输入修改学生的科目1成绩：");
			scanf("%f",&ptr->subject[0].score);
			getchar();
 
			printf("请输入修改学生的科目2名称：");
			scanf("%s",subname2);
			getchar();
			p = subname2;
			strcpy(ptr->subject[1].name,p);
 
			printf("请输入修改学生的科目2成绩：");
			scanf("%f",&ptr->subject[1].score);
			getchar();
 
			printf("请输入修改学生的科目3名称：");
			scanf("%s",subname3);
			getchar();
			p = subname3;
			strcpy(ptr->subject[2].name,p);
 
			printf("请输入修改学生的科目3成绩：");
			scanf("%f",&ptr->subject[2].score);
			getchar();
 
			printf("该学生信息已修改！\n\n");
			break;
		}
		else
		{
			ptr = ptr->next;
		}
	}
	
	return head;
}
 
//查找学生，参数为链表指针，和学生学号
//不好，应该将学号输入放进子函数，简化主函数结构，减少子函数参数
void FindStu(pstu x,char y)    
{
	pstu head,ptr;
	
	head = x;
	ptr = head->next;
	
	while( ptr != NULL)
	{
		if( ptr->num == (int)y)		//因主函数中为节省空间，学号输入采用char数据，故强行准换
		{
			printf("已找到该学生信息!\n如下：");
			printf("%03d  %s  %s  %5.2f  %s  %5.2f  %s  %5.2f\n",
				ptr->num,ptr->name,ptr->subject[0].name,ptr->subject[0].score,ptr->subject[1].name,ptr->subject[1].score,ptr->subject[2].name,ptr->subject[2].score);			break;			//注意此处找到并输出信息后要手动退出循环
		}
		else
		{
			ptr = ptr->next;
		}
	}
	if( ptr == NULL )				//查询成功检测，while循环中若找到，则ptr停留在当前学生的结点上
	{
		printf("未能找到该学生信息！\n");
	}
}
 
 
//统计科目分数区间段的学生,参数为链表指针，科目名称，分数区间上下限
//同理，参数的录入应放入子函数，简化结构和编程
void Count(pstu x,char *y,float q,float p)    
{
	pstu head,ptr;
	char name[20];
	char flag=0;       			//手动设置的查找结果flag
	
	head = x;
	ptr = head->next;
	strcpy(name,y);
	
	//printf("%s %5.2f %5.2f\n",name,q,p); 	//检测输入参数的传递，调试程序用
 
	while( ptr != NULL)			//开始查找统计，科目查找用strcmp函数比较科目字符串,返回值0为字符串相等
	{															//此处while循环体中，重复的查找步骤太多，应设置科目匹配flag，参照rank()函数
		if( strcmp(name,ptr->subject[0].name) == 0 )	 //通过flag将科目确认放在while之外，循环体内只做分数区间的扫描和输出
		{
			if( q <= ptr->subject[0].score && ptr->subject[0].score<= p )
			{
				printf("%03d  %s  %s  %5.2f\n",ptr->num,ptr->name,ptr->subject[0].name,ptr->subject[0].score);
				flag++;
			}
		}
		if( strcmp(name,ptr->subject[1].name) == 0 )
		{
			if( q <= ptr->subject[1].score && ptr->subject[1].score<= p )
			{
				printf("%03d  %s  %s  %5.2f\n",ptr->num,ptr->name,ptr->subject[1].name,ptr->subject[1].score);
				flag++;
			}
		}
		if( strcmp(name,ptr->subject[2].name) == 0 )
		{
			if( q <= ptr->subject[2].score && ptr->subject[2].score<= p )
			{
				printf("%03d  %s  %s  %5.2f\n",ptr->num,ptr->name,ptr->subject[2].name,ptr->subject[2].score);
				flag++;
			}
		}
		
		ptr = ptr->next;
	}
 
	if(flag==0)
	{
		printf("未能找到该课程该区间分数段的学生！\n");
	}
}
 
 
//学科成绩排名,采用交换数据的方法,参数为链表指针，科目名称
//同理参数问题
//链表排序问题，此处用交换结点数据方法，还有其他多种排序方法
//如，交换结点，辅助指针数组排序(未实现，过程繁杂)，插入法排序等
void Rank(pstu x,char *y)     
{
	pstu head,ptr,qtr;
	char name[20];
	char len=0;
	char flag=0;    				//简化算法,设置科目查找结果判断值,flag=0表示科目输入为未知科目，不存在
	int i=0;													//i、j循环次数控制参数
	int j=0;  
	char temp_name[20];			//数据交换时的暂存信息变量
	float temp0,temp1,temp2;
	int temp_num;
 
	strcpy(name,y);
	head = x;
 
	ptr = head->next;
	while( ptr != NULL)   			//测链表长度,不包括表头结点
	{
		ptr = ptr->next;
		len++;
	}
	ptr = head->next;  			//指针ptr用过之后记得回原位
				
 
	//开始查找科目
	if( strcmp(name,ptr->subject[0].name) == 0)	flag=1; 
	if( strcmp(name,ptr->subject[1].name) == 0)	flag=2;
	if( strcmp(name,ptr->subject[2].name) == 0)	flag=3;
	if( flag == 0)
	{
		printf("未找到该科目!");
		return;
	}
	
	//开始排序,冒泡法比较各结点数据
	//此处3个并列的if用switch case更清晰结构
	if( n == 1 )
	{
		for( i=0;i<len;i++)
		{
			ptr = head->next->next;	//每一次内循环之后，ptr、qtr必然在最后两个节点上
			qtr = head->next;		//故在进行内循环之前，要重新复位ptr、qtr
			for( j=0;j<len-i-1;j++)
			{
				if( qtr->subject[0].score < ptr->subject[0].score )
				{
					temp_num = qtr->num;	//交换数据,因数据格式(科目顺序)明确规定，故不再做科目名称的替换
					strcpy(temp_name,qtr->name);
					temp0 = qtr->subject[0].score;
					temp1 = qtr->subject[1].score;
					temp2 = qtr->subject[2].score;
					
					qtr->num = ptr->num;
					strcpy(qtr->name,ptr->name);
					qtr->subject[0].score = ptr->subject[0].score;
					qtr->subject[1].score = ptr->subject[1].score;
					qtr->subject[2].score = ptr->subject[2].score;
					
					ptr->num = temp_num;
					strcpy(ptr->name,temp_name);
					ptr->subject[0].score = temp0;
					ptr->subject[1].score = temp1;
					ptr->subject[2].score = temp2;
				}
				qtr = qtr->next;
				ptr = ptr->next;
			}
		}
	}
	
	if( n == 2 )
	{
		for( i=0;i<len;i++)
		{
			ptr = head->next->next;
			qtr = head->next;
			for( j=0;j<len-i-1;j++)
			{
				if( qtr->subject[1].score < ptr->subject[1].score )
				{
					temp_num = qtr->num;
					strcpy(temp_name,qtr->name);
					temp0 = qtr->subject[0].score;
					temp1 = qtr->subject[1].score;
					temp2 = qtr->subject[2].score;
					
					qtr->num = ptr->num;
					strcpy(qtr->name,ptr->name);
					qtr->subject[0].score = ptr->subject[0].score;
					qtr->subject[1].score = ptr->subject[1].score;
					qtr->subject[2].score = ptr->subject[2].score;
					
					ptr->num = temp_num;
					strcpy(ptr->name,temp_name);
					ptr->subject[0].score = temp0;
					ptr->subject[1].score = temp1;
					ptr->subject[2].score = temp2;
				}
				qtr = qtr->next;
				ptr = ptr->next;
			}
		}
	}
	
	if( n == 3 )
	{
		for( i=0;i<len;i++)
		{
			ptr = head->next->next;
			qtr = head->next;
			for( j=0;j<len-i-1;j++)
			{
				if( qtr->subject[2].score < ptr->subject[2].score )
				{
					temp_num = qtr->num;
					strcpy(temp_name,qtr->name);
					temp0 = qtr->subject[0].score;
					temp1 = qtr->subject[1].score;
					temp2 = qtr->subject[2].score;
					
					qtr->num = ptr->num;
					strcpy(qtr->name,ptr->name);
					qtr->subject[0].score = ptr->subject[0].score;
					qtr->subject[1].score = ptr->subject[1].score;
					qtr->subject[2].score = ptr->subject[2].score;
					
					ptr->num = temp_num;
					strcpy(ptr->name,temp_name);
					ptr->subject[0].score = temp0;
					ptr->subject[1].score = temp1;
					ptr->subject[2].score = temp2;
				}
				qtr = qtr->next;
				ptr = ptr->next;
			}
		}
	}
 
	//输出排序过后的链表
	ptr = head->next;
	while( ptr != NULL )
	{
		printf("%03d  %s  %s  %5.2f  %s  %5.2f  %s  %5.2f\n",
			  ptr->num,ptr->name,ptr->subject[0].name,ptr->subject[0].score,
			  ptr->subject[1].name,ptr->subject[1].score,
			  ptr->subject[2].name,ptr->subject[2].score);
		ptr = ptr->next;
	}
}
 
 
//保存文件并退出，文件操作
void SaveQuit(pstu x)    
{
	pstu head,ptr;
	FILE *fp;
	char filename[] = "C:\\Users\\Administrator\\Desktop\\New Code\\GitHub\\New-Empty\\学生信息管理\\学生信息管理.txt";
	head = x;
	ptr = head->next;
 
	if( NULL == (fp = fopen(filename,"w")) ) 			//判断文件是否存在及可读
	{ 
		printf("error!"); 
		system("pause");
		exit(0); 
	} 
	
	while(ptr != NULL)						//遍历链表结点，按data约定格式输出数据
	{
		fprintf(fp,"%03d  %s  %s  %5.2f  %s  %5.2f  %s  %5.2f\r",
			ptr->num,ptr->name,ptr->subject[0].name,ptr->subject[0].score,
			ptr->subject[1].name,ptr->subject[1].score,
			ptr->subject[2].name,ptr->subject[2].score);			
		ptr = ptr->next;
	} 
	
    fclose(fp);    
		system("pause");
}
