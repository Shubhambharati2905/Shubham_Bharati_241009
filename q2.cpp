class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>triplets_vector;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            int j=i+1,k=nums.size()-1;
            while(j<k && j< nums.size() && k>=0){
                if(j>i+1 && nums[j]==nums[j-1]){
                    j++;
                    continue;
                }
                if(k<nums.size()-1 && nums[k]==nums[k+1]){
                    k--;
                    continue;
                }
                if(nums[i]+nums[j]+nums[k]==0){
                   triplets_vector.push_back({nums[i],nums[j],nums[k]});
                   j++; 
                }
                else if(nums[i]+nums[j]+nums[k]<0){
                   j++; 
                }
                else if(nums[i]+nums[j]+nums[k]>0){
                   k--; 
                }
            }
        }

        return triplets_vector;

        
    }
};
