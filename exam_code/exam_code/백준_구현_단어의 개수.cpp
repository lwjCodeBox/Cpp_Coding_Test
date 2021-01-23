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

/////////////////////////////////////////////////////////////////
////https://shaeod.tistory.com/304
//// C version
#include <cstdio>
int main(void)
{
	unsigned int word_cnt = 0;
	char str[10/*1000011*/] = { 0, };
	unsigned int size = fread(str, 1, 10/*1000011*/, stdin);

	str[size - 2] = 0;
	
	for (unsigned int index = 1; index < size-1; index++) {
		if (str[index] == '\0') {
			if (str[index-1] != 0x20) word_cnt++;
			
			break;
		}
			
		// 0x20 is space
		if (str[index] == 0x20)	word_cnt++;
	}
	printf(">>%d<<", word_cnt);
	return 0;
}
/////////////////////////////////////////////////////////////////


// 
//#include <cstdio>
//
//int main() {
//	int c = 0;
//	char input[1000011];
//	unsigned int size = fread(input, 1, 1000011, stdin);
//	input[size] = 0;
//	for (int i = 0; input[i]; ++i) {
//		if (input[i] > 33 && input[i + 1] < 33) c++;
//	}
//	printf("%d", c);
//}