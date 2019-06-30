#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef struct celular {
    int x;
    int y;
} cel;

typedef struct antena {
    double raio;
    int x;
    int y;
} ant;

double distance(cel, ant);

int main() {
    cel Cel;
    ant Ant;
    int i;
    double dist;
    int check = 0;

    scanf("%d %d", &Cel.x, &Cel.y);

    for(i = 0; i < 3; i++) {
        scanf("%lf %d %d", &Ant.raio, &Ant.x, &Ant.y);
        dist = distance(Cel, Ant);

        if(dist <= Ant.raio) {
            check += 1;
        }
    }

    if(check == 3) {
        printf("Celular Encontrado\n");
    }
    else{
        printf("Nao foi possivel encontrar\n");
    }

 return 0;
}

double distance(cel a, ant b){
    return hypot(a.x-b.x,a.y-b.y);
}