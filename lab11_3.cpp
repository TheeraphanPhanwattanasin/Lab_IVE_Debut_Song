#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main(){
    int count = 0;
    double sum = 0, sumpow = 0, mean;
    string text;
    
    ifstream score("score.txt");
    
    while(getline(score,text)){
        sum += atof(text.c_str());
        sumpow += pow(atof(text.c_str()),2);
        count++;
    }

    mean = sum/count;
    cout << "Number of data = " << count << "\n";
    cout << setprecision(3);
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << sqrt((sumpow/count)- pow(mean,2));
}