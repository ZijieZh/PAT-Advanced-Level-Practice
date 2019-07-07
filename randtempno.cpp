// ConsoleApplication5.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
//#include <iostream>
//#include<cstdlib>
//#include<ctime>
//using namespace std;
//int main()
//{
//	int r[200];
//	srand(int(time(0)));
//	for (int i = 0; i <= 4; i++) {
//		int result=1;
//		
//		if (rand() % 10 > 5) {
//			result = 0;
//			cout << rand() << "  ";
//			
//		}
//		cout << "\n";
//		r[i] = result;
//		cout << result<< "  ";
//		
//	}
//	cout << "\n";
//	for (int i = 0; i <= 4; i++) {
//		cout << r[i] << "  ";
//		
//	}
//	cout << "\n";
//}
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
	/*cout << "RAND_MAX:" << RAND_MAX << endl;*/
	srand((int)time(0));
	for (int i = 0; i < 5; i++) {
		int result = 1;
		cout << rand() % 10 << endl;
		if (rand() % 10 > 5) {
			result = 0;
			
		}
		cout << rand() << "  ";
	}
		
	
}
// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
