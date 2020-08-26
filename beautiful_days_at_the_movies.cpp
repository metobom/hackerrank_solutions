int beautifulDays(int i, int j, int k) 
{
    vector<int> nums = {};

    //get unreversed numbers
    for(int u = i; u<=j; u++)
    {
        nums.push_back(u);
    }
    
    int initial = 0;
    int remainder;
    int reversedNumber;
    int count = 0;
    //get reversed numbers
    for(int u = 0; u < nums.size(); u++){
        initial = nums[u];
        reversedNumber = 0;
        while(nums[u] != 0) {
            remainder = nums[u]%10;
            reversedNumber = reversedNumber*10 + remainder;
            nums[u] /= 10;
        }
        if(abs(initial - reversedNumber) % k ==0) count++;
    }

    return count;
}