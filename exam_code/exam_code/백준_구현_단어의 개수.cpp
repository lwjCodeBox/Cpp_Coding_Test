//// https://www.acmicpc.net/problem/1152
//
//#include <iostream>
//#include <sstream>
//
//using namespace std;
//// C version
//int main(void)
//{
//	string str;
//	unsigned int word_cnt = 0;
//	const char *p_str;
//	
//	getline(cin, str);
//	p_str = str.c_str();
//	
//	// 문제 조건이 띄어쓰기 두번은 하지 않다고 명시되어 있다. 
//	// 따라서 문자열 맨 앞이 공백이든 아니든 상관하지 않고 그 다음 문자 부터 시작 
//	for (unsigned int index = 1; ; index++) {
//		if (*(p_str + index) == '\0') {
//			if (*(p_str + (index - 1)) != 0x20) // 0x20 is space
//				word_cnt++;
//
//			break;
//		}
//
//		if (*(p_str + index) == 0x20 ) // 0x20 is space
//			word_cnt++;
//	}
//
//	cout << word_cnt;
//	return 0;
//}

/////////////////////////////////////////////////////////////////
//https://shaeod.tistory.com/304
// C version - 향상된 버전.
#include <cstdio>
int main(void)
{
	unsigned int word_cnt = 0;
	char str[1000002];
	fgets(str, sizeof(str), stdin);
	for (unsigned int i = 1; ; i++) {
		if (str[i] == '\0' || str[i] == '\n') {
			if (str[i - 1] != 0x20) word_cnt++;

			break;
		}
		if (str[i] == 0x20)	word_cnt++;
	}
	printf("%d", word_cnt);
	return 0;
}
/////////////////////////////////////////////////////////////////

// C++ version
//int main(void)
//{
//	string str;
//	unsigned int word_cnt = 0;
//	
//	getline(cin, str);
//	
//	for (unsigned int index = 1; ; index++) {
//		if (str[index] == '\0') {
//			if (str[index-1] != 0x20) word_cnt++;
//
//			break;
//		}
//
//		// 0x20 is space
//		if (str[index] == 0x20 ) word_cnt++;
//	}
//
//	cout << word_cnt;
//	return 0;
//}