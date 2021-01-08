#include<iostream>
#include<fstream>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include <iomanip>
using namespace std;

int main (){
	ifstream source;
	source.open("score.txt") ;
	string textline;
	int num=0;
    float sum=0,SD=0,mean=0,temp;
	while(getline(source,textline))
	{
		sum+=atof(textline.c_str());
        num++;	
	}
	cout<<"Number of data = "<<num<<endl;
  mean=sum/num;
    cout << setprecision(3);
    cout<<"Mean = "<<mean<<endl;
    source.close();
    source.open("score.txt") ;
   while(getline(source,textline))
	{
		temp+=pow(atof(textline.c_str())-mean,2);
	}
    SD=sqrt(temp/num);
    cout<<"Standard deviation = "<<SD<<endl;
    source.close();
	return 0;
}
