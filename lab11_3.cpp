#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    
    ifstream  source("score.txt");
    string text;
    double sum,count;
    int num;
    
     while(getline(source,text)){
           
           sum += atof(text.c_str());
           count += pow(atof(text.c_str()),2);
           num++;
           
     }
    
    cout << "Number of data = " << num <<"\n";
    cout << setprecision(3);
    cout << "Mean = " << sum/num << "\n";
    cout << "Standard deviation = " << pow((count/num)-pow(sum/num,2),0.5) <<"\n";
    source.close();
    return 0;
}