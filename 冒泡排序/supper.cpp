#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;
int main()
{
	int nums[10] = {};
	int tem;
	for (int i = 0;i < 10;++i)
	{
		nums[i] = rand() % 1000;
		cout << left;
		cout << setw(4)<<nums[i];
	}
	cout << endl;
	for (int j = 0;j < 9;++j)
	{
		for (int k = 0;k < 9 - j;k++)
		{
			if (nums[k] > nums[k + 1])
			{
				tem = nums[k];
				nums[k] = nums[k + 1];
				nums[k + 1] = tem;
			}
		}
	}
	for (int i = 0;i < 10;++i)
	{
		cout << left;
		cout <<setw(4)<< nums[i];
	}
	return 0;
}