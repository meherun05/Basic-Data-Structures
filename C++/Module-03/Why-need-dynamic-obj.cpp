 #include <bits/stdc++.h>

using namespace std;
class Student{
    public :
    int roll;
    int cls;

    Student(int roll,int cls){
        this->roll = roll; 
        this->cls = cls;
    }
};

Student* fun(){
     Student a(1,10);
     Student *p = &a;
     return p;
}
int main(){
   
    Student* a = fun();
    cout << a->roll << " " << a->cls; // this return garbage value because after return the address of student obj that is a stack memory location it deleting the funtions

    return 0;
}