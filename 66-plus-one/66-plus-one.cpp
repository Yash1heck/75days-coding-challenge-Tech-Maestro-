class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int raise;
        digits[digits.size()-1]=(digits[digits.size()-1])+1;
        raise= (digits[digits.size()-1])/10;
        digits[digits.size()-1]=digits[digits.size()-1]%10;
                                 
        
        for(int i=digits.size()-2;i>=0;--i)
        {   
            
            
            if(raise==1)
            {
                digits[i]=(digits[i])+1;
        raise= (digits[i])/10;
        digits[i]=digits[i]%10;
                                 
        
            }
           
        }
            
        if(raise!=0)
             digits.insert(digits.begin(), 1);
        return digits;
    }
};