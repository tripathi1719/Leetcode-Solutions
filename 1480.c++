# Leetcode-Solutions

class Solution{
public:
     vector<int>runningSum(vector<int>& nums){
            int n=nums.size();
            vector<int> rSum(n);
            for(int i=0;i<n;i++){
                rSum[i]=0;
                for(int j=0;j<=i;j++){
                   rSum[i]+=nums[j];
                 }
            }
            return rSum;
       }
};
