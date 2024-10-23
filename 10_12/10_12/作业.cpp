#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <stdio.h>
//张展华 04241430
//#include <iostream>
//将包含输出输入的头文件插入当前源文件
//using namespace std;
//打开std库的命名空间，可以使用标准库的内容
//int main()//调用主函数，程序入口
//{
//	cout << "Iam a student of zcst.\n";
//	在输出流中插入字符串
//	return 0;
//	返回0，即假，停止程序
//}
//学好程序设计基础，多丰富知识库，多整理知识点，多实践！

//#include <iostream>
//// 包含流操作算子库
//#include <iomanip>
//using namespace std;
//// 定义常量PI，后面可以直接用PI代替后面的数值
//#define PI 3.14159265358979323846
//
//int main()
//{
//    int n;
//    // 请在Begin-End之间添加你的代码，输入n，按不同的精度输出 PI。
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