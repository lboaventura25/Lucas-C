#include <stdio.h>
#include <stdlib.h>
#define MAX 10

	void recebe_notas(float *, int, int *);
	void conta_notas(int *, int, float *, float *);
	int percent_notas(float, float, float *, float *);

int main () {

	int APR[MAX];
	float NOTAS[MAX];
	int B = 0;
	float aprovados = 0;
	float reprovados = 0;
	float perc_apro = 0;
	float perc_repro = 0;
	int acao = 0;

	for(B = 0; B < MAX; B++) {
		
		printf("Digite a nota do aluno[%d]: ", B);
		scanf("%f", &NOTAS[B]);
	}

	recebe_notas(&NOTAS[0], B, &APR[0]);

	/*for(int K = 0; K < MAX; K++) {

		printf("\n*****%.2f %d ", *(NOTAS + K), *(APR + K));
	}*/

	conta_notas(&APR[0], B, &aprovados, &reprovados);

	//printf("\n*****%d aprovados, %d reprovados\n", aprovados, reprovados);

	int sim = percent_notas(aprovados, reprovados, &perc_apro, &perc_repro);

	printf("\n");

	for(int E = 0; E < 5; E++) {

	printf("(1) Quantidade de aprovados;\n(2) Quantidade de reprovados;\n(3) Percentual de aprovados;\n(4) Percentual de reprovados; e\n(5) Se mais da metade da turma foi aprovada.\n");
	printf("\nO que deseja fazer com as notas dos alunos? \n");
	scanf("%d", &acao);

	switch(acao) {

		case 1:
			printf("------- A quantidade de alunos aprovados foi de %.0f alunos!\n\n\n", aprovados);
			break;
	
		case 2:
			printf("------- A quantidade de alunos reprovados foi de %.0f alunos!\n\n\n", reprovados);
			break;

		case 3:
			printf("------- O percentual de aprovados foi de %.0f%%!\n\n\n", perc_apro);
			break;
	
		case 4:
			printf("------- O percentual de reprovados foi de %.0f%%!\n\n\n", perc_repro);
			break;
		
		case 5:
			if(sim == 1) {
			printf("------- %.0f alunos de %d foram aprovados!\n\n\n", aprovados, B);
			}
			if(sim == 0) {
				printf("------- %.0f alunos de %d foram reprovados!\n\n\n", reprovados, B);
			}
			break;
}

	}		

	return 0;	
}

	void recebe_notas(float *nota, int tam, int *apr) {

		int A;

		for(A = 0; A < tam; A++) {

			if(*(nota + A) >= 6) {
			
				*(apr + A) = 1;
			}

			if(*(nota + A) < 6) {

				*(apr + A) = 0;
			}
		}
	}

	void conta_notas(int *vetor, int tamanho, float *passei, float *reprovei) {

		int C;

		//printf("*****%d %d", *passei, *reprovei);

		for(C = 0; C < tamanho; C++) {

			if(*(vetor + C) == 1) {

				(*passei) += 1;
			}

			else {			

				*reprovei += 1;
			}
		}
	}

	int percent_notas(float ap, float rep, float *passou, float *reprovou) {

		int D = ap + rep;

		//printf("\n***** ap = %.0f, rep = %.0f, D = %d", ap, rep, D);

		*passou  = ((ap / D) * 100);
		*reprovou = ((rep / D) * 100);

		//printf("\n***** passou %.0f%%, reprovou %.0f%%", *passou, *reprovou);

		if(ap > (D/2)) {

			return 1;
		}
		
		else 

			return 0;
		
	}

