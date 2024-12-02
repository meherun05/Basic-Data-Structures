#include <bits/stdc++.h>
using namespace std;

class Student{
  public:
  string nm;
  int cls;
  char s;
  int id;
  int math_marks,eng_marks;
};
bool cmp(Student l , Student r){
  long long totalMarksL = l.math_marks + l.eng_marks;
  long long totalMarksR = r.math_marks + r.eng_marks;
  return totalMarksL == totalMarksR ? l.id < r.id : totalMarksL > totalMarksR;
  
}
int main() 
{
  int n;
  cin >> n;
  Student a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id >> a[i].math_marks >> a[i].eng_marks;
  }
  sort(a,a+n,cmp);
  for (int i = 0; i < n; i++) {
    cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " " << a[i].math_marks << " " << a[i].eng_marks << endl;
  }
  
    return 0;
}