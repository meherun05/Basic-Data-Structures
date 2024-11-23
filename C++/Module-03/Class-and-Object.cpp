#include<bits/stdc++.h>

using namespace std;
class Student {
    public :
    int roll;
    char name[100];
    double gpa;
};
int main(){
    Student student,b;
//     student.roll = 1;
//     student.gpa = 4.97;
//    // student.name = "Shahin Mia"; // this line is occure an error becauce we can set name like this into 
//     char temp[100] = "Shahin Mia";
//     strcpy(student.name,temp);

    cin.getline(student.name,100);
    cin >> student.roll >> student.gpa;
    cin.ignore(); // for ignore next line 
    cin.getline(b.name,100);
    cin >> b.roll >> b.gpa;
    cout << student.roll << " "<< student.name << " " << student.gpa << endl ;
    cout << b.roll << " "<< b.name << " " << b.gpa ;
    return 0;
}