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
		printf("ͼ�����ϵͳ�������޷���ӣ�\n");
	}//ͼ�����ϵͳ��ͼ�鱾���Ѵ�����
	else
	{
		printf("����������:>");
		scanf("%s", ps->data[ps->size].name);
		printf("��������:>");
		scanf("%d", &(ps->data[ps->size].id));
		printf("����������:>");
		scanf("%s", ps->data[ps->size].author);
		printf("�����������:>");
		scanf("%s", ps->data[ps->size].publish);

		ps->size++;//ͼ�����ϵͳ��ͼ�鱾��+1
		printf("��ӳɹ�\n");
	}
}

//ͨ�����ֲ���ͼ�飬�ҵ��˷����±꣬û�ҵ�����-1
static int FindByName(char name[MAX_NAME], const struct Contact* ps)
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (strcmp(ps->data[i].name, name) == 0)
			return i;//�ҵ��˷����±�
	}
	return -1;//�Ҳ��������
}

//ɾ��һ��ͼ�����Ϣ
void DeleteContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫɾ��ͼ�������:>");
	scanf("%s", name);
	//����
	int pos = FindByName(name, ps);//�ҵ��˷����±꣬û�ҵ�����-1
	//ɾ��
	if (pos == -1)
	{
		printf("���޴���\n");
	}
	else
	{
		int j = 0;
		for (j = pos; j < ps->size - 1; ++j)
		{
			ps->data[j] = ps->data[j + 1];
		}//��Ҫɾ����ͼ��λ�ÿ�ʼ����һ��ͼ����Ϣ����ǰһ��ͼ����Ϣ
		printf("ɾ���ɹ�\n");
		ps->size--;//ͼ�����ϵͳ��ͼ�鱾��-1
	}
}

//����ָ��ͼ�鲢��ӡ����Ϣ
void SreachContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ����ͼ�������:>");
	scanf("%s", name);
	int pos = FindByName(name, ps);//�ҵ��˷����±꣬û�ҵ�����-1
	if (pos == -1)
	{
		printf("���޴���\n");
	}
	else
	{
		printf("%-15s\t%-4s\t%-5s\t%-12s\t\n", "����", "���", "����", "������");
		printf("%-15s\t%-4d\t%-5s\t%-12s\t\n",
			ps->data[pos].name,
			ps->data[pos].id,
			ps->data[pos].author,
			ps->data[pos].publish);

	}//��ӡ��ͼ�����Ϣ����
}

//�޸�ָ��ͼ�����Ϣ
void ModifyContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ�޸ĵ�ͼ�������:>");
	scanf("%s", name);
	int pos = FindByName(name, ps);//�ҵ��˷����±꣬û�ҵ�����-1
	if (pos == -1)
	{
		printf("���޴���\n");
	}
	else
	{
		printf("����������:>");
		scanf("%s", ps->data[pos].name);
		printf("��������:>");
		scanf("%d", &(ps->data[pos].id));
		printf("����������:>");
		scanf("%s", ps->data[pos].author);
		printf("�����������:>");
		scanf("%s", ps->data[pos].publish);

		printf("�޸ĳɹ�\n");
	}//�޸�ͼ����Ϣ��������ͼ����Ϣ����¼��
}

//��ӡͼ�����ϵͳ�е�ȫ����Ϣ
void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͼ�����ϵͳΪ��\n");
	}//ͼ�����ϵͳ��ͼ�鱾��Ϊ0
	else
	{
		printf("%-15s\t%-4s\t%-5s\t%-12s\t\n", "����", "���", "����", "������");
		//��ӡ��Ϣ��
		int i = 0;
		for (i = 0; i < ps->size; i++)
		{
			printf("%-15s\t%-4d\t%-5s\t%-12s\t\n",
				ps->data[i].name,
				ps->data[i].id,
				ps->data[i].author,
				ps->data[i].publish);

		}//��ӡͼ�����ϵͳȫ����Ϣ����
	}
}

//�Զ���ıȽϺ���
int CmpByName(const void* e1, const void* e2)
{
	return strcmp((const char*)e1, (const char*)e2);
}

//ͨ����������ͼ�����ϵͳ��ͼ����Ⱥ�˳��
void SortContact(struct Contact* ps)
{
	qsort(ps->data, ps->size, sizeof(struct Book), CmpByName);//����
}