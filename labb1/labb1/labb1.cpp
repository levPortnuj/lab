#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main()
{

    string* friends;
    int n;
    cout << "Enter the number of people you want to add to the database" << endl;
    cin >> n;
    friends = new string[n];
    ofstream outfile;
    string friendd;
    outfile.open("INFO.dat", ostream::binary);
    for (int i = 0; i < n; ++i)
    {
        cout << "Enter info about your friend in the following format : Surname - day.month.year of birth :" << endl;
        cin >> friends[i];
        outfile << friends[i] << endl;
    }

    outfile.close();
    ifstream fin;
    string line;
    fin.open("INFO.dat");
    cout << "Friends born in autumn :" << endl;
    while (getline(fin, line))
    {
        if (line.find(".09") != std::string::npos || line.find(".10") != std::string::npos || line.find(".11") != std::string::npos) {
            cout << line << endl;
        }
    }
    fin.close();

    return 0;

}