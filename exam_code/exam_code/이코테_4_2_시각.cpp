#include <stdio.h>
#include <iostream>
#include <sstream>

using namespace std;

// ���� Ž�� ���� ���� ������ �߿��� ��ǥ���� ���� �����̴�.
// ���� Ž�� �˰��� ���� ��� ������ ������ 100���� ������ �� ���� Ž���� ����ϸ� �����ϴ�.
// �� ������ ���� Ž�� �˰������� Ǯ��� �Ѵ�.

int main(void)
{
	unsigned int count = 0, n = 0;

	cin >> n;

	for (int h = 0; h <= n; h++) {
		for (int m = 0; m < 60; m++) {
			for (int s = 0; s < 60; s++) {
				if (h % 10 == 3 || m / 10 == 3 || m % 10 == 3 || s / 10 == 3 || s % 10 == 3) {
					count++;
				}
			}
		}
	}

	cout << count;
	return 0;
}