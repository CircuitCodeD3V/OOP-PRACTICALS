#include<iostream>
using namespace std;


class Basic_Info{
    protected:
        char name[30];
        int Emp_ID;
       
    public:
        void basicinfo(){
            cout<<"Enter name of employee: ";
            cin>>name;
        }
};


class Dept_Info{
    protected:
        char Dept_name[15];
        char Work_Assign[500];
    public:
        void Dept_info(){
            cout<<"Enter name of Department: ";
            cin>>Dept_name;
        }
};


class Employee: public Basic_Info, Dept_Info{
    // cout<<"Basic Information is: ";
    // basicinfo();
    // cout<<"Department Information is: ";                 [You cannot write cout and function calls directly inside a class
    // Dept_info();                                         These statements should be inside a function/constructor.]


    public:                       //Given in terminal window.
    void Display_Info(){
        cout<<"Basic Information is: "<<endl;
    basicinfo();
    cout<<"Department Information is: "<<endl;
    Dept_info();
    cout<<"Employee Information is: "<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Department: "<<Dept_name<<endl;
    }
};


int main(){
    int n;
    Employee Emp[50];
    cout<<"Enter no. of employee: ";
    cin>>n;
    cout<<"-----------------------------------------------------------"<<endl;
    cout<<"                     EMPLOYEE INFORMATION:"<<endl;
       cout<<"-----------------------------------------------------------"<<endl;
    for(int i=0; i<n; i++){
        // cout<<"Information is "<<Emp[i].Display_Info();
        cout<<"Information is ";
        Emp[i].Display_Info();
    }


    cout<<"-----------------------------------------------------------"<<endl;
    return 0;
}
