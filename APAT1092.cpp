// APAT1092.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//定义一个变量N是否满足，D缺少或多买的个数。接收两个输入字符串数组，存在S和E中，对E中每一个元素，从S中开始找，找到则删除，找不到则N=0，D+1.
//循环完成。若全部找到，则D=S长度-E长度，若N=0，D则为D。最后根据N输出Yse/NO 以及D的值。

#include "pch.h"
#include <iostream>
#include<string>
using namespace std;
int main()
{
	string s, e;
	int n=0, d=0;
	cin >> s >> e;
	for (int i = 0; i < e.size(); i++)
	{
		n = 0;
		for (int j = 0; j < s.size(); j++)
		{
			if (s[j] == e[i]) {
				n = 1;
				s[j] = '+';
				break;
			}
			
		}
		if(n == 0){
				d+=1;
			}
	}
	if (!d) {
		cout << "Yes " << s.size() - e.size() << endl;
	}
	else {
		cout << "No" << " " << d << endl;
	}
	//int N=0, D=0,i=0;
	//string S[1000], E[1000];
	//for (i = 0; cin >> j; i++)
	//{
	//	cin >> S[i];
	//}
	//for (i = 0; cin >> k; i++)
	//{
	//	cin >> E[i];
	//}
 //   cout << "Hello World!\n"; 
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
