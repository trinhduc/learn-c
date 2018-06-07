#include <stdio.h>
#include <stdlib.h>

#define MAX_NUMBER_CHAR 1000

int main (int argc, char *argv[])
{
	FILE *fp = NULL;
	char get_string[MAX_NUMBER_CHAR] = "";
	int c =0;
	int count =0;

	fp = fopen("file_text/file_source.txt", "r+"); // "r+"" : it mean read and write into file. If "r" it is only read
	
	// printf("getc: %d\n", getc(fp));	

	// for (c = getc(fp); c != EOF; c = getc(fp)){
 //        if (c != '\n' && c != ' '){ // Increment count if this character is newline
 //        	printf("getc %d in for: %d\n", count, getc(fp));	
 //            count ++;
 // 		}
 // 	}

	if (fp != NULL){
		while(fgets(get_string, MAX_NUMBER_CHAR, fp) != NULL){
		printf("%s", get_string);

		}

		fclose(fp);
	}

	return 0;
}

/* Sẽ viết từng module về file luôn
	+ Đếm số ký tự
	+ Đếm số từ
	+ Đếm số dòng
	+ Hàm random chọn dòng
	+ Tìm một ký tự
*/