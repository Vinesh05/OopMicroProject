#include <iostream>
#include <stdio.h>
using namespace std;
#define MAX 100

class Person{
public:
     string name;
     int age;
};
class Student : public Person{
public:
     int id, roll_no;
     string class_teacher;
     const static int fees = 72000;
};
class Sem1Student : private Student{
     string subjects[6] = {"ENG", "BMS", "BSC", "WPC", "ICT", "EGE"};
     int marks[6];
public:
     void input(){
          fflush(stdin);
          cout << "\n\n###############################";
          cout << "\nEnter details for student: ";
          cout << "\nId, Roll No, Name, Age, Class Teacher: ";
          cin >> id >> roll_no >> name >> age;
          cout << "\nEnter the Marks: ";
          cout << "\nEnglish, BasicMaths, Basic Science, Workshop practice, Information Communication technology, Engineering Graphics: ";
          cin >> marks[0] >> marks[1] >> marks[2] >> marks[3] >> marks[4] >> marks[5];
          cout << "###############################";
     }
     void display(){
          cout << "\n\n###############################";
          cout << "\nDetails: ";
          cout << "\nId: " << id;
          cout << "\nRoll No: " << roll_no;
          cout << "\nName: " << name;
          cout << "\nAge: " << age;
          cout << "\nClass Teacher: " << class_teacher;
          cout << "\nFees: Rs." << fees;
          cout << "\nSubject\t\tMarks";
          cout << "\n"<< subjects[0] << "\t\t" << marks[0];
          cout << "\n"<< subjects[1] << "\t\t" << marks[1];
          cout << "\n"<< subjects[2] << "\t\t" << marks[2];
          cout << "\n"<< subjects[3] << "\t\t" << marks[3];
          cout << "\n"<< subjects[4] << "\t\t" << marks[4];
          cout << "\n"<< subjects[5] << "\t\t" << marks[5];
          cout << "\n###############################";
     }
};
class Sem2Student : public Student{
     string subjects[7] = {"EEC", "AMI", "BEC", "PCI", "BCC", "CPH", "WPD"};
     int marks[7];
public:
     void input(){
          fflush(stdin);
          cout << "\n\n###############################";
          cout << "\nEnter details for student: ";
          cout << "\nId, Roll No, Name, Age, Class Teacher: ";
          cin >> id >> roll_no >> name >> age;
          cout << "\nEnter the Marks: ";
          cout << "\nElements of Electrical, Mathematics, Basic Electronics, Programming in C, Business Communication, Computer Perpherals, WebPage Designing: ";
          cin >> marks[0] >> marks[1] >> marks[2] >> marks[3] >> marks[4] >> marks[5] >> marks[6];
          cout << "###############################";
     }
     void display(){
          cout << "\n\n###############################";
          cout << "\nDetails: ";
          cout << "\nId: " << id;
          cout << "\nRoll No: " << roll_no;
          cout << "\nName: " << name;
          cout << "\nAge: " << age;
          cout << "\nClass Teacher: " << class_teacher;
          cout << "\nFees: Rs." << fees;
          cout << "\nSubject\t\tMarks";
          cout << "\n"<< subjects[0] << "\t\t" << marks[0];
          cout << "\n"<< subjects[1] << "\t\t" << marks[1];
          cout << "\n"<< subjects[2] << "\t\t" << marks[2];
          cout << "\n"<< subjects[3] << "\t\t" << marks[3];
          cout << "\n"<< subjects[4] << "\t\t" << marks[4];
          cout << "\n"<< subjects[5] << "\t\t" << marks[5];
          cout << "\n"<< subjects[6] << "\t\t" << marks[6];
          cout << "\n###############################";
     }
};
class Sem3Student : public Student{
     string subjects[5] = {"OOP", "DSU", "CGR", "DMS", "DTE"};
     int marks[5];
public:
     void input(){
          fflush(stdin);
          cout << "\n\n###############################";
          cout << "\nEnter details for student: ";
          cout << "\nId, Roll No, Name, Age, Class Teacher: ";
          cin >> id >> roll_no >> name >> age;
          cout << "\nEnter the Marks: ";
          cout << "\nObject Oriented Programming, Data Structures, Computer Graphics, DataBase Management, Digital Techniques: ";
          cin >> marks[0] >> marks[1] >> marks[2] >> marks[3] >> marks[4];
          cout << "###############################";
     }
     void display(){
          cout << "\n\n###############################";
          cout << "\nDetails: ";
          cout << "\nId: " << id;
          cout << "\nRoll No: " << roll_no;
          cout << "\nName: " << name;
          cout << "\nAge: " << age;
          cout << "\nClass Teacher: " << class_teacher;
          cout << "\nFees: Rs." << fees;
          cout << "\nSubject\t\tMarks";
          cout << "\n"<< subjects[0] << "\t\t" << marks[0];
          cout << "\n"<< subjects[1] << "\t\t" << marks[1];
          cout << "\n"<< subjects[2] << "\t\t" << marks[2];
          cout << "\n"<< subjects[3] << "\t\t" << marks[3];
          cout << "\n"<< subjects[4] << "\t\t" << marks[4];
          cout << "\n###############################";
     }
};
class Sem4Student : public Student{
     string subjects[5] = {"JPR", "SEN", "DCC", "MIC", "GAD"};
     int marks[5];
public:
     void input(){
          fflush(stdin);
          cout << "\n\n###############################";
          cout << "\nEnter details for student: ";
          cout << "\nId, Roll No, Name, Age, Class Teacher: ";
          cin >> id >> roll_no >> name >> age;
          cout << "\nEnter the Marks: ";
          cout << "\nJava Programming, Software Engineering, Data Communication and Computer Network, Microprocessors, GUI Application development using VB.net: ";
          cin >> marks[0] >> marks[1] >> marks[2] >> marks[3] >> marks[4];
          cout << "###############################";
     }
     void display(){
          cout << "\n\n###############################";
          cout << "\nDetails: ";
          cout << "\nId: " << id;
          cout << "\nRoll No: " << roll_no;
          cout << "\nName: " << name;
          cout << "\nAge: " << age;
          cout << "\nClass Teacher: " << class_teacher;
          cout << "\nFees: Rs." << fees;
          cout << "\nSubject\t\tMarks";
          cout << "\n"<< subjects[0] << "\t\t" << marks[0];
          cout << "\n"<< subjects[1] << "\t\t" << marks[1];
          cout << "\n"<< subjects[2] << "\t\t" << marks[2];
          cout << "\n"<< subjects[3] << "\t\t" << marks[3];
          cout << "\n"<< subjects[4] << "\t\t" << marks[4];
          cout << "\n###############################";
     }
};
class Sem5Student : public Student{
     string subjects[7] = {"EST", "OSY", "AJP", "STE", "ADM", "ITR", "CPP"};
     int marks[7];
public:
     void input(){
          fflush(stdin);
          cout << "\n\n###############################";
          cout << "\nEnter details for student: ";
          cout << "\nId, Roll No, Name, Age, Class Teacher: ";
          cin >> id >> roll_no >> name >> age;
          cout << "\nEnter the Marks: ";
          cout << "\nEnvironmental Studies, Operating Systems, Advanced Java Programming, Software Testing, Advanced Database Managemnent, Industrial Testing, Capstone Project Planning: ";
          cin >> marks[0] >> marks[1] >> marks[2] >> marks[3] >> marks[4] >> marks[5] >> marks[6];
          cout << "###############################";
     }
     void display(){
          cout << "\n\n###############################";
          cout << "\nDetails: ";
          cout << "\nId: " << id;
          cout << "\nRoll No: " << roll_no;
          cout << "\nName: " << name;
          cout << "\nAge: " << age;
          cout << "\nClass Teacher: " << class_teacher;
          cout << "\nFees: Rs." << fees;
          cout << "\nSubject\t\tMarks";
          cout << "\n"<< subjects[0] << "\t\t" << marks[0];
          cout << "\n"<< subjects[1] << "\t\t" << marks[1];
          cout << "\n"<< subjects[2] << "\t\t" << marks[2];
          cout << "\n"<< subjects[3] << "\t\t" << marks[3];
          cout << "\n"<< subjects[4] << "\t\t" << marks[4];
          cout << "\n"<< subjects[5] << "\t\t" << marks[5];
          cout << "\n"<< subjects[6] << "\t\t" << marks[6];
          cout << "\n###############################";
     }
};
class Sem6Student : public Student{
     string subjects[7] = {"MGT", "PWP", "MAD", "ETI", "WBP", "EDE", "CPE"};
     int marks[7];
public:
     void input(){
          fflush(stdin);
          cout << "\n\n###############################";
          cout << "\nEnter details for student: ";
          cout << "\nId, Roll No, Name, Age, Class Teacher: ";
          cin >> id >> roll_no >> name >> age;
          cout << "\nEnter the Marks, Programming with Python, Mobile Application Development, Emerging Trends in Computer and IT, Web Based Development using PHP, Enterpreneurship Development, Capstone Project: ";
          cout << "\nManagement: ";
          cin >> marks[0] >> marks[1] >> marks[2] >> marks[3] >> marks[4] >> marks[5] >> marks[6];
          cout << "###############################";
     }
     void display(){
          cout << "\n\n###############################";
          cout << "\nDetails: ";
          cout << "\nId: " << id;
          cout << "\nRoll No: " << roll_no;
          cout << "\nName: " << name;
          cout << "\nAge: " << age;
          cout << "\nClass Teacher: " << class_teacher;
          cout << "\nFees: Rs." << fees;
          cout << "\nSubject\t\tMarks";
          cout << "\n"<< subjects[0] << "\t\t" << marks[0];
          cout << "\n"<< subjects[1] << "\t\t" << marks[1];
          cout << "\n"<< subjects[2] << "\t\t" << marks[2];
          cout << "\n"<< subjects[3] << "\t\t" << marks[3];
          cout << "\n"<< subjects[4] << "\t\t" << marks[4];
          cout << "\n"<< subjects[5] << "\t\t" << marks[5];
          cout << "\n###############################";
     }
};
class Staff{
public:
     int id, salary;
};
class Teacher : public Person, Staff{
     string class_teacher_of, subjects[3];
public:
     void input(string subject1, string subject2, string subject3){
          fflush(stdin);
          cout << "\nDetails of Teacher: ";
          cout << "\nId, Name, Age, Salary, Class Teacher of: ";
          cin >> id>> name>> age>> salary>> class_teacher_of;
          subjects[0] = subject1;
          subjects[1] = subject2;
          subjects[2] = subject3;
          cout << "###############################";
     }
     void input(string subject1, string subject2){
          fflush(stdin);
          cout << "\nDetails of Teacher: ";
          cout << "\nId, Name, Age, Salary, Class Teacher of: ";
          cin >> id>> name>> age>> salary>> class_teacher_of;
          subjects[0] = subject1;
          subjects[1] = subject2;
          subjects[2] = " ";
          cout << "###############################";
     }
     void input(string subject1){
          fflush(stdin);
          cout << "\nDetails of Teacher: ";
          cout << "\nId, Name, Age, Salary, Class Teacher of: ";
          cin >> id>> name>> age>> salary>> class_teacher_of;
          subjects[0] = subject1;
          subjects[1] = " ";
          subjects[2] = " ";
          cout << "###############################";
     }
     friend void inputTeacher(Teacher);
     friend void dispTeacher(Teacher);
};
class Principal : public Person{
     int principal_since_year;
public:
     Principal(string n, int a, int p){
          name = n;
          age = a;
          principal_since_year = p;
     }
     Principal(string n){
          name = n;
          age = -1;
          principal_since_year = 2020;
     }
     void display(){
          cout << "\n###############################";
          cout << "\nDetails of Principal: ";
          cout << "\nName: " << name;
          if (age != -1){
               cout << "\nage: " << age;
          }
          cout << "\nWorking Since: " << principal_since_year;
          cout << "\n###############################";
     }
     ~Principal(){
          cout << "\nA college must have atleast 1 Prinicipal";
          cout << "\nAdding new Principal is Recommended ";
     }
};

