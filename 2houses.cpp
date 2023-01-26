using namespace std;
#include <iostream>
#include <vector>

class Interval {
 public:
  int start = 0;
  int end = 0;

  Interval(int start, int end) {
    this->start = start;
    this->end = end;
  }
};

class InsertInterval {
 public:
  static vector<Interval> insert(const vector<Interval> &intervals, Interval newInterval) {
    vector<Interval> mergedIntervals;
    vector<vector<int>> insert(vector<vector<int>>& mat, vector<int>& newInterval){
       mat.push_back(newInterval);
        for(int i=mat.size()-2;i>=0;i--)  //place new element in its correct position
        {
            if(mat[i][0]>=mat[i+1][0])
            {
                mat[i+1][0] = mat[i][0];
                mat[i+1][1] = mat[i][1];
                mat[i][0] = newInterval[0];
                mat[i][1] = newInterval[1];
            }
            else
            {
                break;
            }
        }
        vector<vector<int>>v;  //apply same merge sort approach
        int sum = 0;
        int a1 = mat[0][0];
        int a2 = mat[0][1];
       for(int i=1;i<mat.size();i++)
       {
           if(mat[i][0]<=a2)
           {
               a2 = max(a2,mat[i][1]);
           }
           else
           {
              v.push_back({a1,a2});
               a1 = mat[i][0];
               a2 = mat[i][1];
           }
           
       }
        v.push_back({a1,a2});
        return v;
    }
    return mergedIntervals;
  }
}
;

int main(int argc, char *argv[]) {
  vector<Interval> input = {{1, 3}, {5, 7}, {8, 12}};
  cout << "Intervals after inserting the new interval: ";
  for (auto interval : InsertInterval::insert(input, {4, 6})) {
    cout << "[" << interval.start << "," << interval.end << "] ";
  }
  cout << endl;

  cout << "Intervals after inserting the new interval: ";
  for (auto interval : InsertInterval::insert(input, {4, 10})) {
    cout << "[" << interval.start << "," << interval.end << "] ";
  }
  cout << endl;

  input = {{2, 3}, {5, 7}};
  cout << "Intervals after inserting the new interval: ";
  for (auto interval : InsertInterval::insert(input, {1, 4})) {
    cout << "[" << interval.start << "," << interval.end << "] ";
  }
  cout << endl;
}