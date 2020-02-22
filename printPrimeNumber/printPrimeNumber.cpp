// printPrimeNumber.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include "stdlib.h"
//#include "math.h"

using namespace std;

//素数判断
int CheckPrimeNumber(int n)
{
	if (n == 2)
	{
		return 1;
	}
	else if (n <= 1)
	{
		return 0;  //负数和0，1不是素数
	}
	else
	{
		//排除偶数
		if (n % 2 == 0)
		{
			return 0;
		}
		//对奇数进行判断
		else
		{		
			for (int i = 3; i <= sqrt((double)n); i++)
			{
				if (n%i == 0)
				{
					return 0;
				}
			}
			return 1;
		}
	}
}
int main()
{
    //std::cout << "Hello World!\n"; 
	//system("pause");
	int num = 100;
	int PrimeNubmerSum = 0;
	for (int i = 0; i < 100; i++)
	{
		//素数判断
		if (CheckPrimeNumber(i) == 1)
		{
			//打印素数
			cout << "the number is:" << i << endl;
			PrimeNubmerSum++;
		}
	}
	//打印总数
	cout << "the sum is:" << PrimeNubmerSum << endl;

	system("pause");
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
