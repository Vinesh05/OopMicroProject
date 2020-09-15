#include <iostream>
using namespace std;

class Person
{
public:
     string name;
     int age;
};

class Student : public Person
{
public:
     int id, roll_no;
     string class_teacher;
     const static int fees = 72000;

     Student() {}
};

class Sem1Student : private Student
{
     string subjects[6] = {"ENG", "BMS", "BSC", "WPC", "ICT", "EGE"};
     int marks[6];

public:
     void input()
     {
          cout << "\n\n###############################";
          cout << "\nEnter details for student: ";
          cout << "\nId: ";
          cin >> id;
          cout << "Roll No: ";
          cin >> roll_no;
          cout << "Name: ";
          cin >> name;
          cout << "Age: ";
          cin >> age;
          cout << "Class Teacher: ";
          cin >> class_teacher;

          cout << "\nEnter the Marks: ";
          cout << "\nEnglish: ";
          cin >> marks[0];
          cout << "Basic Maths: ";
          cin >> marks[1];
          cout << "Basic Science: ";
          cin >> marks[2];
          cout << "WorkShop practice: ";
          cin >> marks[3];
          cout << "Information Communication Technology: ";
          cin >> marks[4];
          cout << "Engineering Graphics: ";
          cin >> marks[5];
          cout << "###############################";
     }
     void display()
     {
          cout << "\n\n###############################";
          cout << "\nDetails: ";
          cout << "\nId: " << id;
          cout << "\nRoll No: " << roll_no;
          cout << "\nName: " << name;
          cout << "\nAge: " << age;
          cout << "\nClass Teacher: " << class_teacher;
          cout << "\nFees: Rs." << fees;

          cout << "\nSubject\t\tMarks";
          cout << "\n"
               << subjects[0] << "\t\t" << marks[0];
          cout << "\n"
               << subjects[1] << "\t\t" << marks[1];
          cout << "\n"
               << subjects[2] << "\t\t" << marks[2];
          cout << "\n"
               << subjects[3] << "\t\t" << marks[3];
          cout << "\n"
               << subjects[4] << "\t\t" << marks[4];
          cout << "\n"
               << subjects[5] << "\t\t" << marks[5];
          cout << "\n###############################";
     }
};

class Sem2Student : public Student
{
     string subjects[7] = {"EEC", "AMI", "BEC", "PCI", "BCC", "CPH", "WPD"};
     int marks[7];

public:
     void input()
     {
          cout << "\n\n###############################";
          cout << "\nEnter details for student: ";
          cout << "\nId: ";
          cin >> id;
          cout << "Roll No: ";
          cin >> roll_no;
          cout << "Name: ";
          cin >> name;
          cout << "Age: ";
          cin >> age;
          cout << "Class Teacher: ";
          cin >> class_teacher;

          cout << "\nEnter the Marks: ";
          cout << "\nElements of Electrical: ";
          cin >> marks[0];
          cout << "Applied Mathematics: ";
          cin >> marks[1];
          cout << "Basic Electronics: ";
          cin >> marks[2];
          cout << "Programming in C: ";
          cin >> marks[3];
          cout << "Business Communication: ";
          cin >> marks[4];
          cout << "Computer Peripheral: ";
          cin >> marks[5];
          cout << "WebPage Designing: ";
          cin >> marks[6];
          cout << "###############################";
     }
     void display()
     {
          cout << "\n\n###############################";
          cout << "\nDetails: ";
          cout << "\nId: " << id;
          cout << "\nRoll No: " << roll_no;
          cout << "\nName: " << name;
          cout << "\nAge: " << age;
          cout << "\nClass Teacher: " << class_teacher;
          cout << "\nFees: Rs." << fees;

          cout << "\nSubject\t\tMarks";
          cout << "\n"
               << subjects[0] << "\t\t" << marks[0];
          cout << "\n"
               << subjects[1] << "\t\t" << marks[1];
          cout << "\n"
               << subjects[2] << "\t\t" << marks[2];
          cout << "\n"
               << subjects[3] << "\t\t" << marks[3];
          cout << "\n"
               << subjects[4] << "\t\t" << marks[4];
          cout << "\n"
               << subjects[5] << "\t\t" << marks[5];
          cout << "\n"
               << subjects[6] << "\t\t" << marks[6];
          cout << "\n###############################";
     }
};

