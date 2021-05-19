lass Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {

        if(nums.size() <=1) return {nums};
       
        vector<vector<int>> r;
        
        for(int i=0;i<nums.size();i++){
            vector<int> v;
            for(int j=i+1;j<nums.size();j++) v.push_back(nums[j]);
           
            auto d=permute(v);
            for(int j=0;j<d.size();j++){
                auto v1=d[j];
                v1.insert(v.begin(),nums[i]);
                r.push_back(v1);
            }
            
        }
      return r;  
    }
};
