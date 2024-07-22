/*
#include<bits/stdc++.h>
#include<stdio.h>
#include<iostream>
using namespace std ;
//Encapsulation is wrapping of data and members functions in a single unit called class
//used for data hiding - private
//Special method invoked automatically at the time of object creation used for intitalization
//same number as class no return type , memory allocation happens when constructor is called
//NON PARAMETER , PARAMETER , COPY CONSTRUCTor
//shallow copy and deep copy ;
//shallow copy of an object copies all of the member values from one object to another 
//problem in dynamic memory allocation new int[5] allocated in heap  
//deep copy on the other hand,not only copies the member values but also make  copies of any dynamically allocated members that the members point to
//For dynamically allocation as we prefer to the deep copy 
//Destructor for deallocate we use delte
//inheritance when properties & member functions of base class are passed on to the derieved class for code reusability

class Teacher{
    //properties
    private:
    double salary ;
    public:
    //non parameterized 
 //   Teacher(){
   // dept = "Computer Science" ;
   //     cout<<"Hi i am here"<<endl ;
  //  }
  //parameterized constructor 
  //this process of different parameter with same name is polymorphism = Constructor Overloading
  
 string name ;
    string subject ;
   string dept ;
/*
Teacher(string n,string d,string s,double sal){
    name = n ;
    dept = d ;
    subject = s ;
    salary = sal ;
  }

  //this->prop same as *(this).prop
Teacher(string name,string dept,string subject, double salary){
    this->name = name;
    this->dept = dept ;
    this->subject = subject ;
    this->salary = salary ;
  }
//This is a special pointer in C++ that points to the current object 
//copy constructor 
Teacher(Teacher &obj){
   cout<<"This is a custom copy constructor" ;
   this->name = obj.name ;
   this->dept = obj.dept ;
   this->subject = obj.subject ;
   this->salary = obj.salary ;
}


  //methods /member functions
 void changeDept(string newDept){
    dept = newDept ;
  }  
  //setter
/*
void setSalary(double s){
   salary = s  ;
  }
  //getter
  double getSalary(){
   return salary ;
  }

  void  getInfo(){
   cout<<"name :"<<name<<endl ;
   cout<<"salary :"<<salary<<endl ;
  }

};
/*
class Account{
   private :
   double balance ;
   string password ;
   public:
   string accountId ;
   string username ;  
}

class Student
{
private:
   /* data 
  
public:
 string name ;
    //double cgpa ;
    double* cgpaPtr ;
   Student(string name,double cgpa){
      this->name = name ;
    //   this->cgpa = cgpa ;
     cgpaPtr = new double ;
     *cgpaPtr = cgpa ;
   }
 
  //destructor 
  ~Student(){
   cout<<"Hi i am delte" ;
   delete(cgpaPtr) ;
  }

   Student(Student &obj){
      this->name = obj.name ;
      cgpaPtr = new double ;
      *cgpaPtr = *obj.cgpaPtr ;
   }

   void getInfo(){
      cout<<"name :"<<name ;
      cout<<"cgpa :"<< *cgpaPtr ;
    }
};



int main(){
// Teacher t1("AKS","comp","c++",25000 ) ; //constructor call
// t1.name = "Aks" ;
// t1.sub = "C++" ;
//t1.setSalary(25000) ;
//cout<<t1.dept<<endl ;
//cout<<t1.getSalary()<<endl ;
 //cout<<t1.name<<endl ;
 //cout<<t1.sub<<endl ;
 //t1.getInfo() ;
//Special Constructor(default) used to cpy properties of one object into another 

//Teacher t2(t1) ;//default of copy constructor called
 //t2.getInfo() ;

Student s1("rahul",9.0) ;
Student s2(s1) ;

s1.getInfo() ;
*(s2.cgpaPtr)  = 9.2 ;
s1.getInfo() ;
s2.name = "neha" ;
s2.getInfo() ;
}
*/

#include<iostream>

using namespace std ;

