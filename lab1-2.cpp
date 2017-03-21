#include <iostream>
using namespace std;
int main(){
 int input;
 cin >> input;
 cout << input <<" ";
	while(input!=1){
    		
		if(input%2==1){
		input = input*3+1;
		cout << input << " ";}

		if(input%2==0){
  		input = input/2;
		cout << input << " ";}
	}
return 0;
} 
