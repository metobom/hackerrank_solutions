void staircase(int n) 
{
    n=n-1;
    for(int i = 0; i <= n; i++)
    {
        for (int k = i; k<=n-1; k++) printf(" ");   
        for(int j=0; j<=i; j++) printf("#");
        printf("\n");
    }
}