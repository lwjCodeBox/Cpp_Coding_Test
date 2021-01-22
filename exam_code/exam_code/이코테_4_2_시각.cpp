#include <stdio.h>
#include <iostream>
#include <sstream>

using namespace std;

// 완전 탐색 문제 또한 구현이 중요한 대표적인 문제 유형이다.
// 완전 탐색 알고리즘 같은 경우 데이터 개수가 100만개 이하일 때 완전 탐색을 사용하면 적절하다.
// 이 문제는 완전 탐색 알고리즘으로 풀어야 한다.

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