class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zc=0;
        /*int j=0;
        for(int i=0;i<nums.size();++i )
        {
            if(nums[i]!=0)
            {
                int temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
                j+=1;
                
            }
            
        }*/
          for(int i=0;i<nums.size();++i )
        { 
            if(nums[i]!=0)
            {
                nums[zc++]=nums[i];}
    }
        
        while(zc<nums.size())
        {
            nums[zc++]=0;
            
        }
    }
};
    