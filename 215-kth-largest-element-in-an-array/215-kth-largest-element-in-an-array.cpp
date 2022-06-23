class Solution {
public:
    
    int partition(vector<int>& nums,int left,int right){
        int pivot=nums[left];
        int l,r=right;
        l=left+1;
        
        while(l<=r){
            if(nums[l]<pivot && nums[r]>pivot){
                swap(nums[l++],nums[r--]);
                
            }
             if (nums[l] >= pivot) {
                l++;
            }
            if (nums[r] <= pivot) {
                r--;
            }
        }
        swap(nums[left],nums[r]);
        return r;
    }
   
    int findKthLargest(vector<int>& nums, int k) {
       int left=0;
       int right=nums.size()-1;
       int ans;
       while(true){
            int idx=partition(nums,left,right);
            if(idx==k-1){
                ans= nums[idx];
                break;
            }
              if (idx < k - 1) {
                left = idx + 1;
            } else {
                right = idx - 1;
            }
        }
        return ans;
    }
    
};