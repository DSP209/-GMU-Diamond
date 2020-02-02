#include <iostream>
using namespace std;

class Person {
  private:
    string f_name;
    string l_name;
  public:
    Person (string f, string l){
      f_name = f;
      l_name = l;
      cout << "Person: " << l_name +", "<< f_name << endl;
  }
};

class Teacher : public Person {
  private:
    string dept;
  public:
    Teacher (string f, string l,  string d): Person( f,  l){
      dept = d;
      cout <<" Teacher: " << dept<<endl;
    }
};
class Student: public Person{
  private:
    string major;
  public:
    Student (string f, string l,  string m): Person( f,  l){
      major = m;
      cout <<" Student: " << major<<endl;
    }
};
class TA :public Teacher, public Student{
  public:
    TA(string f, string l,  string d,  string m):Teacher(f,l,d),Student(f,l,m){
      cout<<" TA "<<f<<endl;
    }
};
int main() {
  Teacher me("Dave","Peltzman","CIS");
  Student you ("John","Doe","Chemistry");

  cout<<"\n"<<endl;
  TA myTA("Jane","Smith","CIS","Biology");

}