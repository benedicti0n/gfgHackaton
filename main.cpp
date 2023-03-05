#include <iostream>
using namespace std;

void login(void);
void reg(void);

int main()
{
    int input;
    while (true)
    {
    lable:
        cout << "\nEnter 1 for Login\nEnter 2 for Register\nEnter 0 for Exit\n-> ";
        cin >> input;
        if (input == 1)
        {
            login();
            goto lable;
        }
        else if (input == 2)
        {
            reg();
            goto lable;
        }
        else if(input == 0){
            cout<<"\nExit the program\n";
            exit(0);
        }
        else
        {
            cout << "\nPleas choose a correct option\n";
        }
    }
}

void login(void)
{
    cout << "\n***    UNDER CONSTRUCTION    ***\n";
}

void reg(void)
{
    cout << "\n***    UNDER CONSTRUCTION    ***\n";
}