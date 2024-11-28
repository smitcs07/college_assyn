#include <iostream>
using namespace std;

class Time {
public:
    int hour;
    int minutes;
    int second;

    void timeShow() {
        cout << "Enter hours (0-23): ";
        cin >> hour;
        if (hour > 23 || hour < 0) {
            cout << "Enter valid time\n";
            return;
        }

        cout << "Enter minutes (0-59): ";
        cin >> minutes;
        if (minutes > 59 || minutes < 0) {
            cout << "Enter valid time\n";
            return;
        }

        cout << "Enter seconds (0-59): ";
        cin >> second;
        if (second > 59 || second < 0) {
            cout << "Enter valid time\n";
            return;
        }  
    }
  void display();
};
  void Time::display(){
    cout << "The time is: " << hour << ":" << (minutes < 10 ? "0" : "") << minutes << ":" << (second < 10 ? "0" : "") << second << "\n";
        cout << "Total seconds: " << hour * 3600 + minutes * 60 + second << " seconds\n";
  }

int main() {
    Time obj;
    obj.timeShow();
    obj.display();
    return 0;
}


/*
#include <iostream>
using namespace std;

class Employee {
    string name;
    int age;
    double salary;

public:
    Employee(string empName, int empAge, double empSalary) {
        name = empName;
        age = empAge;
        salary = empSalary;
    }

    void setName(string empName) {
        name = empName;
    }

    string getName() {
        return name;
    }

    void setAge(int empAge) {
        if (empAge > 0) {
            age = empAge;
        }
    }

    int getAge() {
        return age;
    }

    void setSalary(double empSalary) {
        if (empSalary > 0) {
            salary = empSalary;
        }
    }

    double getSalary() {
        return salary;
    }

    void displayEmployee() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee emp("Smit", 25, 50000);
    emp.displayEmployee();

    emp.setName("Smit");
    emp.setAge(24);
    emp.setSalary(55000);
    emp.displayEmployee();
    return 0;
}
*/

/*
#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // Setter for name
    void setName(string n) {
        name = n;
    }

    // Getter for name
    string getName() {
        return name;
    }

    // Setter for age
    void setAge(int a) {
        if(a >= 0) {
            age = a;
        } else {
            cout << "Age cannot be negative." << endl;
        }
    }

    // Getter for age
    int getAge() {
        return age;
    }
};

int main() {
    Person p;
    p.setName("Rohan");
    p.setAge(20);

    cout << "Name: " << p.getName() << endl;
    cout << "Age: " << p.getAge() << endl;

    return 0;
}*/
/*
#include <iostream>
using namespace std;

class Add{
  public:
    int data1, data2;

public:
    void setNumber(int a, int b) {
        data1 = a;
        data2 = b;
    }

    int Sum() {
        return data2 + data1;
    }
};

int main() {
    Add add;
    add.setNumber(32, 65);
    cout << "The sum is: " << add.Sum() << endl;
    return 0;
}*/


/*
#include <iostream>
using namespace std;
class Datainp{
public:
    static int count; 
    int data;
public:
    Datainp(){
      data = 10;
    }
    static int getdata() {
        return count;
    }
    void inputdata() {
        cout << "Enter a value: ";
        cin >> data;
        count++;
    }

    void display() const {
        cout << "The value is: " << data << endl;
    }
};

int Datainp::count = 0;
int main() {
    Datainp obj1, obj2;
    obj1.inputdata();
    obj1.display();

    obj2.inputdata();
    obj2.display();
    cout << "Number of inputs: " << Datainp::getdata() << endl;
    return 0;
}*/

/*
#include <iostream>
using namespace std;

class One{
public:
    int data;
public:
    One(int a) {
        data = a;
        cout << "Constructor called: " << endl;
    }

    ~One(){
        cout << "Destructor called " << endl;
    }

    void display() const {
        cout <<"Value: " << data << endl;
    }
};

int main() {
    One obj(7); 
    obj.display(); 
    return 0;
}
*/

/*
#include <iostream>
using namespace std;

class Wall {
public:
    double length;
    double height;

public:
    Wall(double l, double h){
        length = l; 
        height = h;
    }

    double calculateArea() const {
        return length * height;
    }
};

int main() {
    Wall wall(10, 8);

    cout << "Area of the wall: " << wall.calculateArea() << " square units" << endl;

    return 0;
}
*/

/*
#include <iostream>
using namespace std;

class Wall{
public:
    double length;
    double height;

public:
    Wall(double l, double h){
        length = l;
        height = h;
    }

    Wall(Wall &diff){
        length = diff.length;
        height = diff.height;
    } 

    double calculateArea(){
        return length * height;
    }

    void display(){
        cout << "Length: " << length << ", Height: " << height << endl;
    }
};

int main() {

    Wall wall1(8, 7);
    cout << "Original ";
    wall1.display();

    Wall wall2 = wall1;
    cout << "Copied : ";
    wall2.display();

    cout << "Area of the original wall: " << wall1.calculateArea() << " square unit";
    }
    */

/*
#include <iostream>
using namespace std;

class Student{
public:
    string name;
    string enrollmentNumber;
    string contactNumber;

public:
    Student(string a, string b, string c){
        name = a; 
        enrollmentNumber = b;
        contactNumber = c;
    }

    void displayInfo(){
        cout << "Name: " << name << endl;
        cout << "Enrollment Number: " << enrollmentNumber << endl;
        cout << "Contact Number: " << contactNumber << endl;
    }
};

int main() {
    Student person("Smit", "0493435944", "9522330304");

    person.displayInfo();

    return 0;
}
*/