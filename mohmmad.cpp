#include <iostream>

#include <string>

#include <cstdlib>

#include <windows.h>

#include <csetjmp>

int i = 0;

using namespace std;

struct information

{

    int password = 1234;

    float withdraw;

    float Deposit;

    float Inquiry_about_the_account_balance;

    float Account_balance = 1000;
};

struct Allow_entry

{

    int password;

    information access;
};

void wle();

void new_pass(information &acc)

{

    int new_password = 0;

    while (true)

    {

        cout << "enter your new code: ";

        cin >> new_password;
        if (acc.password != new_password)

        {

            acc.password = new_password;

            cout << "Password changed." << endl;

            break;
        }

        else

        {

            cout << "New password must be different." << endl;

            int y;

            cout << "if do you went Back press 2 : ";

            while (true)

            {

                cin >> y;

                if (y == 2)

                {

                    break;
                }

                else

                {

                    cout << "Thank you !!" << endl;
                    wle();
                    break;
                }
            }
        }
    }
}

void to_choose(information &caa)
{

    information my_account1;

    Allow_entry my_account;
    float Inquiry_about_the_account_balance;
    int w;
    while (true)
    {
        while (i < 3)
        {

            cout << "choss a opretione : " << endl;
            cout << "1-withdraw" << endl;
            cout << "2-Deposit" << endl;
            cout << "3-Inquiry_about_the_account_balance" << endl;
            cout << "4-exit" << endl;
            cout << "************************************************" << endl;

            cin >> w;
            int r;

            if (w == 1 || w == 2 || w == 3 || w == 4)
            {
                switch (w)
                {
                case 1:

                    cout << "Please select the withdrawal amount : ";
                    cin >> my_account.access.withdraw;
                    if (my_account.access.Account_balance > my_account.access.withdraw)
                    {
                        char q;
                        while (true)
                        {
                            cout << "If you're sure, press y||n :";
                            cin >> q;
                            if (q == 'y' || q == 'Y')
                            {

                                my_account.access.Account_balance = my_account.access.Account_balance - my_account.access.withdraw;
                                cout << "The balance after a withdrawal is : " << my_account.access.Account_balance << endl;
                                cout << "The amount of the withdrawn amount : " << my_account.access.withdraw << endl;

                                break;
                            }
                            else if (q == 'n' || q == 'N')
                            {

                                break;
                            }
                        }
                    }
                    else
                    {
                        cout << "Sorry, your balance is insufficient to withdraw this amount ";
                    }

                    cout << "If you want to go back, press 5 :   ";
                    while (true)
                    {
                        cin >> r;
                        if (r == 5)
                        {
                            break;
                        }
                        else
                        {
                            cout << "Please press number 5 : ";
                        }
                    }

                    break;

                case 2:
                    cout << "Please enter the amount you wish to deposit : ";
                    cin >> my_account.access.Deposit;
                    char q;
                    while (true)
                    {
                        cout << "If you're sure, press y||n :";
                        cin >> q;
                        if (q == 'y' || q == 'Y')
                        {
                            my_account.access.Account_balance = my_account.access.Account_balance + my_account.access.Deposit;
                            cout << "The balance after a deposit is : " << my_account.access.Account_balance << endl;
                            cout << "The amount of the deposit amount : " << my_account.access.Deposit << endl;

                            break;
                        }
                        else if (q == 'n' || q == 'N')
                        {

                            break;
                        }
                    }

                    cout << "If you want to go back, press 5 :   ";
                    while (true)
                    {
                        cin >> r;
                        if (r == 5)
                        {
                            break;
                        }
                        else
                        {
                            cout << "Please press number 5 : ";
                        }
                    }
                    break;
                case 3:
                    Inquiry_about_the_account_balance = my_account.access.Account_balance;
                    cout << "This balance is in your account : " << Inquiry_about_the_account_balance << endl;
                    cout << "If you want to go back, press 5 :   ";
                    while (true)
                    {
                        cin >> r;
                        if (r == 5)
                        {
                            break;
                        }
                        else
                        {
                            cout << "Please press number 5 : ";
                        }
                    }
                    break;
                case 4:
                    cout << "Thank you !!" << endl;

                    wle();

                    break;
                default:
                    break;
                }
            }
            else
            {
                cout << "Please click on the available options" << endl;

                i++;
                if (i == 3)

                {

                    int hours = i;

                    int min = i;

                    int sec = i;

                    while (true)

                    {

                        system("cls");

                        if (sec < 0)

                        {

                            min--;

                            sec = 59;
                        }

                        if (min < 0)

                        {

                            hours--;

                            min = 59;
                        }

                        if (hours < 0)

                        {

                            hours = 23;
                        }

                        cout << "the ATM  it blocking for a while\t" << hours << ":" << min << ":" << sec << endl;

                        if (hours == 0 && min == 0 && sec == 0)

                        {
                            return;
                        }

                        sec--;

                        Sleep(1000);
                    }
                }
            }
        }
    }
};

void enter_password()

{

    information my_account1;

    Allow_entry my_account;

    my_account.access.password = 1234;

    my_account1.password = my_account.access.password;

    while (true)

    {

        while (i < 3)

        {

            cout << "Enter the code: ";

            int attempt;

            cin >> attempt;

            if (attempt == my_account.access.password)

            {

                cout << "welcome to Mox banke#$$$#\n";

                cout << "*****************************************" << endl;

                to_choose(my_account.access);

                break;
            }

            else

            {

                cout << "Invalid code!!" << endl;

                cout << "Would you like to change the code? press 1" << endl;

                cout << "If you don't want to change the code, press 0" << endl;

                bool x;

                cin >> x;

                if (x == 1)

                {

                    new_pass(my_account.access);
                }
            }

            i++;

            if (i == 3)

            {

                int hours = i;

                int min = i;

                int sec = i;

                while (true)

                {

                    system("cls");

                    if (sec < 0)

                    {

                        min--;

                        sec = 59;
                    }

                    if (min < 0)

                    {

                        hours--;

                        min = 59;
                    }

                    if (hours < 0)

                    {

                        hours = 23;
                    }

                    cout << "the ATM  it blocking for a while\t" << hours << ":" << min << ":" << sec << endl;

                    if (hours == 0 && min == 0 && sec == 0)

                    {

                        system("pause");
                        return;
                    }

                    sec--;

                    Sleep(1000);
                }
            }
        }
    }
}

void wle()
{

    int m;
    cout << "                                         " << "welcome to Mox banke $$$" << "            \n\n \n\n\n\n\n";

    while (true)
    {

        cout << "                                               " << "please prss 0 : ";                                                                                                                                               

        cin >> m;
        if (m == 0)
        {
            i = 0;
            cout << "***********************************************************************************************************************" << endl;
            enter_password();
            break;
        }
        else
        {
            cout << "plesae prss 0" << endl;

            cout << "Invalid code!!" << endl;

            i++;

            if (i == 3)

            {

                int hours = 1;

                int min = i;

                int sec = i;

                while (true)

                {

                    system("cls");

                    if (sec < 0)

                    {

                        min--;

                        sec = 59;
                    }

                    if (min < 0)

                    {

                        hours--;

                        min = 59;
                    }

                    if (hours < 0)

                    {

                        hours = 23;
                    }

                    cout << "the ATM  it blocking for a while\t" << hours << ":" << min << ":" << sec << endl;

                    if (hours == 0 && min == 0 && sec == 0)

                    {

                        system("pause");
                        exit(0);
                    }

                    sec--;

                    Sleep(1000);
                }
            }
        }
    }
}

int main()
{

    wle();

    system("pause");

    return 0;
}