string kangaroo(int x1, int v1, int x2, int v2) 
{
    string out = "NO";
    int i = 0;
    int k1 = 0;
    int k2 = 0;

    while(true)
    {
        k1 = x1 + v1 * i;
        k2 = x2 + v2 * i; 
        if(k1 == k2)
        {
            out = "YES";
            return out;
            break;
        }

        if(i == 100000) break;
          
        i++;
    }
    return out;
}