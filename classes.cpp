#include <iostream>
#include <string>

using namespace std;


// this teacher class is also example of encapsulation where it is wrapping the data & memeber functions into a single unit called class
class Teacher
{
    private:
    double salary; // data hiding

    public:
    //properties / attributes
    string name;
    string subject;
    string dept;


    // methods / memeber functions
    //setter 
    void setSalary(double s){
        salary = s;
    }

    //getter
    double getSalary(){
        return salary;
    }

    void changeDept(string newDept){
        dept = newDept;
    }

} ;

int main()
{

    Teacher t1;

    t1.name = "Palak";
    t1.dept = "Airtificial Intelligence";
    t1.subject = "AI & ML";
    t1.setSalary(25000);
    t1.changeDept("Cyber security");

   
    cout << t1.name << endl;
    cout << t1.dept << endl;

    cout << t1.getSalary() << endl;

    return 0;
}
