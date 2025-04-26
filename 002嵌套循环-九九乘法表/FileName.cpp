#include <iostream>
using namespace std;
int main()
{
	int i = 1;
	while (i < 10)
	{
		for (int n = 1; n <= i; n++)
		{
			cout << n << "x" << i << "=" << i * n << " ";
		}
		cout << endl;
		i++;
	}

	system("pause");
	return 0;
}