void dispTeacher(Teacher t){
     cout << "\n###############################";
     cout << "\nDetails of Teacher: ";
     cout << "\nId: " << t.id;
     cout << "\nName: " << t.name;
     cout << "\nAge: " << t.age;
     cout << "\nSalary: " << t.salary;
     cout << "\nClass Teacher of: " << t.class_teacher_of;
     cout << "\nSubjects: " << t.subjects[0] << " " << t.subjects[1] << " " << t.subjects[2];
     cout << "\n###############################";
}
void inputTeacher(Teacher t){
     int nofsub;
     string subject1, subject2, subject3;
     cout << "\n###############################";
     cout << "\nEnter the number of Subjects (1 to 3) the Teacher Teaches : ";
     cin >> nofsub;
     if (nofsub == 1){
          cout << "\nEnter Subject1: ";
          cin >> subject1;
          t.input(subject1);
     }
     else if (nofsub == 2){
          cout << "\nEnter Subject1, Subject2: ";
          cin >> subject1>> subject2;
          t.input(subject1, subject2);
     }
     else if (nofsub == 3){
          cout << "\nEnter Subject1, Subject2, Subject3: ";
          cin >> subject1>> subject2>> subject3;
          t.input(subject1, subject2, subject3);
     }
     else{
          cout << "\nInvalid Number";
     }
}

