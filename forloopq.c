#include <stdio.h>
int main(void)
{
    int sum=10;
    int k;

    k=10;
    while(k<5)
    //for (k=0;k<5;k++)
    {
        sum+=1;
        k++;
    }

    printf ("%d\n",sum);

    //k=5;

    for(k=10;k>0;k--){
    //while (k>0){
        //k=k-1;
        printf("%d\n",k);

    }
    printf("Blast Off!");

}