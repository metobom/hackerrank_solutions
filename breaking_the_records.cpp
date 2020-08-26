vector<int> breakingRecords(vector<int> scores) 
{
    int minCount = -1;
    int maxCount = -1;
    int initialMin = 1000000000;
    int initialMax = -100000000;
    vector<int> outs = {};

    for(int i = 0; i < scores.size(); i++)
    {
        if(scores[i] < initialMin)
        {
            minCount++;
            initialMin = scores[i];
        }

        if(scores[i] > initialMax)
        {
            maxCount++;
            initialMax = scores[i];
        }
    }
    outs.push_back(maxCount);
    outs.push_back(minCount);
    return outs;
}