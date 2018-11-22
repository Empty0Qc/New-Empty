#include "hand.h"

typedef struct Person {
	char name[1024];
	char tel[1024];
}Person;

typedef struct addressBook {
	Person* person;
	int size;
	int capacity;
}addressBook;

addressBook a_count;

int menu()
{
	int choice = 0;
	printf("-------通讯录--------\n");
	printf("---------------------\n");
	printf("1.ADD\n");
	printf("2.DEL\n");
	printf("3.MODIFY\n");	
	printf("4.FIND\n");
	printf("5.PARINT\n");
	printf("6.CLEAR\n");
	printf("7.NAMERANK\n");
	printf("8.EXIT\n");
	printf("---------------------\n");

	
	while(1)
	{
		char ch;
		
		scanf("%d", &choice);
		while((ch = getchar()) != '\n' && (ch != EOF));	
		if(choice > 0 && 8 >= choice)
			return choice;
		else
			printf("选择错误，重新输入!\n");
	}
}

void PersonInfo()
{
	int i = 0;
	a_count.size = 0;
	a_count.capacity = 10;
	a_count.person = (Person*)malloc(sizeof(Person) * a_count.capacity);
	for (i=0; i<a_count.capacity; i++)
	{
		memset(&a_count.person[i],0x00,sizeof(Person));
	}
	load_person();

}
void load_person()
{
	Person tmp = {0};
	FILE *load = fopen("./通讯录.txt","r");

	printf("It's begining!\n");

	if (load == NULL)
	{
		printf("加载失败!\n");
	}

	while (fread(&tmp, sizeof(Person), 1, load)) 
	{
		expand_person();
		a_count.person[a_count.size] = tmp;
		a_count.size++;
	}

	fclose(load);
	printf("加载成功共加载了%d条\n",a_count.size);
}

void save_person()
{
	int i;
	FILE *in = fopen("./通讯录.txt","w");

	if (in == NULL)
	{
		printf("保存失败!\n");
	}

	for (i=0; i<a_count.capacity; i++)
	{
		fwrite(&a_count.person[i],sizeof(Person),1,in);
	}
	fclose(in);
	printf("保存成功!\n");
}

void expand_person()
{
	if (a_count.size > a_count.capacity)
	{
		Person* tmp = NULL;
		int i;	
		a_count.capacity *= 2;
		tmp = (Person*)malloc(sizeof(Person) * a_count.capacity);
		for(i=0; i<a_count.capacity; i++)
		{
			tmp[i] = a_count.person[i];
		}
		free(a_count.person);
		a_count.person = tmp;
	}
}

void add_person()
{
	expand_person();
	printf("请输入姓名:>");
	scanf("%s",&a_count.person->name);
	printf("请输入电话:>");
	scanf("%s",&a_count.person->tel);
	printf("添加成功!\n");
	++a_count.size;
	save_person();
}

void del_person()
{
	char per[SIZE] = {0};
	int i;

	printf("删除用户！\n");
	printf("请输入要删除的用户姓名：\n");
	scanf("%s",per);
	for (i=0; i<a_count.size; i++)
	{
		if(strcmp(per,a_count.person[i].name) == 0)
		{
			printf("%s", a_count.person[i].name);
			a_count.person[i] = a_count.person[a_count.size];

		}
	}
	printf("删除成功！\n");
	a_count.size--;
	save_person();
}

void mod_person()
{
	char mod[SIZE] = { 0 };
	int i = 0;

	printf("修改一个用户\n");
	printf("请输入要修改用户的姓名:\n");
	scanf("%s", mod);
	for (i=0; i<a_count.size; i++)
	{
		if (strcmp(mod,a_count.person[i].name) == 0)
		{
			printf("请输入新姓名:>");
			scanf("%s",a_count.person[i].name);
			printf("请输入新电话:>");
			scanf("%s",a_count.person[i].tel);
			printf("[%s] %s",a_count.person[i].name,a_count.person[i].tel);
			printf("修改成功!\n");
		}
	}
	save_person();
}

void find_person()
{
	char user[SIZE] = { 0 };
	int i = 0;
	int count = 0;

	printf("查找一个用户!\n");
	printf("请输入要查找的用户的姓名:\n");
	scanf("%s", user);
	for (i = 0; i < a_count.size; i++)
	{
		if (strcmp(user,a_count.person[i].name) == 0)
		{
			printf("[%d] %s %s\n",i,a_count.person[i].name,a_count.person[i].tel);		
			count++;
		}
	}
	printf("查找成功,共找到%d条结果!\n", count);
}

void print_person()
{
	int i = 0;
	printf("打印所有用户:\n");
	for (i=0; i<a_count.size; i++)
	{
		printf("[%d] %s %s\n",i,a_count.person[i].name,a_count.person[i].tel);
	}
	printf("总共打印了%d位用户的信息",a_count.size);
}

void rank_person()       
{
	int i = 0;
	int j = 0;
	char tmp[SIZE];

	for (i = 0; i < a_count.size; i++)
	{
		for (j = 0; j < a_count.size; j++)
		{
			if (strcmp(a_count.person[j].name, a_count.person[j+1].name) > 0)
			{
				strcpy(tmp, a_count.person[j].name);
				strcpy(a_count.person[j].name, a_count.person[j+1].name);
				strcpy(a_count.person[j+1].name, tmp);
			}
		}
	}
	printf("排序成功!\n");
	save_person();
}
void clear_person()           //清除所有联系人
{
	int i = 0;
	char a[SIZE] = { 0 };

	printf("您确认要全部清除吗？(y/n)\n");
	scanf("%s", a);
	if (strcmp("y", a) == 0)
	{
		memset(a_count.person,NULL,sizeof(a_count.person));  //中间必须放成空的才会真正清除
		a_count.size = 0;
		a_count.capacity = 10;
	}
	printf("清空成功!\n");
	save_person();                                     
}
