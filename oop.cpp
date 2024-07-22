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
*/
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
   t1.name = "ASHU" ;
   t1.subject ="com" ;
   cout<<t1.name ;
}