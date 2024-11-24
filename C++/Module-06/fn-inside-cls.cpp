 #include <bits/stdc++.h>

using namespace std;
class Student {
    public :
        string name;
        int roll;
        double gpa;

        Student(string name,int roll,double gpa){
            this->name = name;
            this->roll = roll;
            this->gpa = gpa;
        }
        void info(){
            cout << roll << ". " << name << " " << "got GPA: " << gpa << endl;
        }
};
int main(){
    Student shahin("Shahin Mia",1,4.98);
    shahin.info();
    Student meherun("Meherun Akter",2,4.63);
    meherun.info();

    return 0;
}