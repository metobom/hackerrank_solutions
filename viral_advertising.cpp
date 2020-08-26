int viralAdvertising(int n) 
{
    int ppl_reach = 5 / 2;
    int ppl_count = 5 / 2;

    for(int u = 0; u < n-1; u++)
    {
        ppl_reach= ppl_reach * 3 / 2;
        ppl_count += ppl_reach;
    }
    return ppl_count;
}