class Sem3Student : public Student
{
     string subjects[5] = {"OOP", "DSU", "CGR", "DMS", "DTE"};
     int marks[5];

public:
     void input()
     {
          cout << "\n\n###############################";
          cout << "\nEnter details for student: ";
          cout << "\nId: ";
          cin >> id;
          cout << "Roll No: ";
          cin >> roll_no;
          cout << "Name: ";
          cin >> name;
          cout << "Age: ";
          cin >> age;
          cout << "Class Teacher: ";
          cin >> class_teacher;

          cout << "\nEnter the Marks: ";
          cout << "\nObject Oriented Programming: ";
          cin >> marks[0];
          cout << "Data Structures: ";
          cin >> marks[1];
          cout << "Computer Graphics: ";
          cin >> marks[2];
          cout << "DataBase Management: ";
          cin >> marks[3];
          cout << "Digital Techniques: ";
          cin >> marks[4];
          cout << "###############################";
     }
     void display()
     {
          cout << "\n\n###############################";
          cout << "\nDetails: ";
          cout << "\nId: " << id;
          cout << "\nRoll No: " << roll_no;
          cout << "\nName: " << name;
          cout << "\nAge: " << age;
          cout << "\nClass Teacher: " << class_teacher;
          cout << "\nFees: Rs." << fees;

          cout << "\nSubject\t\tMarks";
          cout << "\n"
               << subjects[0] << "\t\t" << marks[0];
          cout << "\n"
               << subjects[1] << "\t\t" << marks[1];
          cout << "\n"
               << subjects[2] << "\t\t" << marks[2];
          cout << "\n"
               << subjects[3] << "\t\t" << marks[3];
          cout << "\n"
               << subjects[4] << "\t\t" << marks[4];
          cout << "\n###############################";
     }
};

class Sem4Student : public Student
{
     string subjects[5] = {"JPR", "SEN", "DCC", "MIC", "GAD"};
     int marks[5];

public:
     void input()
     {
          cout << "\n\n###############################";
          cout << "\nEnter details for student: ";
          cout << "\nId: ";
          cin >> id;
          cout << "Roll No: ";
          cin >> roll_no;
          cout << "Name: ";
          cin >> name;
          cout << "Age: ";
          cin >> age;
          cout << "Class Teacher: ";
          cin >> class_teacher;

          cout << "\nEnter the Marks: ";
          cout << "\nJava Programming: ";
          cin >> marks[0];
          cout << "Software Engineering: ";
          cin >> marks[1];
          cout << "Data Communication and Computer Network: ";
          cin >> marks[2];
          cout << "Microprocessors: ";
          cin >> marks[3];
          cout << "GUI Application development using VB.net: ";
          cin >> marks[4];
          cout << "###############################";
     }
     void display()
     {
          cout << "\n\n###############################";
          cout << "\nDetails: ";
          cout << "\nId: " << id;
          cout << "\nRoll No: " << roll_no;
          cout << "\nName: " << name;
          cout << "\nAge: " << age;
          cout << "\nClass Teacher: " << class_teacher;
          cout << "\nFees: Rs." << fees;

          cout << "\nSubject\t\tMarks";
          cout << "\n"
               << subjects[0] << "\t\t" << marks[0];
          cout << "\n"
               << subjects[1] << "\t\t" << marks[1];
          cout << "\n"
               << subjects[2] << "\t\t" << marks[2];
          cout << "\n"
               << subjects[3] << "\t\t" << marks[3];
          cout << "\n"
               << subjects[4] << "\t\t" << marks[4];
          cout << "\n###############################";
     }
};

class Sem5Student : public Student
{
     string subjects[7] = {"EST", "OSY", "AJP", "STE", "ADM", "ITR", "CPP"};
     int marks[7];

public:
     void input()
     {
          cout << "\n\n###############################";
          cout << "\nEnter details for student: ";
          cout << "\nId: ";
          cin >> id;
          cout << "Roll No: ";
          cin >> roll_no;
          cout << "Name: ";
          cin >> name;
          cout << "Age: ";
          cin >> age;
          cout << "Class Teacher: ";
          cin >> class_teacher;

          cout << "\nEnter the Marks: ";
          cout << "\nEnvironmental Studies: ";
          cin >> marks[0];
          cout << "Operating Systems: ";
          cin >> marks[1];
          cout << "Advanced Java Programming: ";
          cin >> marks[2];
          cout << "Software Testing: ";
          cin >> marks[3];
          cout << "Advanced Database Managemnent";
          cin >> marks[4];
          cout << "Industrial Testing: ";
          cin >> marks[5];
          cout << "Capstone Project Planning: ";
          cin >> marks[6];
          cout << "###############################";
     }
     void display()
     {
          cout << "\n\n###############################";
          cout << "\nDetails: ";
          cout << "\nId: " << id;
          cout << "\nRoll No: " << roll_no;
          cout << "\nName: " << name;
          cout << "\nAge: " << age;
          cout << "\nClass Teacher: " << class_teacher;
          cout << "\nFees: Rs." << fees;

          cout << "\nSubject\t\tMarks";
          cout << "\n"
               << subjects[0] << "\t\t" << marks[0];
          cout << "\n"
               << subjects[1] << "\t\t" << marks[1];
          cout << "\n"
               << subjects[2] << "\t\t" << marks[2];
          cout << "\n"
               << subjects[3] << "\t\t" << marks[3];
          cout << "\n"
               << subjects[4] << "\t\t" << marks[4];
          cout << "\n"
               << subjects[5] << "\t\t" << marks[5];
          cout << "\n"
               << subjects[6] << "\t\t" << marks[6];
          cout << "\n###############################";
     }
};

