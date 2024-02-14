#include <iostream>

using namespace std;
class Employee{
private:
    string name;
    string SSN;
    double salary;
public:
  Employee(){
     name="";
     SSN="";
     salary=0;
    }
  Employee(string name,string SSN,double salary){
     this->name=name;
     this->SSN=SSN;
     this->salary=salary;
  }

  void setName(string name) {
    this->name = name;
  }
  void setSSN(string snn) {
    this->SSN = snn;
  }
  void setSalary(double salary) {
    this->salary = salary;
  }

  string getName() {
    return name;
  }
  string getSSN() {
    return SSN;
  }
  double getSalary() {
    return salary;
  }
  double getTotalSalary(){
     return salary;
  }

  void print(){
     cout<<"EMPLOYEE"<<" "<<name<<" "<<SSN<<" "<<salary<<"\n";
  }
};

class Sales : public Employee{
private:
  float gross_sales;
  float commision_rate;
public:
    Sales():Employee(){
      gross_sales=0;
      commision_rate=0;
    }

    Sales(string name,string SSN,double salary,float gross_sales,float commision_rate):Employee(name,SSN,salary){
      this->gross_sales=gross_sales;
      this->commision_rate=commision_rate;
    }

    void setGross_sales(float gross_sales){
      this->gross_sales=gross_sales;
    }

    double getTotalSalary(){
    double totalsalary=getSalary()+(gross_sales*commision_rate);
    return totalsalary;
    }

    void print(){
     cout<<"SALES"<<" "<<getName()<<" "<<getSSN()<<" "<<getSalary()<<" "<<gross_sales<<" "<<commision_rate<<"\n";
  }
};

class Engineer:public Employee{
private:
    string speciality;
      int experience;
      int overtime_hours;
      float overtime_hour_rate;
public:
    Engineer():Employee(){
      speciality="";
      experience=0;
      overtime_hours=0;
      overtime_hour_rate=0;
    }

    Engineer(string name,string SSN,double salary,string speciality,int experience,int overtime_hours,float overtime_hour_rate)
    :Employee(name,SSN,salary){
      this->speciality=speciality;
      this->experience=experience;
      this->overtime_hours=overtime_hours;
      this->overtime_hour_rate=overtime_hour_rate;
    }

    void setOvertime_hours(int overtime_hours){
      this->overtime_hours=overtime_hours;
    }

    void setOvertime_hour_rate(float overtime_hour_rate){
      this->overtime_hour_rate=overtime_hour_rate;
    }

    double getTotalSalary(){
        double totalsalary=getSalary()+(overtime_hours*overtime_hour_rate);
        return totalsalary;
    }

    void print(){
      cout<<"ENGINEER"<<" "<<getName()<<" "<<getSSN()<<" "<<getSalary()<<" "<<speciality<<" "<<experience<<" "<<overtime_hours<<" "<<overtime_hour_rate<<"\n";
  }

};
int main()
{
  Employee E1("losy","123654",5000);
  Sales s1("amm","25634",3000,100000,0.01);
  Engineer En1("sam","56328",10000,"mechanic",10,50,50);
//  cout<<En1.getTotalSalary()<<"\n";
//  cout<<s1.getTotalSalary();
  E1.print();
  s1.print();
  En1.print();

}
