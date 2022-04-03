#include <iostream>
using namespace std;

int main()
{
	int a;
	int b;
	int tab[1000];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		tab[i] = (2 * a * b) / (b + a);
	}
	for (int i = 0; i < n; i++)
	{
		cout << tab[i] << endl;
	}
}

//https://pl.spoj.com/problems/VSR/
