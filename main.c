#include <stdio.h>
#include <time.h>

int main()
{
	FILE *fp;
	time_t t = time(NULL);
	struct tm date = *localtime(&t);

	char dateTime[200];
	strftime(dateTime, 200, "%c", &date);

	fp = fopen("tests.txt", "w");
	fputs(dateTime, fp);
	fclose(fp);
/*
Tenho que fazer o programa ler entrada e salvar em um arquivo de texto(feito)
Adicionar informação de data e horas quando escrito/salvo.(feito)
Não deixar novos logs substuirem outros por cima.
Formatação do arquivo deverá ficar em JSON para póstumas alterações
*/
}
