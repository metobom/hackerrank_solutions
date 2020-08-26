int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) 
{    
    vector<int> items = {};

    for(int i = 0; i < keyboards.size(); i++)
    {
        for(int j = 0; j < drives.size(); j++)
        {
            if(keyboards[i] + drives[j] <= b) items.push_back(keyboards[i] + drives[j]);
        }
    }
    sort(items.begin(), items.end(), greater<int>());

    if(items.size() == 0) return -1;  
    else return items[0];   
}