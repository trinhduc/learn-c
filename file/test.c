#include <stdio.h>

/*

fscanf(fp, "%s", buff):
   - Function to read strings from a file, but it stops reading after encountering the first space character.

fgets(buff, 255, fp):
   - Second call is for fgets() which reads the remaining line till it encountered end of line.

result:

1: Den
2:  long truoc mat muon sac mau

3: Trong su yen ang cua noi day

*/
int main (int argc, char *argv[])
{

   FILE *fp;
   char buff[255];

   fp = fopen("file_text/file_source.txt", "r");

   if(fp==NULL){
      perror("Error: ");
      return(-1);
   }

   fscanf(fp, "%s", buff);
   printf("1: %s\n", buff );

   fgets(buff, 255, fp);
   printf("2: %s\n", buff );
   
   fgets(buff, 255, fp);
   printf("3: %s\n", buff );
   fclose(fp);

   return 0;
}