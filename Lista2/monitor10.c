#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    char op;
    double a,b,c,r,r2;
    scanf("%c",&op);
    switch(op){
        case '+':
            scanf("%lf %lf",&a,&b);
            r=a+b;
            printf("%.3lf",r);
            break;
        case '-':
            scanf("%lf %lf",&a,&b);
            r=a-b;
            printf("%.3lf",r);
            break;
        case '*':
            scanf("%lf %lf",&a,&b);
            r=a*b;
            printf("%.3lf",r);
            break;
        case '/':
            scanf("%lf %lf",&a,&b);
            r=a/b;
            if(b==0)
                printf("ERROR!");
            else printf("%.3lf",r);
            break;
        case '%':
            scanf("%lf %lf",&a,&b);
            if(b!=0 && a==floor(a) && b==floor(b)){
                r=(int)a%(int)b;
                printf("%.3lf",r);
            }
        else printf("ERROR!");
        break;
        case 'p':
            scanf("%lf %lf",&a,&b);
            r=pow(a,b);
            if(b==floor(b))
                printf("%.3lf",r);
            else if(a<0 && b!=floor(b))
                printf("ERROR!");
            break;
        case 'b': 
            scanf("%lf %lf %lf",&a,&b,&c);
            r= (-b+sqrt((b*b)-(4*a*c)))/(2*a);
            r2= (-b-sqrt((b*b)-(4*a*c)))/(2*a);
            printf("%.3f %.3f",r,r2);
            break;
    }
    return 0;
}