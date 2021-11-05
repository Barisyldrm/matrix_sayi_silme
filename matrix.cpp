#include <iostream>
using namespace std;
int main()
{
	int dizi[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	int index;
	int x, y;
	int* p;

	for (x = 0; x < 3; x++) {
		for (y = 0; y < 4; y++)
			cout << "  " << dizi[x][y];
		cout << endl;
	}
	cout << "Silinecek index'i giriniz: ";
	cin >> index;

	if (index > 0 && index <= 12)
	{
		p = dizi[0];

		for (x = index - 1; x < 12 - 1; x++)
			p[x] = p[x + 1];

		int eleman = (sizeof(dizi) / sizeof(int));
		p[eleman - 1] = 0;

		int a, b;
		for (a = 0; a < 3; a++) {
			cout << endl;
			for (b = 0; b < 4; b++)
				cout << "  " << dizi[a][b];
		}
	}
	else
		cout << "Lütfen gecerli bir index giriniz";
	return 0;
}
