#include<stdio.h>
void main(){
   int n=2,i,choice;
   do{
    i=1;
    while(i<=20){
       printf("%d X %d= %d\n",n,i,(n*i));
       i++;

    }
    printf("do you want to continue in %d otherwise write the number",n+1);
    scanf("%d",&choice);
    if(choice==0){
        break;
    }
    n++;

   }while(1);
}
