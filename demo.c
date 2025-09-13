#include <stdio.h>
#include <string.h>

int main(void) {
	
	char str1[15];
	char str2[15];

	errno_t err1 = strcpy_s(str1, sizeof(str1), "Hello");
	if (err1 != 0) {
		puts("err");
	}
	errno_t err2 = strcpy_s(str2, sizeof(str2), ", world!");
	if (err2 != 0) {
		puts("err");
	}

	strcat_s(str1, sizeof(str1), str2);

	printf("%s\n", str1);

	return 0;
}