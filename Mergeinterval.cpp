#include<iostream>
#include<algorithm>
using namespace std;
class interval{
   public:
      int left, right;
};
void findIntersection(interval intervals[], int N) {
   int l = intervals[0].left;
   int r = intervals[0].right;
   for (int i = 1; i < N; i++) {
      if (intervals[i].left > r || intervals[i].right < l) {
         cout << -1;
         return;
      } else {
         l = max(l, intervals[i].left);
         r = min(r, intervals[i].right);
      }
   }
   cout << "{" << l << ", " << r << "}";
}
int main() {
   interval intervals[] = {{ 1, 6 }, { 2, 8 }, { 3, 10 }, { 5, 8 } };
   int N = sizeof(intervals) / sizeof(intervals[0]);
   findIntersection(intervals, N);
}
