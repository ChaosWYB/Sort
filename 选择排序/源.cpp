#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	int location;
	int nums[10] = {};
	for (int i = 0; i < 10;++i)
	{
		nums[i] = rand()%1000;
		cout << nums[i] << '\t';
	}
	cout << endl;
	for (int j = 0;j < 10;j++)
	{
		int max = nums[j], location = j;
		for (int k = j;k < 10;k++)
		{
			if (nums[k] > max)
			{
				max = nums[k];
				location = k;
			}
		}
		nums[location] = nums[j];;
		nums[j] = max;
	}
	for (int i = 0;i < 10;i++)
	{
		cout << nums[i] << '\t';
	}
	return 0;
}
