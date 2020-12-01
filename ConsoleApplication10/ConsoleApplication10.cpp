#include <iostream>
using namespace std;

int main(void)
{
	int n, m;
	cout << "いくつまでの素数を表示しますか" << endl;
	cin >> m;
	cout << '2' << endl;
	for (int i = 3; i <= m; i+=2) {
		n = 0;
		for (int j = 3; j <= sqrt(i); j+=2) {
			if (j % 3 == 0 && j > 3) {
				continue;
			}
			else if (i % j == 0) {
				n++;
				break;
			}
		}
		if (n) {
			continue;
		}
		cout << i << endl;
	}
}