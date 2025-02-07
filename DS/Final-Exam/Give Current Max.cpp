 #include <bits/stdc++.h>

using namespace std;
class Student{
    public:
    string name;
    int roll;
    int marks;
    Student(string name, int roll, int marks){
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class cmp{
    public :
    bool operator()(Student l, Student r){
         if(l.marks < r.marks){
            return true;
        }else if( l.marks > r.marks){
            return false;
        }else{
            return l.roll > r.roll;
        }
    }
};

int main(){
    int n;
    cin >> n;
    priority_queue<Student,vector<Student>,cmp> p;
    while(n--){
        string name; int roll,marks;
        cin >> name >> roll >> marks;
        Student obj(name,roll,marks);
        p.push(obj);
    }
    int q;
    cin >>  q;
    while (q--)
    {
       int x;
       cin >> x;
       if(x == 0){
            string n; int r,m;
            cin >> n >> r >> m;
            Student obj(n,r,m);
            p.push(obj);
            cout << p.top().name << " " << p.top().roll << " " << p.top().marks << endl;
       }else if(x == 1){
            if(!p.empty()){
                cout << p.top().name << " " << p.top().roll << " " << p.top().marks << endl;
            }else{
                cout << "Empty" << endl;
            }
       }else if(x == 2){
            if(!p.empty()){
                p.pop();
               if(!p.empty()){
                cout << p.top().name << " " << p.top().roll << " " << p.top().marks << endl;
                }else{
                    cout << "Empty" << endl;
                }
            }else{
                cout << "Empty" << endl;
            }
       }
    }
    
    return 0;
}