#define _CRT_SECURE_NO_WARNINGS 1

#define MAX 1000

#define MAX_NAME 15
#define MAX_ID 5
#define MAX_AUTHOR 12
#define MAX_PUBLISH 20

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

enum Option
{
	EXIT,//0
	ADD,//1
	DELETE,//2
	SREACH,//3
	MODIFY,//4
	SHOW,//5
	SORT//6
};//增加代码可读性

struct Book
{
	char name[MAX_NAME];
	int id;
	char author[MAX_AUTHOR];
	char publish[MAX_PUBLISH];
};//每一本图书的信息内容

//图书管理系统类型
struct Contact
{
	struct Book data[MAX];//存放1000本图书的信息
	int size;//记录当前已有图书的本数
};

//初始化图书管理系统
void InitContact(struct Contact* ps);

//添加一本图书的信息
void AddContact(struct Contact* ps);

//删除一本图书的信息
void DeleteContact(struct Contact* ps);

//查找指定图书并打印其信息
void SreachContact(const struct Contact* ps);

//修改指定图书的信息
void ModifyContact(struct Contact* ps);

//打印图书管理系统中的全部信息
void ShowContact(const struct Contact* ps);

//通过名字排序图书管理系统中图书的先后顺序
void SortContact(struct Contact* ps);

