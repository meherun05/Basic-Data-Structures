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

Student fun(){
     Student a(1,10);
     return a;
}
int main(){
   
    Student a = fun();
    cout << a.roll << " " << a.cls;

    return 0;
}