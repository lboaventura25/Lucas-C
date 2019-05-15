#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX1 10
#define MAX2 5
#define MAX 3

	struct dados{
		int nr;
		char nome[MAX1];
		char depart[MAX2];
		float nota[3];
		float media;
	};

	float media_turma(float, float, float);
	float menor1(float *, float *, float *);

int main() {

	struct dados aluno[MAX];
	for(int A = 0; A < MAX; A++) {
		printf("Digite nr do aluno[%d]: ", A);
		scanf("%i", &aluno[A].nr);
		getchar();
		printf("Digite o nome do aluno[%d]: ", A);
		scanf("%s", aluno[A].nome);
		getchar();
		printf("Digite o departamento[%d]: ", A);
		scanf("%s", aluno[A].depart);
		printf("Digite nota 0[%d]: ", A);
		scanf("%f", &aluno[A].nota[0]);
		printf("Digite nota 1[%d]: ", A);
		scanf("%f", &aluno[A].nota[1]);
		printf("Digite nota 2[%d]: ", A);
		scanf("%f", &aluno[A].nota[2]);
		aluno[A].media = 0;
		printf("\n\n");
	}
	for(int B = 0; B < MAX; B++) {
		for(int L = 0; L < 3; L++) {
			aluno[B].media += aluno[B].nota[L]; 
		}
		aluno[B].media /= 3;
	}
	for(int R = 0; R < MAX; R++) {
		for(unsigned int S = 0; S < strlen(aluno[R].depart); S++) {
			aluno[R].depart[S] = toupper(aluno[R].depart[S]);
		aluno[R].depart[strlen(aluno[R].depart)] = '\0';
		}
	}
	for(int U = 0; U < MAX; U++) {
		for(unsigned int H = 0; H < strlen(aluno[U].nome); H++) {
			if(H == 0) {	
				aluno[U].nome[H] = toupper(aluno[U].nome[H]);
			}
			if(H > 0) {
				aluno[U].nome[H] = tolower(aluno[U].nome[H]);
			}
			aluno[U].nome[strlen(aluno[U].nome)] = '\0';
		}
	}
	float media_geral = media_turma(aluno[0].media, aluno[1].media, aluno[2].media);
	float pior = menor1(&aluno[0].nota[0], &aluno[1].nota[0], &aluno[2].nota[0]);
	printf("DADOS DOS ALUNOS: \n");
	for(int Z = 0; Z < MAX; Z++) {
		printf("aluno[%d].nr: %d\n", Z, aluno[Z].nr);
		printf("aluno[%d].nome: %s\n", Z, aluno[Z].nome);
		printf("aluno[%d].curso: %s\n", Z, aluno[Z].depart);
		for(int R = 0; R < 3; R++) {
			printf("aluno[%d].nota[%d]: %.1f\n", Z, R, aluno[Z].nota[R]);
		}
		printf("aluno[%d].media: %.1f\n", Z, aluno[Z].media);	
		printf("\n\n");
		}
		printf("A media da turma foi %.2f!\n", media_geral);	
		printf("A menor nota da primeira foi %.2f!\n", pior);
	return 0;
}

float media_turma(float aluno1, float aluno2, float aluno3) {
	float media = (aluno1 + aluno2 + aluno3) / 3;
return media;
}

float menor1(float *nota1a, float *nota1b, float *nota1c) {
	float menor = 10.0;
	if(*nota1a < menor) {	
		menor = *nota1a;
	}
	if(*nota1b < menor) {	
		menor = *nota1b;
	}
	if(*nota1c < menor) {
		menor = *nota1c;
	}
return menor;
}	
