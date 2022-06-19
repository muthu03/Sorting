class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        map<int,int>m;
        int n=nums.size();
        vector<int>snums=nums;
        sort(snums.begin(),snums.end());
        for(int i=n-1;i>=0;i--){
            m[snums[i]]=i;
        }
        for(int i=0;i<n;i++){
            nums[i]=m[nums[i]];
        }
        
        return nums;
    }
};