#include <bits/stdc++.h>
// using namespace std;
// // vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success){
// //         int m=spells.size();
// //         int n=potions.size();
// //         sort(potions.begin(),potions.end());
// //         vector<int>ans(m,0);
// //         for(int i=0;i<spells.size();i++){
// //             int c=0;
// //             int spell=spells[i];
// //             int left=0;
// //             int right=n-1;
// //             while(left<=right){
// //                 int mid=(left+right)/2;
// //                 long long portion=(long long)potions[mid]*(long long)spell;
// //                 if(portion>=success){
// //                     right=mid-1;
// //                 }
// //                 else{
// //                     left=mid+1;
// //                 }
// //             }
// //             ans[i]=n-left;
// //         }
// //         return ans;
// // }
// // int main(){
// //   vector<int>spells={5,1,3};
// //   vector<int>potions={1,2,3,4,5};
// //   long long success=7;
// //   vector<int>ans=successfulPairs(spells,potions,success);
// //   for(int i=0;i<ans.size();i++){
// //     cout<<ans[i]<<"\t";
// //   }
// // }


//   // for(int j=0;j<s.length();j++){
//   //   int c1=0;
//   //   int c2=0;
//   //   int k=0;
//   // for(int i=j;i<s.length();i++){
//   //   if(s[i]!='1'){
//   //     c1++;
      
//   //   }
//   //   else{
//   //     k=i;
//   //       break;
//   //   }
//   // }
//   // if(k!=0){
//   //  for(int i=k;i<s.length();i++){
//   //   if(s[i]!='0'){
//   //     c2++;
//   //   }
//   //  else{
//   //       break;
//   //   }
//   // }
//   // }
//   // maxi=max(maxi,min(c2,c1));
//   // }
//   vector<int>unique(vector<int>&nums){
//     set<int>s;
//     vector<int>ans;
//     for(int i=0;i<nums.size();i++){
//       s.insert(nums[i]);
//     }
//     for(auto i :s){
//       ans.push_back(i);
//     }
//     return ans;
//   }
// vector<int>mr(vector<int>&nums,vector<int>&ans){
//       set<int> removed_elements;
//       nums.erase(remove_if(nums.begin(), nums.end(),
//                   [&](int x){ 
//                         if(find(ans.begin(), ans.end(), x) != ans.end() &&
//                             removed_elements.find(x)==removed_elements.end()){
//                             removed_elements.insert(x);
//                             return true;
//                         }
//                         return false;
//                   }),
//                   nums.end());                
// }
// int main(){
//   vector<int>nums={1,3,4,1,2,3,1};
//   vector<vector<int>>grid;
//   while(!nums.empty()){
//     vector<int>ans=unique(nums);
//     grid.push_back(ans);
//     nums=mr(nums,ans);
//   }
//   for(int i=0;i<grid.size();i++){
//     for(int j=0;j<grid[i].size();j++){
//       cout<<grid[i][j]<<"\t";
//     }
//     cout<<"\n";
//   }
// }