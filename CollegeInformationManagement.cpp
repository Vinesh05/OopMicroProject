#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
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
     static int fees;
};
int Student::fees=72000;
class Sem1Student : public Student{
     string subjects[6] = {"ENG", "BMS", "BSC", "WPC", "ICT", "EGE"};
     int marks[6];
public:
     void input(){
          fflush(stdin);
          cout << "\n\n###############################";
          cout << "\nEnter details for student: ";
          cout << "\nId, Roll No, Name, Age, Class Teacher: ";
          cin >> id >> roll_no >> name >> age >> class_teacher;
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
          cin >> id >> roll_no >> name >> age >> class_teacher;
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
          cin >> id >> roll_no >> name >> age >> class_teacher;
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
          cin >> id >> roll_no >> name >> age >> class_teacher;
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
          cin >> id >> roll_no >> name >> age >> class_teacher;
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
          cin >> id >> roll_no >> name >> age >> class_teacher;
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
class Teacher : public Person,public Staff{
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
     Principal *p,*q = new Principal(" ");
     programStarted();
     while (1){
          int choice,choice_id,choice_sem,i;
          ofstream logFile("log.txt",ios::app);
          logFile.flush();
          cout << "\n1.Add Student \n2.Add Teacher \n3.Add Principal";
          cout << "\n4.Display Student \n5.Display Teacher \n6.Display Principal";
          cout << "\n7.Delete Principal \n8.Change Fees \n9.Exit" << endl;
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
                         logFile<<"Sem 1 Student added"<<endl;
                         logFile.close();
                         cout<<"Sem 1 Student added";
                    }
                    else{
                         cout << "\nMax Number of Student reached for Sem1"<<"\a";
                    }
                    break;
               case 2:
                    if (sem2 < MAX){
                         s2[sem2].input();
                         sem2++;
                         logFile<<"Sem 2 Student added"<<endl;
                         logFile.close();
                         cout<<"Sem 2 Student added";
                    }
                    else{
                         cout << "\nMax Number of Student reached for Sem2"<<"\a";
                    }
                    break;
               case 3:
                    if (sem3 < MAX){
                         s3[sem3].input();
                         sem3++;
                         logFile<<"Sem 3 Student added"<<endl;
                         logFile.close();
                         cout<<"Sem 3 Student added";
                    }
                    else{
                         cout << "\nMax Number of Student reached for Sem3"<<"\a";
                    }
                    break;
               case 4:
                    if (sem4 < MAX){
                         s4[sem4].input();
                         sem4++;
                         logFile<<"Sem 4 Student added"<<endl;
                         logFile.close();
                         cout<<"Sem 4 Student added";
                    }
                    else{
                         cout << "\nMax Number of Student reached for Sem4"<<"\a";
                    }
                    break;
               case 5:
                    if (sem5 < MAX){
                         s5[sem5].input();
                         sem5++;
                         logFile<<"Sem 5 Student added"<<endl;
                         logFile.close();
                         cout<<"Sem 5 Student added";
                    }
                    else{
                         cout << "\nMax Number of Student reached for Sem5"<<"\a";
                    }
                    break;
               case 6:
                    if (sem6 < MAX){
                         s6[sem6].input();
                         sem6++;
                         logFile<<"Sem 6 Student added"<<endl;
                         logFile.close();
                         cout<<"Sem 6 Student added";
                    }
                    else{
                         cout << "\nMax Number of Student reached for Sem6"<<"\a";
                    }
                    break;
               default:
                    cout << "\nInvalid Number";
                    break;
               }
               Sleep(2000);
               system("CLS");
               break;
          case 2:
               if (teacher < MAX){
                    inputTeacher(t[teacher]);
                    teacher++;
                    logFile<<"Teacher added"<<endl;
                    logFile.close();
                    cout<<"\nTeacher added";
               }
               else{
                    cout << "\nMax Number of Teachers Reached"<<"\a";
               }
               Sleep(2000);
               system("CLS");
               break;
          case 3:
               if (principal == 0){
                    int att, age, psy;
                    string name;
                    cout << "\nSelect the attributes for Principal";
                    cout << "\n1.Name \n2.Name, Age, Principal Since Year: \n";
                    cin >> att;
                    if (att == 1){
                         cout << "\nEnter the Name of Principal: ";
                         cin >> name;
                         new (q) Principal(name);
                         memcpy(&p, &q, sizeof q);
                         principal++;
                         logFile<<"Principal added"<<endl;
                         logFile.close();
                         cout<<"\nPrincipal added";
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
                         logFile<<"Principal added"<<endl;
                         logFile.close();
                         cout<<"\nPrincipal added";
                    }
                    else{
                         cout << "Invalid Number"<<"\a";
                    }
               }
               else{
                    cout << "One Principal already exists"<<"\a";
               }
               Sleep(2000);
               system("CLS");
               break;
          case 4:
               cout<<"Enter the sem and id of Student: ";
               cin>>choice_sem>>choice_id;
               switch(choice_sem){
                    case 1:
                         for(i=0;i<MAX;i++){
                              if(choice_id==s1[i].id){
                                   s1[i].display();
                                   logFile<<"Student Dispalyed of Sem 1 and Id:"<<choice_id<<endl;
                                   logFile.close();
                                   break;
                              }
                         }
                         break;
                    case 2:
                         for(i=0;i<MAX;i++){
                              if(choice_id==s2[i].id){
                                   s2[i].display();
                                   logFile<<"Student Dispalyed of Sem 2 and Id:"<<choice_id<<endl;
                                   logFile.close();
                                   break;
                              }
                         }
                         break;
                    case 3:
                         for(i=0;i<MAX;i++){
                              if(choice_id==s3[i].id){
                                   s3[i].display();
                                   logFile<<"Student Dispalyed of Sem 3 and Id:"<<choice_id<<endl;
                                   logFile.close();
                                   break;
                              }
                         }
                         break;
                    case 4:
                         for(i=0;i<MAX;i++){
                              if(choice_id==s4[i].id){
                                   s4[i].display();
                                   logFile<<"Student Dispalyed of Sem 4 and Id:"<<choice_id<<endl;
                                   logFile.close();
                                   break;
                              }
                         }
                         break;
                    case 5:
                         for(i=0;i<MAX;i++){
                              if(choice_id==s5[i].id){
                                   s5[i].display();
                                   logFile<<"Student Dispalyed of Sem 5 and Id:"<<choice_id<<endl;
                                   logFile.close();
                                   break;
                              }
                         }
                         break;
                    case 6:
                         for(i=0;i<MAX;i++){
                              if(choice_id==s6[i].id){
                                   s6[i].display();
                                   logFile<<"Student Dispalyed of Sem 6 and Id:"<<choice_id<<endl;
                                   logFile.close();
                                   break;
                              }
                         }
                         break;
                    default:
                         cout<<"Invalid Semester"<<"\a";
                         break;
               }
               if(i==MAX){
                    cout<<"No Student found having id "<<choice_id<<"\a";
               }
               Sleep(5000);
               system("CLS");
               break;
          case 5:
               cout<<"\nEnter the id of Teacher";
               cin>>choice_id;
               for(i=0;i<MAX;i++){
                    if(choice_id==t[i].id){
                         dispTeacher(t[i]);
                         logFile<<"Teacher Displayed with id:"<<choice_id<<endl;
                         logFile.close();
                         cout<<"\nTeacher Displayed with id:"<<choice_id;
                    }
               }
               if(i==MAX){
                    cout<<"\nNo Teacher found having id: "<<choice_id<<"\a";
               }
               Sleep(2000);
               system("CLS");
               break;
          case 6:
               if (principal != 0){
                    p->display();
                    logFile<<"Principal Displayed: "<<endl;
                    logFile.close();
               }
               else{
                    cout << "\nNo pricipal Exists"<<"\a";
               }
               Sleep(2000);
               system("CLS");
               break;
          case 7:
               if(principal!=0){
                    p->~Principal();
                    principal--;
               }
               else{
                    cout<<"\nNo principal Exists"<<"\a";
               }
               Sleep(2000);
               system("CLS");
               break;
          case 8:
               Student *ptr;
               ptr = &s1[0];
               int new_fees;
               cout<<"\nEnter new Fees: ";
               cin>>new_fees;
               ptr->fees=new_fees;
               logFile<<"Fees Changed"<<endl;
               logFile.close();
               cout<<"\nFees Changed to "<<new_fees<<endl;
               Sleep(2000);
               system("CLS");
               break;
          case 9:
               logFile<<"Program Ended"<<endl;
               logFile.close();
               exit(0);
               system("CLS");
               break;
          default:
               cout << "\nEnter Valid Number"<<"\a";
               Sleep(2000);
               system("CLS");
               break;
          }
     }
     return 0;
}