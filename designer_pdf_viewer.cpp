int designerPdfViewer(vector<int> h, string word) 
{
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    vector<int> heights = {};
    for(int u = 0; u < 26; u++)
    {
        for(int v = 0; v < word.length(); v++)
        {
            if(word[v] == alphabet[u]) heights.push_back(h[u]);
        }
    }
    int maxh = *max_element(heights.begin(), heights.end());
    return maxh * heights.size();
}
