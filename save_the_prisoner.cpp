int saveThePrisoner(int n, int m, int s) 
{
    // 7 19 2 -> 6
    // 3  7 3 -> 3
    if((m + s - 1) % n == 0) return n;
    else return (m + s - 1) % n;
}