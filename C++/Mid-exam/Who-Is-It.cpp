#include <iostream>
#include <string>
using namespace std;
class Student {
public:
    int id;
    string name;
    char section;
    int marks;

    Student(int id, string name, char section, int marks) {
        this->id = id;
        this->name = name;
        this->section = section;
        this->marks = marks;
    }

};

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int sakib_id,rakib_id,akib_id;
        string sakib_name,rakib_name,akib_name;
        char sakib_section,rakib_section,akib_section;
        int sakib_marks,rakib_marks,akib_marks;

        cin >> sakib_id >> sakib_name >> sakib_section >> sakib_marks;
        cin >> rakib_id >> rakib_name >> rakib_section >> rakib_marks;
        cin >> akib_id >> akib_name >> akib_section >> akib_marks;

        Student sakib(sakib_id,sakib_name,sakib_section,sakib_marks);
        Student rakib(rakib_id,rakib_name,rakib_section,rakib_marks);
        Student akib(akib_id,akib_name,akib_section,akib_marks);

        Student hightest = sakib;

        if(rakib.marks > hightest.marks || (rakib.marks == hightest.marks && rakib.id < hightest.id)){
            hightest = rakib;
        }

        if(akib.marks > hightest.marks || (akib.marks == hightest.marks && akib.id < hightest.id)){
            hightest = akib;
        }
       cout << hightest.id << " " << hightest.name << " " << hightest.section << " " << hightest.marks << endl;
    }

    return 0;
}
