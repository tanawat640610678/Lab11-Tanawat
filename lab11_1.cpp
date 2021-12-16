#include<iostream>

using namespace std;

int main(){
	char count[6] = {'A','B','C','D','F','0'}; 
	int N=1 , sum=0 , a=0 , b=0 , c=0 , d=0 , f=0;
	char grade;
	cout << "Please input grade of each student (A-F) or input 0 to exit." <<"\n";
	
	do{
		cout << "Student [" << N << "]: ";
		cin >> grade; 
		if(grade == 'A') {
			a++;
            N++;
			sum++;
		}else if(grade == 'B') {
                b++;
			    N++;
				sum++;
		}else if(grade == 'C'){
			    c++;
				N++;
				sum++;
		}else if(grade == 'D'){
			    d++;
				N++;
				sum++;
		}else if(grade == 'F'){
                f++;
				N++;
			    sum++;
		}else if( grade != count[5] || grade != '0'){
		          cout << "Wrong input. Please input again." << "\n";
		}       
	}while(grade != '0');
	
	
	cout << "In total " << sum << " students."<<"\n";
	cout << "A = " << a <<", ";
	cout << "B = " << b <<", ";	
	cout << "C = " << c <<", ";
	cout << "D = " << d <<", ";	
	cout << "F = " << f;
	
	return 0;
}