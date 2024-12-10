#include "contact.h"

void InitContact(struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;
}

void AddContact(struct Contact* ps)
{
	if (ps->data == MAX)
	{
		printf("图书管理系统已满，无法添加！\n");
	}//图书管理系统内图书本数已达上限
	else
	{
		printf("请输入书名:>");
		scanf("%s", ps->data[ps->size].name);
		printf("请输入编号:>");
		scanf("%d", &(ps->data[ps->size].id));
		printf("请输入作者:>");
		scanf("%s", ps->data[ps->size].author);
		printf("请输入出版社:>");
		scanf("%s", ps->data[ps->size].publish);

		ps->size++;//图书管理系统中图书本数+1
		printf("添加成功\n");
	}
}

//通过名字查找图书，找到了返回下标，没找到返回-1
static int FindByName(char name[MAX_NAME], const struct Contact* ps)
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (strcmp(ps->data[i].name, name) == 0)
			return i;//找到了返回下标
	}
	return -1;//找不到的情况
}

//删除一本图书的信息
void DeleteContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要删除图书的书名:>");
	scanf("%s", name);
	//查找
	int pos = FindByName(name, ps);//找到了返回下标，没找到返回-1
	//删除
	if (pos == -1)
	{
		printf("查无此书\n");
	}
	else
	{
		int j = 0;
		for (j = pos; j < ps->size - 1; ++j)
		{
			ps->data[j] = ps->data[j + 1];
		}//从要删除的图书位置开始，后一本图书信息覆盖前一本图书信息
		printf("删除成功\n");
		ps->size--;//图书管理系统中图书本数-1
	}
}

//查找指定图书并打印其信息
void SreachContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要查找图书的书名:>");
	scanf("%s", name);
	int pos = FindByName(name, ps);//找到了返回下标，没找到返回-1
	if (pos == -1)
	{
		printf("查无此书\n");
	}
	else
	{
		printf("%-15s\t%-4s\t%-5s\t%-12s\t\n", "书名", "编号", "作者", "出版社");
		printf("%-15s\t%-4d\t%-5s\t%-12s\t\n",
			ps->data[pos].name,
			ps->data[pos].id,
			ps->data[pos].author,
			ps->data[pos].publish);

	}//打印该图书的信息内容
}

//修改指定图书的信息
void ModifyContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要修改的图书的书名:>");
	scanf("%s", name);
	int pos = FindByName(name, ps);//找到了返回下标，没找到返回-1
	if (pos == -1)
	{
		printf("查无此书\n");
	}
	else
	{
		printf("请输入书名:>");
		scanf("%s", ps->data[pos].name);
		printf("请输入编号:>");
		scanf("%d", &(ps->data[pos].id));
		printf("请输入作者:>");
		scanf("%s", ps->data[pos].author);
		printf("请输入出版社:>");
		scanf("%s", ps->data[pos].publish);

		printf("修改成功\n");
	}//修改图书信息，即将该图书信息重新录入
}

//打印图书管理系统中的全部信息
void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("图书管理系统为空\n");
	}//图书管理系统中图书本数为0
	else
	{
		printf("%-15s\t%-4s\t%-5s\t%-12s\t\n", "书名", "编号", "作者", "出版社");
		//打印信息栏
		int i = 0;
		for (i = 0; i < ps->size; i++)
		{
			printf("%-15s\t%-4d\t%-5s\t%-12s\t\n",
				ps->data[i].name,
				ps->data[i].id,
				ps->data[i].author,
				ps->data[i].publish);

		}//打印图书管理系统全部信息内容
	}
}

//自定义的比较函数
int CmpByName(const void* e1, const void* e2)
{
	return strcmp((const char*)e1, (const char*)e2);
}

//通过名字排序图书管理系统中图书的先后顺序
void SortContact(struct Contact* ps)
{
	qsort(ps->data, ps->size, sizeof(struct Book), CmpByName);//排序
}