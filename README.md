# Experiment 12

**Aim:** <br>
To study and implement constructors and destructors. <br>
<br>
**Theory:** <br>
Constructors: <br>
<br>
Constructors are unique member functions of a class that are automatically called when an object of the class is created. The object’s data members are initialized. Resources may also be allocated when required. <br>
There are some key points about costructors which are: <br>
&#8594; The name of the constructor is same as its class name. <br>
&#8594; Constructors do not have a return type. <br>
&#8594; Constructors are mostly declared in the public section of the class. <br>
&#8594; Multiple constructors can be defined with different parameters, this is known as overloading. <br>
<br>
There are mainly 3 types of constructors. They are: <br>
_Default Constructor:_ <br>
A constructor which takes no arguments. It is also called a zero-argument constructor as it has no parameters. <br>
_Parameterized Constructor:_  <br>
A constructor that takes parameters, allowing the object to be initialized with specific values. <br>
_Copy Constructor:_  <br>
A constructor that initializes an object using another object of the same class. It is used for deep copying and when passing objects by value. <br>
<br>

Destructors <br>
A destructor is a special member function which destroys the class objects created by the constructor. It has the same name as their class name preceded by a _tilde_ (~) symbol.
There are some key points about destructors which are: <br>
&#8594; They neither require any argument nor do they return any value. <br>
&#8594; They release memory space which are occupied by the objects created by the constructor. <br>
&#8594; Destructor cannot be overloaded. <br>
&#8594; Objects are destroyed in the reverse of an object creation. <br>
&#8594; Only one destructor can be defined. <br>
<br>

**Code:** <br>
a
```
#include <iostream>
using namespace std;

class student {
int rn;
char n[50];
float avg;
public:
student() {
    cout << "Enter the name: ";
    cin >> n;
    cout << "Enter the roll no.: ";
    cin >> rn;
    cout << "Enter the average: ";
    cin >> avg;
}

void display() {
    cout << endl;
    cout << "Name: " << n << endl;
    cout << "Roll No: " << rn << endl;
    cout << "Average: " << avg << "%" << endl;
}
};

int main() {
student s1;
s1.display();
return 0;
}
```
b
```
#include <iostream>
using namespace std;

class student
{
int rn;
char n[50];
float avg;
public:
student();
void display();
};
student::student()
{
cout<<"Enter the name: ";
cin>>n;
cout<<"Enter the roll no.: ";
cin>>rn;
cout<<"Enter the average: ";
cin>>avg;
}
void student::display()
{
cout<<endl;
cout<<"Name: "<<n<<endl;
cout<<"Roll No: "<<rn<<endl;
cout<<"Average: "<<avg<<endl;
}
int main()
{
student s1;
s1.display();
return 0;
}
```
c
```
#include <iostream>
using namespace std;

//default constructor
class student
{
int rn;
char n[50];
double m1, m2, m3;
public:
student()
{
cout<<"Enter the name: ";
cin>>n;
cout<<"Enter the roll no.: ";
cin>>rn;
cout<<"Enter the subject 1 marks: ";
cin>>m1;
cout<<"Enter the subject 2 marks: ";
cin>>m2;
cout<<"Enter the subject 3 marks: ";
cin>>m3;
}

void display()
{
cout<<endl;
cout<<"Name: "<<n<<endl;
cout<<"Roll No: "<<rn<<endl;
cout<<"Marks for subject 1: "<<m1<<endl;
cout<<"Marks for subject 2: "<<m2<<endl;
cout<<"Marks for subject 3: "<<m3<<endl;
}
};
int main()
{
student s1;
s1.display();
return 0;
}
```
d
```
#include <iostream>
using namespace std;

//types of constructor - parameterized constructor
class maxop
{
public:
maxop(int a, int b)
{
cout<<"First Number: "<<a<<endl;
cout<<"Second Number: "<<b<<endl;
cout<<endl;
if (a>b)
{
    cout<<"The first number is greater than the second.";
}
else if (b>a)
{
    cout<<"The second number is greater than the first. ";
}
else
{
    cout<<"Both numbers are equal. ";
}
}
};

int main()
{
maxop n1(23,76);
}
```
e
```
#include<iostream>
#include<string.h>
using namespace std;

//copy constructor
class student
{
int rn;
char n[50];
float avg = 0;
public:
student(int,char[],float);

student(student &t)
{
    rn=t.rn;
    strcpy(n,t.n);
    avg=t.avg;
}
void display();

};

student::student(int rno,char na[],float av)
{
rn=rno;
strcpy(n,na);
avg=av;
}

void student::display()
{
cout<<endl;
cout<<"Name: "<<n<<endl;
cout<<"Roll No: "<<rn<<endl;
cout<<"Average: "<<avg<<" %"<<endl;
}

int main()
{
student s1(133,"Ronaldo",73.7);
s1.display();

student vandan(s1);
vandan.display();

return 0;
}
```
f
```
# include<iostream>
using namespace std;
int c = 0;
//destructor
class destruct
{
public:
destruct()
{
    c++;
    cout<<"Number of objects created: "<<c<<endl;
}
~destruct()
{
    c--;
    cout<<"Number of objects destroyed: "<<c<<endl;
}
};

int main()
{
destruct aa,bb,cc,dd;
}
```

## CODE OUTPUT
![image](https://github.com/user-attachments/assets/0b963ccc-0c94-4ae7-a468-4c6b54d9c295)
![image](https://github.com/user-attachments/assets/05b2ba17-5d23-477c-94e6-c98950bfae02)
![image](https://github.com/user-attachments/assets/40b99c6a-e5d4-4eec-b0c2-96528d49212e)
![image](https://github.com/user-attachments/assets/e923cc74-83a0-4106-9d81-ee7e79dc62fa)
![image](https://github.com/user-attachments/assets/ae62ed34-705a-46df-91b3-d0e02efadb6c)
![image](https://github.com/user-attachments/assets/76d18155-2404-4066-b5fb-c9d42eccaa44)

## CONCLUSION
 in this experiment we learnt about the constructors , types of constructors and destructors