/*class Person{
   public :
   string name ;
   int age ;
   Person(){
      cout<<"parent constructor..."<<endl ;
   }

   Person(string name,int age){
      this->name = name ;
      this->age = age ;
      }
};
 //singele inheritance,multi-level inheritance(ek k baad ek )
class Student : public Person{
  public :
  int rollno ;
  Student(){
   cout<<"child constructor"<<endl ;
  }
  Student(string name,int age,int rollno) : Person(name,age){
   this->rollno = rollno ;
  } 
  void getInfo(){
   cout<<"name :"<<name <<endl;
   cout<<"age :"<<age <<endl ;
   cout<< "rollno :"<<rollno <<endl ;
   }
}; 
class GradStudent : public Person{
   public:
   string researcharea ;
};
int main(){
   Student s("rahul",25,9)  ;
   //s1.name = "aks" ;
   //s1.age = 24 ;
  // s1.rollno = 5 ;
  // s1.getInfo() ;
   GradStudent s1 ;
   s1.name = "tony" ;
   cout<<s1.name ;
}

class Student{
   public :
   string name ;
   int rollno ;
};
class Teacher{
   public :
   string subject ;
   double salary ;
};
class TA : public Student , public Teacher{
   public :
   string researchArea ;
};
int main(){
   TA t1 ;
   t1.name = "ASHU" ;
   t1.subject ="com" ;
   cout<<t1.name ;
}
//hierarchical inheritance
class Person{
public :
string name ;
int age ;
};

class Student : public Person{
   public :
   int rollno ;
};
class Teacher : public Person{
   public :
   string subject ;
   double salary ;
};
class TA : public Student , public Teacher{
   public :
   string researchArea ;
};
int main(){
   TA t1 ;
  // t1.name = "ASHU" ;
  // t1.subject ="com" ;
  // cout<<t1.name ;
}

//Polymorphism
//Polymorphism is the ability of object to take in different forms or behave in different ways depending on the context in which they are used 
//1.Compile Time 2.Runtime Polymorphism

//COMPILE TIME POLYMORPHISM EXAMPLE - 1.CONSTRUCTOR OVERLOADING 2.FUNCTION OVERLOADING
//constructor overloading - same name constructor but parameter different example of polymorphism 
//FUNCTION OVERLOADING - Same function name different parameter no of parameter or type of  parameter in their return type same or differ does not matter in the same class 
class Print{
   public :
   void show(int n){
      cout<<"int :"<< n <<endl ;
   }
   void show (char c){
      cout<<"char :"<<c <<endl ;
   }
}

//Runtime Polymorphism
//1.function overriding - inheritance deals parent and child contain the same function with different implementation 
//parent class function is said to be overriden 
//2.Virtual Function = a virtual function is a member function that you expect to be redefined in derieved classes
//Virtual Functions Properties 
//1.Dynamic nature,2.defined by the keyword "virtual" inside a base class and are always declared with a base class and overriden in child class 3.virtual functions is called during runtime
class Parent{
   public :
  void getInfo(){
    cout<<"parent class\n" ;
   }
   virtual void hello(){
      cout<<"hello from parent" ;
   }
};
class Child : public Parent{
   public :
   void getInfo(){
      cout<<"Child class\n" ;
   }
   void hello(){
      cout<<"hello from child" ;
   }
};
int main(){
    Child p1 ;
   p1.hello() ;
   }
   
  //ABSTRACTION 
  //hiding all unnecessary details and showing only the important parts
  //using access modifiers
  //abstract means khayal in hindi 
  //using abstract classes 
  //1.abstract classes are used to provide a base class from which other classes can be derieved
  //2.they cannot be instantiated and are meant to be inherited
  //3.abstract classes are typically used to define an interface for derieved classes 
//mainly classes are blueprint for the object but in abstract classes are used only for inheritance mainly show ki dusri classes kesi honi chiye
//instantiated means unki object nhi bn skti
//instance basically object
//example for abstract class 
class Shape { //automatic abstract class
   virtual void draw() = 0 ; //pure virtual function
};//not can use for making object it gives error
class Circle : public Shape {
   public:
   void draw(){
  cout<<"drawing color\n" ;
   }
};
int main(){
   Circle c1 ;
   c1.draw() ;
}

//Static Keyword 
//STATIC VARIABLES
//variables declared as static in a function are created qnd intialised once for the lifetime of the program .//in function
//static variables in a class are created and intialised once.they are shared by all 
void fun(){
   static int x = 0;
   cout<<"x : "<< x << endl ;
   x++ ;
}
int main(){
   fun() ;
   fun() ;
   fun() ;   
}
*/
//friend functiona nd friend class 