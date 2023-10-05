#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int k, N;
	double S;
	cout << "N= "; cin >> N;
	k = N;
	S = 1;
	while (k <= 19)
	{
		S *= (((k - N) / (k + N)) + 1);
		k++;
	}
	cout << S << endl;
	k = N;
	S = 1;
	do {
		S *= (((k - N) / (k + N)) + 1);
		k++;
	} while (k <= 19);
	cout << S << endl;
	S = 1;
	for (k = N; k <= 19; k++)
	{
		S *= (((k - N) / (k + N)) + 1);
	}
	cout << S << endl;
	S = 1;
	for (k = N; k >= 19; k--)
	{
		S *= (((k - N) / (k + N)) + 1);
	}
	cout << S << endl;
	return 0;
}