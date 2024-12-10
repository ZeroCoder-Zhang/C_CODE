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
};//���Ӵ���ɶ���

struct Book
{
	char name[MAX_NAME];
	int id;
	char author[MAX_AUTHOR];
	char publish[MAX_PUBLISH];
};//ÿһ��ͼ�����Ϣ����

//ͼ�����ϵͳ����
struct Contact
{
	struct Book data[MAX];//���1000��ͼ�����Ϣ
	int size;//��¼��ǰ����ͼ��ı���
};

//��ʼ��ͼ�����ϵͳ
void InitContact(struct Contact* ps);

//���һ��ͼ�����Ϣ
void AddContact(struct Contact* ps);

//ɾ��һ��ͼ�����Ϣ
void DeleteContact(struct Contact* ps);

//����ָ��ͼ�鲢��ӡ����Ϣ
void SreachContact(const struct Contact* ps);

//�޸�ָ��ͼ�����Ϣ
void ModifyContact(struct Contact* ps);

//��ӡͼ�����ϵͳ�е�ȫ����Ϣ
void ShowContact(const struct Contact* ps);

//ͨ����������ͼ�����ϵͳ��ͼ����Ⱥ�˳��
void SortContact(struct Contact* ps);

