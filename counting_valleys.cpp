int countingValleys(int n, string s) 
{
    int count = 0;
    int height = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'D') height--;
        if(s[i] == 'U')
        {
            height++;
            if(height == 0) count++;       
        }
    }
    return count;
}
