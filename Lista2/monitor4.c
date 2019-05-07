#include <stdio.h>
#include <math.h>
int main () {
    char op;
    double a,b,c,x1,x2,delta;
    int b1, a2, b2;
    scanf("%c",&op);
    switch (op) {
    case '+':
        scanf("%lf %lf",&a,&b);
        printf("%.3lf",a+b);
        break;
    case '-':
        scanf("%lf %lf",&a,&b);
        printf("%.3lf",a-b);
        break;
    case '*':
        scanf("%lf %lf",&a,&b);
        printf("%.3lf",a*b);
        break;
    case '/':
        scanf("%lf %lf",&a,&b);
        if (b!=0)
        {
            printf("%.3lf",a/b);
        }
        else
            printf("ERROR!");
        break;
    case '%':
        scanf("%lf %lf",&a,&b);
        if(b != 0) {
            a2 = a;
            b2 = b;
            int result = a2%b2;
            printf("%d",result);
        }
        else { (printf("ERROR!"));
        }
        break;
    case 'p':
        scanf("%lf %lf",&a,&b);
        if (a>=0)
        {
            printf("%.3lf",pow(a,b));
        }
        if (a<0)
        {
            b1 = b;
                printf("%.3lf",pow(a,b1));
        }
        break;
    case 'r':
        scanf("%lf",&a);
        if (a>=0)
            printf("%.3lf",sqrt(a));
        else
            printf("ERROR!");
        break;
    case 'b':
        scanf("%lf %lf %lf",&a,&b,&c);
        if(a!=0){
            delta=pow(b,2.0)-4*a*c;
        if(delta>=0 && a!=0){
            x1=((b*-1)+sqrt(delta))/2*a;
            x2=((b*-1)-sqrt(delta))/2*a;
            printf("%.3lf %.3lf",x1,x2);}
        else{ printf("ERROR!");}
        }
        else { printf("ERROR!");
        }
        break;
    default:
        printf("ERROR!");
    }
    return 0;
}