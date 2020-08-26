void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) 
{
    int appleCount = 0;
    int orangeCount = 0;
    int applePos = 0;
    int orangePos = 0;

    for(int i = 0; i < apples.size(); i++)
    {
        applePos = apples[i] + a;
        if(applePos >= s && applePos <= t)
            appleCount++;
    }

    for(int i = 0; i < oranges.size(); i++)
    {
        orangePos = oranges[i] + b;
        if(orangePos >= s && orangePos <= t)
            orangeCount++;
    }
    printf("%d\n", appleCount);
    printf("%d\n", orangeCount);
}
