#include <iostream>
using namespace std;
#include <string>
struct Hero
{
	string name;
	int age;
	string sex;

};
void Bubble_Sort(Hero arr[], int len)
{
	for (int i = 0; i < len-1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j].age > arr[j + 1].age)
			{
				Hero tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
		
	}
}
int main()
{
	Hero heroArray[5];
	heroArray[0] = { "����",22,"��" };
	heroArray[1] = { "¬��",25,"��" };
	heroArray[2] = { "����",26,"Ů" };
	heroArray[3] = { "����",18,"��" };
	heroArray[4] = { "����",36,"��" };

	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	//��ð��������ṹ����������
	//����������
	Bubble_Sort(heroArray, len);
	for (int i = 0; i < len; i++)
	{
		cout << "\t"<<heroArray[i].name <<"\t"<<
			heroArray[i].age << "\t" << heroArray->sex<<"\t" << endl;
	}
	return 0;
}