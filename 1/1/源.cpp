#include<iostream>
#include<string>
#include<cstring>
#include <iomanip>
#include <queue>
#include<stdio.h>
using namespace std;

queue <int>  b ;

int main()
{
	int ao, ju, n, i, j, h;
	cin >> n;
	for (ao = 0; ao < n; ao++)
	{
		cin >> ju;
		i = 0;
		while(i < ju)
		{
			cin >> j;
			if (j==0)
			{}
			else 
			{
				b.push(j);
			}
			i++;
	     }
		h = b.size();
		cout << h << "\n";
		while (!b.empty()) b.pop();

	}
	system("pause");
	return 0;
}