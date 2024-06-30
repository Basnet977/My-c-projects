#include <iostream>
#include <cstring>

using namespace std;

struct MovieData
{
    string title, director;
    int year_released, running_time;

    void display()
    {
        cout << "Title : " << title << endl;
        cout << "Director : " << director << endl;
        cout << "Year released : " << year_released << " AD." << endl;
        cout << "Running Time : " << running_time << " minutes." << endl;
    }

    void get_input()
    {
        cout << "Enter title of the movie : ";
        getline(cin, title);
        cout << "Enter name of the director : ";
        getline(cin, director);
        cout << "Enter release date : ";
        cin >> year_released;
        cout << "Enter running time : ";
        cin >> running_time;
        cin.ignore();
    }
};

int main()
{

    MovieData movie1, movie2;

    movie1.get_input();
    cout << endl;
    movie2.get_input();
    cout << endl;
    movie1.display();
    cout << endl;
    movie2.display();
    cout << endl;

    return 0;
}