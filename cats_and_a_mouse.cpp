string catAndMouse(int x, int y, int z) 
{
    string out = "";
    if(abs(x - z) < abs(y - z)) out = "Cat A";
    else if(abs(x - z) > abs(y - z)) out = "Cat B";
    else out = "Mouse C";
    return out;
}