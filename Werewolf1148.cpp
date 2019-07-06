//// Werewolf1148.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
////

#include "pch.h"
#include <iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> p(n + 1);
	vector<int> a(n + 1, 1);
	vector<int> lie;
	
	for (int i = 1; i <= n; ++i)
		cin >> p[i];
	for (int i = 1; i <= n; ++i) {
		for (int j = i+1; j <= n; ++j) {
			a[i] = a[j] = -1;
			for (int k = 1; k <= n; ++k) {
				if (a[abs(p[k])] * p[k] < 0) {
					lie.push_back(k);
				}
			}
			if (lie.size() == 2 && a[lie[0] + a[lie[1]] == 0]) {
				cout << i << " " << j << endl;
				return 0;
			}
				
		}
	}
	cout << "No Solution"<<endl;
		return 0;
}

//// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
//// 调试程序: F5 或调试 >“开始调试”菜单
//
//// 入门提示: 
////   1. 使用解决方案资源管理器窗口添加/管理文件
////   2. 使用团队资源管理器窗口连接到源代码管理
////   3. 使用输出窗口查看生成输出和其他消息
////   4. 使用错误列表窗口查看错误
////   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//////   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
//#include "pch.h"
//#include <iostream>
//#include <vector>
//#include <cmath>
//using namespace std;
//int main() {
//	int n;
//	cin >> n;
//	vector<int> v(n + 1);
//	for (int i = 1; i <= n; i++) cin >> v[i];
//	for (int i = 1; i <= n; i++) {
//		for (int j = i + 1; j <= n; j++) {
//			vector<int> lie, a(n + 1, 1);
//			a[i] = a[j] = -1;
//			for (int k = 1; k <= n; k++)
//				if (v[k] * a[abs(v[k])] < 0) lie.push_back(k);
//			if (lie.size() == 2 && a[lie[0]] + a[lie[1]] == 0) {
//				cout << i << " " << j;
//				return 0;
//			}
//		}
//	}
//	cout << "No Solution";
//	return 0;
//}