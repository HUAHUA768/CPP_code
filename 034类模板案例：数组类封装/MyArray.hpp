#pragma once
#include <iostream>
using namespace std;
//通用数组类

template<class T>
class MyArray
{
private:
	T* arr;//指针指向堆区开辟的数组
	int capacity;//数组容量(即元素个数)
	int size;//数组大小
public:
	MyArray(int capacity)
	{
		cout << "有参构造调用" << endl;
		this->capacity = capacity;
		this->size = 0;
		this->arr = new T[this->capacity];

	}//有参构造
	~MyArray()
	{
		cout << "析构调用" << endl;

		if (this->arr != NULL)
		{
			delete[]this->arr;
			this->arr = NULL;
		}
	}

	MyArray(const MyArray& p)
	{
		cout << "拷贝构造调用" << endl;

		this->capacity = p.capacity;
		this->size = p.size;
		//注意p是本体数组，已经初始化完毕

		//深拷贝
		this->arr = new T[p.capacity];
		for (int i = 0; i < this->size; i++)
		{
			//​​size表示实际存储的元素数量，即不为空的部分
			this->arr[i] = p.arr[i];
		}
	}

	//operator=防止浅拷贝问题  以及a=b=c的情况,故应该返回MyArray&
	MyArray& operator=(const MyArray& p) 
	{
		cout << "operator=调用" << endl;

		//比拷贝构造多一个步骤：判断this中arr空间是否为空，不为空则释放
		if (this->arr != NULL)
		{
			delete[]this->arr;
			this->arr = NULL;
			this->capacity = 0;
			this->size = 0;
		}

		this->capacity = p.capacity;
		this->size = p.size;
		//注意p是本体数组，已经初始化完毕

		//深拷贝
		this->arr = new T[p.capacity];
		for (int i = 0; i < this->size; i++)
		{
			//​​size表示实际存储的元素数量，即不为空的部分
			this->arr[i] = p.arr[i];
		}

		return *this;//返回自身

	}

	//尾插法
	void Push_Back(const T& val)
	{
		if (this->size == this->capacity)
		{
			cout << "数组已满，插入失败" << endl;
			return;
		}
		this->arr[this->size] = val;
		this->size++;
	}

	//尾删法
	void Pop_Back()
	{
		//让用户访问不到最后一个数据，即size--
		if (this->size == 0)
		{
			cout << "数组为空，无法删除" << endl;
			return;
		}
		this->size--;
	}

	T& operator[](int index) const
	{
		return this->arr[index];
	}

	//返回容量
	int getCapacity() const
	{
		return this->capacity;
	}

	//返回大小
	int getSize() const
	{
		return this->size;
	}

};