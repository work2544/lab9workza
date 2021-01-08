#include<iostream>
using namespace std;

int main(){
	int count[5] = {0,0,0,0,0},i=0;
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	char grade[100];
	do{
		cout << "Student ["<<i+1<<"]: ";
		cin >> grade[i]; //The loop must be terminated when grade = '0'
		if(grade[i]=='A')
		{	
			count[0]++;
		}
		else if(grade[i]=='B') 
		{	
		    count[1]++;
		}
		else if(grade[i]=='C') 
		{	
		    count[2]++;
		}
		else if(grade[i]=='D') 
		{	
		    count[3]++;
		}
		else if(grade[i]=='F') 
		{	
		    count[4]++;
		}
		else if(grade[i]=='0') 
		{	
		    break;
		}
		else{ 
			cout<<"Wrong input. Please input again.\n";
			continue;
		} 
		i++;
	}while(true);
	
	
	cout << "In total "<<i<< " students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";	
	cout << "F = " << count[4] ;

	
	
	return 0;
}
