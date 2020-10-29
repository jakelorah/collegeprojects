#include <stdio.h>

int main() {
    FILE *fp;
	char str[60];

	fp = fopen("file.txt", "r");

	if ( fgets(str, 60, fp) != NULL ) {
		puts(str);
	}

	close(fp);

	return 0;
}
