class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        if(intervals.size()==0){
            return ans;
        }
        sort(intervals.begin(),intervals.end());
        vector<int>tempinterva=intervals[0];
        for(auto it:intervals){
            if(it[0]<=tempinterva[1]){
                tempinterva[1]=max(tempinterva[1],it[1]);
            }
            else{
                ans.push_back(tempinterva);
                tempinterva=it;
            
            }
        }
        ans.push_back(tempinterva);
        return ans;
        
    }
};