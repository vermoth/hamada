#include <stdio.h>
#include <stdlib.h>
int prime(int *t){
    int i;
    if (*t==1||*t==2||*t==3||*t==5||*t==7){
    return 1;
 }
    for(i=2;i<*t;i++){
       if(*t%i==0)
        {
            return 0;
        }

    }
    return 1;
}
int main()
{   int e=0;
    int x=0;
    scanf("%d",&x);
    e= prime(&x);
    printf("%d",e);
    return 0;
}
