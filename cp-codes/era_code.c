#include<stdio.h>
#include<math.h>
int main()
{
    int n,primes=1,odd,even;
    printf("Enter your Id's last part: ");
    scanf("%d",&n);
    for(int i=3; i<=n; i++ )
    {
        int flag=0;
        for(int j=2; j*j<=i; j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            primes++;
    }

    even=(n/2)-1;
    odd=n-primes-even;
    int x,y,z;
    x=floor(primes/4);
    y=floor(odd/4);
    z=floor(even/4);
    printf("\nTotal garlands are: %d\n",x+y+z);
    return 0;

}
