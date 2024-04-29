#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int people;
    string days;
    char response = 'y';

    cout << "Welcome to our restaurant" << endl;
    cout << "You can reserve a table through this site" << endl;

    do
    {
        cout << "How many people" << endl;
        cin >> people;
        cin.ignore();

        cout << "Which day would you like to reserve a table" << endl;
        getline(cin, days);

        bool weekendsDays = (days == "saturday" || days == "sunday");
        bool isAlot = (people > 6);

        if (isAlot)
        {
            if (weekendsDays)
            {
                cout << "Wait time is more than 30 minutes because of weekend and a large group." << endl;
            }
            else
            {
                cout << "Wait time is 5 minutes" << endl;
            }
        }
        else
        {
            cout << "Not a large table and wait time is 5  minutes" << endl;
        }

        cout << "Would you like to reserve a table again" << endl;
        cin >> response;
        cin.ignore();
    } while (response == 'y' || response == 'Y');

    return 0;
}