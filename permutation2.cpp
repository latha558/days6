class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
         if(nums.size() <=1) return {nums};
       
        vector<vector<int>> r;
        
        for(int i=0;i<nums.size();i++){
            vector<int> v(nums.begin(),nums.end());
            v.erase(v.begin()+i);
            vector<vector<int>> d= permuteUnique(v);
            for(int j=0;j<d.size();j++){
                vector<int> v1=d[j];

              if(v1[j] !=nums[i])  
             { v1.insert(v1.begin(),nums[i]);  
                r.push_back(v1);}
                else continue;
            }
            
        }
      return r;  
    }

    
};
