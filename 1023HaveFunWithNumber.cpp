// 1023HaveFunWithNumber.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include<iostream>
#include <string.h>
using namespace std;
int main()
{
	int b[10] = { 0 };//赋值不会自动为0？
	/*for (int i = 0; i < 10; i++) {
		b[i] = 0;
	}*/
	char n[22];
	cin >> n;
	int f = 0;
	int len;
	len = strlen(n);
	int tem;
	for (int i = len-1; i >= 0; i--) {//注意是从len-1到0开始遍历。
		tem = n[i] - '0';
		b[tem]++;
		tem = tem + tem + f;
		f = 0;
		if (tem > 9) {
			tem = tem - 10;
			f = 1;
		}
		n[i] = (tem + '0');
		b[tem]--;
	}
	int r = 0;
	for (int i = 0; i < 10; i++) {
		if (b[i] != 0)
			r = 1;
	}
	/*cout << r << f;*/
	cout << ((r == 1 || f == 1) ? "No\n" : "Yes\n");	
	if (f == 1)cout<<"1";
	cout << n;
	return 0;    
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
