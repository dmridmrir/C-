#include <iostream>
#include<string>
#include<time.h>
#include<string.h>
using namespace std;

void StrCat(char *str1, const char *str2) {
	int len = strlen(str1);
	str1[len] = 0;
	memcpy(str1 + len, str2, strlen(str2));
}

//memcpy(복사받을 메모리, 복사할 메모리, 길이)
//길이를 계산할때 char* 타입의 C언어 문자열 형태의 문자열의 전체를 복사할때는 
//맨 뒤에 문자열의 끝을 알리는 "\0"의 길이도 계산해서 넣어야하기 때문에 + 1의 길이만큼 해주어야합니다.

int main(void) {
	
	char str1[100] = "C++";
	const char* str2 = "Programming";

	StrCat(str1, str2);

	cout << str1;

	return 0;
}
