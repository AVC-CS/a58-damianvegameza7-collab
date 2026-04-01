#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    int M;
    double score1, score2, sum, avg;
    string stuName;
    ifstream ifs;

    // TODO: open "students.txt" for reading
    ifs.open("Students.txt");
    if(!ifs.is_open()) {
        cerr <<"Error opening file" << endl;
        return 1;
    }
    // TODO: read M from ifs, print "Total M students"
    ifs >> M;
    cout <<"Total " << M << " students "<< endl;
    for (int i = 0; i < M; i++)
    {
        // TODO: read stuName, score1, score2 from ifs
        // TODO: compute sum = score1 + score2, avg = sum / 2.0
        // TODO: print Student Name, score1, score2, Sum, Avg
        ifs >> stuName >> score1 >> score2;
        sum = score1 + score2;
        avg = sum / 2.0;
        cout << stuName <<" Sum: " << sum << " Avg: " << avg << endl;
    }
    ifs.close();
    return 0;
}
