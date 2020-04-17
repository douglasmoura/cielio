#include<stdio.h>
#include<locale.h>
main(){

 setlocale(LC_ALL, "Portuguese");
   int x;
    printf("Entre com um numero:");
    scanf("%d",&x);
    printf("*** TABUADA DO NuMERO %d *** \n",x);
    for(int i=1;i<=10;i++){

     printf("%d x %d = %d\n", x,i,x*i);
    }
}