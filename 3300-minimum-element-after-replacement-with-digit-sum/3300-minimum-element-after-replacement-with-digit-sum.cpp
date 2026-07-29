class Solution {
public:
    int ds(int n){
        int sum=0;
        while(n){
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
    int minElement(vector<int>& nums) {
    int ans=INT_MAX;
    for(int num: nums){
        ans=min(ans,ds(num));
    }
    return ans;
    }
};