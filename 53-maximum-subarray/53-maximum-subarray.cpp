class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
    int sum=0;
    int max_till=0;
        for(int i=0;i<nums.size();++i)
        {
            if(sum+nums[i]>max_till)
            { 
             
                max_till=sum+nums[i];
                
            }
               sum+=nums[i];
            if(sum<0)
                sum=0;
        }
        if(max_till==0)
            return *max_element(nums.begin(),nums.end());
            
    return max_till;
   
}
    
};