#include<iostream> 
#include<fstream> 
#include<string> 
#include<cstring>
using namespace std;
void student_writedata(string i,int j,int k)
{
 fstream f;
 f.open("student.txt",ios::out);
 f<<" Name of the student is "<<i<<" , the age of the student is "<<j<<" , and the roll no of the student is: "<<k<<endl;
 f.close();
}
void student_readdatawordbyword(int i,int j,string k)
{
 cout<<"	Reading data	"<<endl; fstream f;
 string data; f.open("student.txt",ios::in); if(f.is_open()){
  while(f)
  {
    f>>data; cout<<data<<endl;
 
   }
}
  f.close();
   cout<<endl<<endl;
}
void student_readlinebyline(string i, int j,int k)
{
 cout<<"	Read data line by line	"<<endl; fstream f;
string readline; f.open("student.txt",ios::in); if(f.is_open()){
while(f){ getline(f,readline); cout<<readline;
}}
f.close(); cout<<endl<<endl;
}
void student_writeappmode(string i,int j,int k){


fstream f; f.open("student1.txt",ios::out|ios::app);
f<<" Name of the student is "<<i<<" , the age of the student is "<<j<<" , and the roll no of the student is: "<<k<<endl;
f.close();
}
int main(){ int age,roll;
string name;
cout<<"Enter a student name: ";
 
cin>>name;
cout<<"Enter a student age: "; cin>>age;
cout<<"Enter a student roll no: "; cin>>roll; student_writedata(name,age,roll);
student_readdatawordbyword(age,roll,name); student_readlinebyline(name,age,roll); student_writeappmode(name,age,roll);
}


