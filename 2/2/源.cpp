#include<iostream>
#include<string>
#include<cstring>
#include <iomanip>
#include <queue>
#include <cstdlib>
#include<stdio.h>
using namespace std;

double q, p, r, s, x, sum;

int main()
{
	int ao, ju, n, i, j, h;
	cin >> n;
	string time1,time2;
	for (ao = 0; ao < n; ao++)
	{
		cin >> j >> x;
		ju = 0;
		sum = 0;
		while (ju < j)
		{
			cin >> time1>>time2;

			p = atoi((time1.substr(0, 2)).c_str());
			q = atoi((time1.substr(3, 4)).c_str());
			r = atoi((time2.substr(0, 2)).c_str());
			s = atoi((time2.substr(3, 4)).c_str());
			q = q / 60; s = s / 60;
			sum = sum + ((r + s) - (q + p));
			ju++;
		}
		if (sum >= x)
		{
			cout << "YES" << "\n";
		}
		else
		{
			cout << "NO" << "\n";
		}
	}
	system("pause");
	return 0;
}