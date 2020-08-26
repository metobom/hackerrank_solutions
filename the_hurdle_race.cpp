int hurdleRace(int k, vector<int> height) 
{
    int pots = 0;
    for(int u = 0; u < height.size(); u++)
    {
        if(height[u] - k >= 1) 
        {
            pots+= height[u] - k;
            k += height[u] - k;
        }
    }
    return pots;
}