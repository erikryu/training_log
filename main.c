#include <stdio.h>
#include <time.h>

int get_time(char dt[]);

int main()
{
	int c;
	FILE *fp;
	char dateTime[200];

	get_time(dateTime);

	fp = fopen("tests.txt", "a");
	fputs(dateTime, fp);

	putc('\n', fp);

	while ((c=getchar())!=EOF)
		putc(c, fp);

	fclose(fp);
}

int get_time(char dt[]){
	time_t t = time(NULL);
	struct tm date = *localtime(&t);
	
	strftime(dt, 200, "%c", &date);
}
