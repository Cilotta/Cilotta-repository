#include "stdio.h"

int main(){
    int gue[4]={0};
    int sec[4]={0};
    int A=0;
    int B=0;
    printf("secret=");
    for (int i=0;i<4;i++)
    {
        scanf("%1d",&sec[i]);
    }
    printf("guess=");
    for (int i=0;i<4;i++)
    {
        scanf("%1d",&gue[i]);
    }
    int n=0;
    for (int i=0;i<3;i++)
    {
        if (sec[i]==gue[i])
        {
            A++;
        }
        for (;n<4;n++)
        {
            if (gue[n]==sec[i]&&n!=i)
            {
                B++;
            }
        }
        n=0;
    }
    printf("%dA%dB",A,B);
}