int utopianTree(int n) 
{
    int h = 1;

    for(int u = 0; u < n; u++)
    {
        if(u%2==0) h+=h;
        else h+=1;
    }
    return h;
}
