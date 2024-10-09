#include <iostream>
#include <iomanip>
#include <conio.h>
#include <windows.h>
using namespace std;
string username, password;
struct emp
{
    string name, id, address, salary, contact;
};
int total = 0;
emp e[100];
void menu()
{
    cout << "\n\n\t\t ____________________________________________";
    cout << "\n\t\t|\t   Employee Management System\t     |";
    cout << "\n\t\t|____________________________________________|";
    cout << "\n\t\t|   " << setw(42) << "|";
    cout << "\n\t\t| Press" << setw(39) << "|";
    cout << "\n\t\t| [1]  To Enter data" << setw(26) << "|";
    cout << "\n\t\t| [2]  To Show data" << setw(27) << "|";
    cout << "\n\t\t| [3]  To Search data" << setw(25) << "|";
    cout << "\n\t\t| [4]  To Update data" << setw(25) << "|";
    cout << "\n\t\t| [5]  To Delete data" << setw(25) << "|";
    cout << "\n\t\t| [6]  To Logout" << setw(30) << "|";
    cout << "\n\t\t| [7]  To Exit" << setw(32) << "|";
    cout << "\n\t\t|" << setw(45) << "|";
    cout << "\n\t\t|____________________________________________|";
    cout << "\n\n\t\tEnter your choice ==> ";
}
void empdata()
{
    int user = 0;
    cout << "\n\n\tHow many employees data do you want to enter ==> ";
    cin >> user;
    cout << "\n";
    cin.ignore();
    for (int i = total; i < total + user; i++)
    {
        cout << "\tEnter data of employee " << i + 1;
        cout << "\n\t\tEnter employee name: \t";
        getline(cin, e[i].name);
        cout << "\t\tEnter id: \t\t";
        getline(cin, e[i].id);
        cout << "\t\tEnter address: \t\t";
        getline(cin, e[i].address);
        cout << "\t\tEnter contact: \t\t";
        getline(cin, e[i].contact);
        cout << "\t\tEnter salary: \t\t";
        getline(cin, e[i].salary);
        cout << "\n";
    }
    cout << "\t\tEmployee Added done ";
    Sleep(1000);
    system("cls");
    total += user;
}
void show()
{
    if (total != 0)
    {
        for (int i = 0; i < total; i++)
        {
            cout << "\n\t\t   Data of employee " << i + 1 << "\t\n";
            cout << "\t\t _______________________ ";
            cout << "\n\t\t|\t\t\t|";
            cout << "\n\t\t|Name: \t\t" << e[i].name << "\t|\n";
            cout << "\t\t|ID: \t\t" << e[i].id << "\t|\n";
            cout << "\t\t|Address: \t" << e[i].address << "\t|\n";
            cout << "\t\t|Contact: \t" << e[i].contact << "\t|\n";
            cout << "\t\t|Salary: \t" << e[i].salary << "\t|\n";
            cout << "\t\t|_______________________|";
            cout << endl;
        }
    }
    else
    {
        cout << "\n\t\tNo data is entered" << endl;
    }
}
void search()
{
    bool srch = false;
    if (total != 0)
    {
        string id;
        // cin.ignore();
        cout << "\t\tEnter id of employee which you want to search ==> ";
        getline(cin, id);
        for (int i = 0; i < total; i++)
        {
            if (e[i].id == id)
            {
                cout << "\n\t\t   Data of employee " << i + 1 << "\t\n";
                cout << "\t\t _______________________ ";
                cout << "\n\t\t|\t\t\t|";
                cout << "\n\t\t|Name: \t\t" << e[i].name << "\t|\n";
                cout << "\t\t|ID: \t\t" << e[i].id << "\t|\n";
                cout << "\t\t|Address: \t" << e[i].address << "\t|\n";
                cout << "\t\t|Contact: \t" << e[i].contact << "\t|\n";
                cout << "\t\t|Salary: \t" << e[i].salary << "\t|\n";
                cout << "\t\t|_______________________|";
                cout << endl;
                srch = true;
                break;
            }
        }
        if (srch == false)
        {
            cout << "\n\t\tNo such record found" << endl;
        }
    }
    else
    {
        cout << "\n\t\tNo data is entered" << endl;
    }
}
void update()
{
    if (total != 0)
    {
        string id;
        // cin.ignore();
        cout << "\n\t\tEnter id of employee which you want to update ==> ";
        getline(cin, id);
        for (int i = 0; i < total; i++)
        {
            if (e[i].id == id)
            {
                // cin.ignore();
                cout << "\n\t\told Data of employee" << i + 1 << "\t\n";
                cout << "\t\t _______________________ ";
                cout << "\n\t\t|\t\t\t|";
                cout << "\n\t\t|Name: \t\t" << e[i].name << "\t|\n";
                cout << "\t\t|ID: \t\t" << e[i].id << "\t|\n";
                cout << "\t\t|Address: \t" << e[i].address << "\t|\n";
                cout << "\t\t|Contact: \t" << e[i].contact << "\t|\n";
                cout << "\t\t|Salary: \t" << e[i].salary << "\t|\n";
                cout << "\t\t|_______________________|";
                cout << "\n\t\tEnter new data" << endl;
                cout << "\n\t\tEnter employee name: \t";
                getline(cin, e[i].name);
                cout << "\t\tEnter id: \t\t";
                getline(cin, e[i].id);
                cout << "\t\tEnter address: \t\t";
                getline(cin, e[i].address);
                cout << "\t\tEnter contact: \t\t";
                getline(cin, e[i].contact);
                cout << "\t\tEnter salary: \t\t";
                getline(cin, e[i].salary);
                cout << "\n";
                break;
            }
            if (i == total - 1)
            {
                cout << "\n\t\tNo such record found" << endl;
            }
        }
    }
    else
    {
        cout << "\t\n\tNo data is entered" << endl;
    }
}
void del()
{
    if (total != 0)
    {
        int press;
        cout << "\t\tPress 1 to delete specific record" << endl;
        cout << "\t\tPress 2 to delete full record" << endl;
        cout << "\n\n\t\tEnter your choice ==>  ";
        cin >> press;
        if (press == 1)
        {
            string id;
            cin.ignore();
            cout << "\t\tEnter id of employee which you want to delete ==>  ";
            getline(cin, id);
            for (int i = 0; i < total; i++)
            {
                if (e[i].id == id)
                {
                    for (int j = i; j < total; j++)
                    {
                        e[j].name = e[j + 1].name;
                        e[j].id = e[j + 1].id;
                        e[j].address = e[j + 1].address;
                        e[j].contact = e[j + 1].contact;
                        e[j].salary = e[j + 1].salary;
                    }
                    total--;
                    cout << "\t\tYour required record is deleted!" << endl;
                    break;
                }
                if (i == total - 1)
                {
                    cout << "\t\tNo such record found!" << endl;
                }
            }
        }
        else if (press == 2)
        {
            total = 0;
            cout << "\t\tAll record is deleted!" << endl;
        }
        else
        {
            cout << "\t\tInvalid Input!" << endl;
        }
    }
    else
    {
        cout << "\t\tNo data is entered!" << endl;
    }
}
void signup()
{
    cout << "\n\n\t\tEmployee Management System" << endl;
    cout << "\n\t\t*****Signup*****" << endl;
    cout << "\n\t\tEnter new username: ";
    getline(cin, username);
    cout << "\t\tEnter new password: ";
    getline(cin, password);
    cout << "\t\tYour new id is creating please wait";
    for (int i = 0; i < 6; i++)
    {
        cout << ".";
        Sleep(400);
    }
    cout << "\n\t\tYour id created successfully";
    Sleep(1500);
}
void login()
{
    string usrn, pswd;
    system("cls");
    while (true)
    {
        cout << "\n\n\t\tEmployee Management System" << endl;
        cout << "\n\t\t*****Log-in*****" << endl;
        cout << "\n\n\t\tEnter username: ";
        getline(cin, usrn);
        cout << "\t\tEnter password: ";
        getline(cin, pswd);
        cout << "\n\t\tData matching please wait";
        for (int i = 0; i < 6; i++)
        {
            cout << ".";
            Sleep(400);
        }
        if (usrn == username && pswd == password)
        {
            cout << "\n\t\tData Matched!\n";
            Sleep(1000);
            system("CLS");
            cout << "\n\n\t\t  Wellcome to Employee Management System" << endl;
            break;
        }
        else
        {
            if (usrn != username)
            {
                Sleep(200);
                system("cls");
                cout << "\n\t\t\aInvalid username please try again\n";
            }
            else if (pswd != password)
            {
                Sleep(200);
                system("cls");
                cout << "\n\t\t\aInvalid password please try again\n";
            }
        }
    }
}
main()
{
    signup();
    login();
    system("CLS");
    string ch;
    while (true)
    {
        menu();
        ch = getch();
        if (ch == "1")
        {
            system("cls");
            empdata();
        }
        else if (ch == "2")
        {
            system("cls");
            show();
            cout << "\n\n\t\tPress enter to continue.......\t";
            cin.ignore();
            system("cls");
        }
        else if (ch == "3")
        {
            system("cls");
            search();
            cout << "\n\n\t\tPress enter to continue.......\t";
            cin.ignore();
            system("cls");
        }
        else if (ch == "4")
        {
            system("cls");
            update();
            cout << "\n\n\t\tPress enter to continue.......\t";
            cin.ignore();
            system("cls");
        }
        else if (ch == "5")
        {
            system("cls");
            del();
            cout << "\n\n\t\tPress enter to continue.......\t";
            cin.ignore();
            system("cls");
        }
        else if (ch == "6")
        {
            system("cls");
            login();
        }
        else if (ch == "7")
        {
            cout << "\n\n\n\t\t\t Good-Bye \n\n\n";
            break;
        }
        else
        {
            system("cls");
            cout << "\n\t\t\aInvalid Input" << endl;
        }
    }
}
