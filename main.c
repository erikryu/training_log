#include <stdio.h>

int main()
{
	FILE *fp;
	int c, i;

	fp = fopen("test.txt", "w");

	while ((c=getchar())!=EOF)
		putc(c, fp);

	fclose(fp);

/*
Tenho que fazer o programa ler entrada e salvar em um arquivo de texto(feito)
Adicionar informação de data e horas quando escrito/salvo.
Não deixar novos logs substuirem outros por cima.
*/
}
