string angryProfessor(int k, vector<int> a) 
{
    
    int count = 0;
    string out = "";

    for(int u = 0; u < a.size(); u++)
    {
        if(a[u] <= 0) count++;
        if(count >= k) out = "NO";
        else out = "YES";
    }
    return out;
}