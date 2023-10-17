#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int k, N, i;
	double S;

	cout << "k = "; cin >> k;
	cout << "N = "; cin >> N;

	S = 1;
	i = k;
	while (i <= N)
	{
		S *= (pow(sin(i), 2) + pow(cos(1. / i), 2)) / pow(i, 2);
		i++;
	}
	cout << S << endl;

	S = 1;
	i = k;
	do {
		S *= (pow(sin(i), 2) + pow(cos(1. / i), 2)) / pow(i, 2);
		i++;
	} while (i <= N);
	cout << S << endl;

	S = 1;
	for (i = k; i <= N; i++)
	{
		S *= (pow(sin(i), 2) + pow(cos(1. / i), 2)) / pow(i, 2);
	}
	cout << S << endl;

	S = 1;
	for (i = N; i >= k; i--)
	{
		S *= (pow(sin(i), 2) + pow(cos(1. / i), 2)) / pow(i, 2);
	}
	cout << S << endl;
}