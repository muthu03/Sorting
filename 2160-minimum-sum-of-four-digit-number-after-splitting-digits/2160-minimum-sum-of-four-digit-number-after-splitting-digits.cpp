class Solution {
public:
    int minimumSum(int num) {
        vector<int>v;
        for(int i=0;i<4;i++){
            int n=num%10;
            v.push_back(n);
            num=num/10;
            
        }
        
        sort(v.begin(),v.end());
        int a=v[0]*10+v[2];
        int b=v[1]*10+v[3];
        return a+b;
    }
};