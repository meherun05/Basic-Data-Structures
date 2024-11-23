 #include <bits/stdc++.h>

using namespace std;
class Student{
    public :
    int roll;
    int cls;

    Student(int roll,int cls){
        this->roll = roll; // (*this).roll = roll;
        this->cls = cls;
    }
};
int main(){
    Student a(1,10);

    cout << a.roll << " " << a.cls;

    return 0;
}