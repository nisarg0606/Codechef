#include <fstream>
#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

class pay_slip;
class permenent_employee;
class contracttual_employee;

int get_da_rate();
int get_hra_rate();
int get_ma();
int get_ptax();
int get_emp_no();
int search(int, permenent_employee *);
int search(int, contracttual_employee *);
void generate_pay_slip(permenent_employee);
void generate_pay_slip(contracttual_employee);
void compute_OT();

class employee
{
protected:
    int emp_no;
    char emp_name[40];
    char emp_address[80];
    char emp_desg[20];
    char emp_dept[20];

public:
    void getdata();
    void displaydata();
}; //end of base class

void employee::getdata()
{
    emp_no = get_emp_no();
    cout << "\nEnter the name of the employee: ";
    cin.getline(emp_name, 40);
    cout << "\nEnter the address of the employee: ";
    cin.getline(emp_address, 80);
    cout << "\nEnter the designation of the employee: ";
    cin.getline(emp_desg, 20);
    cout << "\nEnter the department of the employee: ";
    cin.getline(emp_dept, 20);
}

void employee::displaydata()
{
    cout << "\nEmployee No: " << emp_no;
    cout << "\nEmployee Name: " << emp_name;
    cout << "\nEmployee Address: " << emp_address;
    cout << "\nEmployee Designation: " << emp_desg;
    cout << "\nEmployee Department: " << emp_dept;
}

class permenent_employee : public employee
{
private:
    char emp_type[10];
    long emp_da;
    long emp_basic;
    long emp_hra;
    int emp_ma;
    long emp_pf;
    int ptax;
    int itax;
    long gross;
    long net;

public:
    void getdata();
    void displaydata();
    void calculate();
    void store_in_file();
    friend int search(int, permenent_employee *);
    friend void generate_pay_slip(permenent_employee);
    friend void compute_OT();
};

void permenent_employee::getdata()
{
employee:
    getdata();
    try
    {
        cout << "\nEnter the basic salary: ";
        cin >> emp_basic;
        if (emp_basic <= 0)
        {
            throw emp_basic;
        }
    }
    catch (...)
    {
        cout << "\nBasic should be positive";
        return;
    }
    try
    {
        cout << "\nEnter the income tax to be deducted: ";
        cin >> itax;
        if (itax < 0)
        {
            throw itax;
        }
    }
    catch (...)
    {
        cout << "\nIncome tax should be positive";
        return;
    }
    calculate();
}

void permenent_employee::calculate()
{
    int da, hra;

    strcpy(emp_type, "Permanent");
    da = get_da_rate();
    emp_da = emp_basic * da / 100;

    hra = get_hra_rate();
    emp_hra = emp_basic * hra / 100;

    emp_ma = get_ma();
    emp_pf = (emp_basic + emp_da) * 12 / 100;

    ptax = get_ptax();
    gross = emp_basic + emp_da + emp_hra + emp_ma;
    net = gross - emp_pf - itax - ptax;
}

void permenent_employee::displaydata()
{
    employee::displaydata();
    cout << "\nEmployee Type: " << emp_type;
    cout << "\nBasic: " << emp_basic;
    cout << "\nDearness Allowance: " << emp_da;
    cout << "\nHRA: " << emp_hra;
    cout << "\nMedical Allowance: " << emp_ma;
    cout << "\nProvident Fund: " << emp_pf;
    cout << "\nProfessional Tax: " << ptax;
    cout << "\nIncome Tax: " << itax;
    cout << "\nGross Salary: " << gross;
    cout << "\nNet Salary: " << net;
}

void permenent_employee::store_in_file()
{
    ofstream fout;
    fout.open("permenent_employee.txt", ios::app);
    fout << emp_no << "\t" << emp_name << "\t" << emp_address << "\t" << emp_desg << "\t" << emp_dept << "\t" << emp_type << "\t" << emp_basic << "\t" << emp_da << "\t" << emp_hra << "\t" << emp_ma << "\t" << emp_pf << "\t" << ptax << "\t" << itax << "\t" << gross << "\t" << net << endl;
    fout.close();
}

class contracttual_employee : public employee
{
private:
    char emp_type[12];
    long gross;
    int ptax;
    int itax;
    long net;

public:
    void getdata();
    void displaydata();
    void calculate();
    void store_in_file();
    friend int search(int, contracttual_employee *);
    friend void generate_pay_slip(contracttual_employee);
    friend void compute_OT();
};

void contracttual_employee::getdata()
{
    employee::getdata();
    try
    {
        cout << "\nEnter the gross salary: ";
        cin >> gross;
        if (gross <= 0)
        {
            throw gross;
        }
    }
    catch (...)
    {
        cout << "\nGross should be positive";
        return;
    }
    try
    {
        cout << "\nEnter the income tax to be deducted: ";
        cin >> itax;
        if (itax < 0)
        {
            throw itax;
        }
    }
    catch (...)
    {
        cout << "\nIncome tax should be positive";
        return;
    }
    calculate();
}