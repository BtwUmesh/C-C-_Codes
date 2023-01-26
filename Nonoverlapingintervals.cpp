class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        // vector<int> a = intervals[0];
        int left = 0,right = 1;
        int c=0;
        while(right<intervals.size()){
            //non overlapping  [1,4] [4,6]
            if(intervals[left][1] <= intervals[right][0]){
                left = right;
                right++;
            }
            //when  intervals[left][1] >= intervals[right][0]
            //two cases of overlapping
            
            //overlapping (some part of send lies in first)  [1,3],[2,4]
            else if(intervals[left][1] <= intervals[right][1]){
                c++;
                right++;
            }
            //overlapping (second lies in first then remove first(larger one))
            else{ //left[1] > right[1]   [1,6][3,5]
                c++;
                left = right;
                right++;
            }
        }
        
        return c;
    }
};