void displayStudent(){
}
void displayTeacher(){
}

inline void programStarted(){
     cout << "\nPROGRAM STARTED\n";
}

int main(){
     int sem1 = 0, sem2 = 0, sem3 = 0, sem4 = 0, sem5 = 0, sem6 = 0, teacher = 0, principal = 0;
     Sem1Student s1[MAX];
     Sem2Student s2[MAX];
     Sem3Student s3[MAX];
     Sem4Student s4[MAX];
     Sem5Student s5[MAX];
     Sem6Student s6[MAX];
     Teacher t[MAX];
     Principal *p, *q = new Principal(" ");
     programStarted();
     while (1){
          int choice;
          cout << "\n1. Add Student 2.Add Teacher 3.Add Principal";
          cout << "\n4. Display Student 5.Display Techear 6.Display Principal";
          cout << "\n7.Exit" << endl;
          cin >> choice;
          switch (choice){
          case 1:
               int sem;
               cout << "Enter Sem (1-6) of Student: ";
               cin >> sem;
               switch (sem){
               case 1:
                    if (sem1 < MAX){
                         s1[sem1].input();
                         sem1++;
                    }
                    else{
                         cout << "\nMax Number of Student reached for Sem1";
                    }
                    break;
               case 2:
                    if (sem2 < MAX){
                         s2[sem2].input();
                         sem2++;
                    }
                    else{
                         cout << "\nMax Number of Student reached for Sem2";
                    }
                    break;
               case 3:
                    if (sem3 < MAX){
                         s3[sem3].input();
                         sem3++;
                    }
                    else{
                         cout << "\nMax Number of Student reached for Sem3";
                    }
                    break;
               case 4:
                    if (sem4 < MAX){
                         s4[sem4].input();
                         sem4++;
                    }
                    else{
                         cout << "\nMax Number of Student reached for Sem4";
                    }
                    break;
               case 5:
                    if (sem5 < MAX){
                         s5[sem5].input();
                         sem5++;
                    }
                    else{
                         cout << "\nMax Number of Student reached for Sem5";
                    }
                    break;
               case 6:
                    if (sem6 < MAX){
                         s6[sem6].input();
                         sem6++;
                    }
                    else{
                         cout << "\nMax Number of Student reached for Sem6";
                    }
                    break;
               default:
                    cout << "\nInvalid Number";
                    break;
               }
               break;
          case 2:
               if (teacher < MAX){
                    inputTeacher(t[teacher]);
                    teacher++;
               }
               else{
                    cout << "\nMax Number of Teachers Reached";
               }
               break;
          case 3:
               if (principal == 0){
                    int att, age, psy;
                    string name;
                    cout << "\nSelect the attributes for Principal";
                    cout << "\n1.Name 2.Name, Age, Principal Since Year: ";
                    cin >> att;
                    if (att == 1){
                         cout << "\nEnter the Name of Principal: ";
                         cin >> name;
                         new (q) Principal(name);
                         memcpy(&p, &q, sizeof q);
                         principal++;
                    }
                    else if (att == 2){
                         cout << "\nEnter the Name of Principal: ";
                         cin >> name;
                         cout << "\nEnter the Age of Principal: ";
                         cin >> age;
                         cout << "\nEnter the Principal Since Year: ";
                         cin >> psy;
                         new (q) Principal(name, age, psy);
                         memcpy(&p, &q, sizeof q);
                         principal++;
                    }
                    else{
                         cout << "Invalid Number";
                    }
               }
               else{
                    cout << "One Principal already exists";
               }
               break;
          case 4:
               displayStudent();
               break;
          case 5:
               displayTeacher();
               break;
          case 6:
               if (principal != 0){
                    p->display();
               }
               else{
                    cout << "\nNo pricipal Exists";
               }
               break;
          case 7:
               exit(0);
               break;
          default:
               cout << "\nEnter Valid Number";
               break;
          }
     }

     return 0;
}