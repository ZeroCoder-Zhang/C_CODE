#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <stdio.h>
//��չ�� 04241430
//#include <iostream>
//��������������ͷ�ļ����뵱ǰԴ�ļ�
//using namespace std;
//��std��������ռ䣬����ʹ�ñ�׼�������
//int main()//�������������������
//{
//	cout << "Iam a student of zcst.\n";
//	��������в����ַ���
//	return 0;
//	����0�����٣�ֹͣ����
//}
//ѧ�ó�����ƻ�������ḻ֪ʶ�⣬������֪ʶ�㣬��ʵ����

//#include <iostream>
//// �������������ӿ�
//#include <iomanip>
//using namespace std;
//// ���峣��PI���������ֱ����PI����������ֵ
//#define PI 3.14159265358979323846
//
//int main()
//{
//    int n;
//    // ����Begin-End֮�������Ĵ��룬����n������ͬ�ľ������ PI��
//    /********** Begin *********/
//    cin >> n;
//    int i;
//    for (i = n; i < n + 5; i++)
//    {
//        cout <<  fixed << setprecision(i) << PI << setiosflags(ios::showpoint) << endl;
//    }
//    /********** End **********/
//    return 0;
//}

//#include <stdio.h>
//void test()
//{
//	int i = 0;
//	i++;
//	printf("%d ", i);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		test();
//	}
//	return 0;
//}
int main()
{
	int a = 1;
	int b = 2;
	int c = 2;
	int x = 2;
	int y = 2;
	int abc = sqrt(pow(a, 2) + pow(b, 2)) / 2 * a * b;
	int abc1 = abs((a + b) * (a - c) + 2.5);
	int abc2 = sin(x) / 2 * y + pow(y, x);
	printf("%d %d %d", abc, abc1, abc2);

	return 0;
}