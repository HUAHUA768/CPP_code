#include <iostream>
using namespace std;
template<typename T>
void Sort(T* arr,int sz)
{
	int max = 0;
	//从大到小
	for (int i = 0; i < sz - 1; i++)
	{
		max = i;
		for (int j = i + 1; j < sz; j++)
		{
			if (arr[max] < arr[j])
			{
				max = j;
			}
		}
		if (arr[max] > arr[i])
		{
			T tmp = arr[i];
			arr[i] = arr[max];
			arr[max] = tmp;
		}
		
	}
}

//测一下浮点型
void test1()
{
	double arr[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i * 2.2;
	}
	int sz = sizeof(arr) / sizeof(arr[0]);
	Sort(arr, sz);
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
}

//测一下字符数组
void test2()
{
	char arr[] = "gjhrsx";
	int sz = sizeof(arr) / sizeof(arr[0]);
	Sort(arr, sz);
	for (int i = 0; i < sz; i++)
	{
		cout << arr[i] << " ";
	}
}
int main()
{
	//利用选择排序实现一个可以排序任意类型数组的函数
	/*test1();*/
	test2();
	return 0;
}