class Sem6Student : public Student
{
     string subjects[7] = {"MGT", "PWP", "MAD", "ETI", "WBP", "EDE", "CPE"};
     int marks[7];

public:
     void input()
     {
          cout << "\n\n###############################";
          cout << "\nEnter details for student: ";
          cout << "\nId: ";
          cin >> id;
          cout << "Roll No: ";
          cin >> roll_no;
          cout << "Name: ";
          cin >> name;
          cout << "Age: ";
          cin >> age;
          cout << "Class Teacher: ";
          cin >> class_teacher;

          cout << "\nEnter the Marks: ";
          cout << "\nManagement: ";
          cin >> marks[0];
          cout << "Programming with Python: ";
          cin >> marks[1];
          cout << "Mobile Application Development: ";
          cin >> marks[2];
          cout << "Emerging Trends in Computer and IT: ";
          cin >> marks[3];
          cout << "Web Based Development using PHP: ";
          cin >> marks[4];
          cout << "Enterpreneurship Development: ";
          cin >> marks[5];
          cout << "Capstone Project: ";
          cin >> marks[6];
          cout << "###############################";
     }
     void display()
     {
          cout << "\n\n###############################";
          cout << "\nDetails: ";
          cout << "\nId: " << id;
          cout << "\nRoll No: " << roll_no;
          cout << "\nName: " << name;
          cout << "\nAge: " << age;
          cout << "\nClass Teacher: " << class_teacher;
          cout << "\nFees: Rs." << fees;

          cout << "\nSubject\t\tMarks";
          cout << "\n"
               << subjects[0] << "\t\t" << marks[0];
          cout << "\n"
               << subjects[1] << "\t\t" << marks[1];
          cout << "\n"
               << subjects[2] << "\t\t" << marks[2];
          cout << "\n"
               << subjects[3] << "\t\t" << marks[3];
          cout << "\n"
               << subjects[4] << "\t\t" << marks[4];
          cout << "\n"
               << subjects[5] << "\t\t" << marks[5];
          cout << "\n###############################";
     }
};

class Staff
{
public:
     int id, salary;
};

class Teacher : public Person, Staff
{
     string class_teacher_of, subjects[3];

public:
     Teacher() {}

     void input()
     {
          int nofsub;
          cout << "\n###############################";
          cout << "\nDetails of Teacher: ";
          cout << "\nId: ";
          cin >> id;
          cout << "Name: ";
          cin >> name;
          cout << "Age: ";
          cin >> age;
          cout << "Salary: ";
          cin >> salary;
          cout << "Class Teacher of: ";
          cin >> class_teacher_of;
          cout << "Enter number of subjects between 1 to 3: ";
          cin >> nofsub;
          if (nofsub == 1)
          {
               cout << "Enter 1st Subject: ";
               cin >> subjects[0];
               subjects[1] = " ";
               subjects[2] = " ";
               cout << "###############################";
          }
          else if (nofsub == 2)
          {
               cout << "Enter 1st Subject: ";
               cin >> subjects[0];
               cout << "Enter 2nd Subject: ";
               cin >> subjects[1];
               subjects[2] = " ";
               cout << "###############################";
          }
          else if (nofsub = 3)
          {
               cout << "Enter 1st Subject: ";
               cin >> subjects[0];
               cout << "Enter 2nd Subject: ";
               cin >> subjects[1];
               cout << "Enter 3rd Subject: ";
               cin >> subjects[2];
               cout << "###############################";
          }
          else
          {
               cout << "\nEnter Valid Number of Subjects";
               input();
          }
     }
     friend void dispTeacher(Teacher);
};

void dispTeacher(Teacher t)
{
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

int main()
{
     
     
     return 0;
}