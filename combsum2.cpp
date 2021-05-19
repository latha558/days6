# include<iostream>
#include<vector>
//#include<bits\std++.h>
using namespace std;
int n=7;
int a[7]={10,1,2,7,6,1,5};
int N=8;

void  combinationSum(vector<int>&candidates, int targets) {
        if(targets==0)
    {
        for(int i=0;i<candidates.size();i++)
        {
           // s.push_back(cadidates[i]);
			cout<<candidates[i]<<" ";
        }
               
    }
   
    //cout<<endl;
   // for(int j=0;j<sizeof(a);j++){
	
    for(int i=0;i<=n;i++)
    { 
        candidates.push_back(a[i]);
        combinationSum(candidates,targets-a[i]);
        candidates.pop_back();
    }
      //   }
    }


int main()
{
//	int N;
//	cin>>N;
  vector<int>res;
	
   combinationSum(res,N);
   
		return 0;		
}
