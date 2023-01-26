#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstl, vector<vector<int>>& secondl) {
       int n = firstl.size();
       int m = secondl.size();
       int i = 0, j = 0;
       vector<vector<int>> ans;
       while(i<n && j<m){
           vector<int> curr(2);
           if(firstl[i][0] <= secondl[j][1] && firstl[i][1] >= secondl[j][0]){
               curr[0] = max(firstl[i][0], secondl[j][0]);
               curr[1] = min(firstl[i][1], secondl[j][1]);
               ans.push_back(curr);
           }
           if(firstl[i][1] > secondl[j][1]) j++;
           else i++;
       } 
       return ans;
    }
};