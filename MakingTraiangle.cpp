//#include<iostream>
//
//using namespace std;
//
//int main() {
//	
//	int n = 15;
//	int i,j;
//	for(i= 1; i<= n; i++) {
//		for(int j = n; j >= 1; j--) {
//			if(i>= j) {
//				cout << " *";
//			}else {
//				cout << " ";
//			}
//		}
//		cout << endl;
//	}
//} 


#include <iostream>


using namespace std;

char getUserChoice() {
    char choice;
    cout << "Welcome, Please choose a following option: " << endl;
    cout << endl;
    cout << "r - rock , p - paper , s - scissors" << endl;
    cout << endl;
    cin >> choice;
    
    while(choice!= 'r' && choice!= 'p' && choice!= 's')
    {
    	cout << "That was not a option, Please choose a following option (r,p,s)" << endl;
	}
	return choice;
}

int main()
{
    getUserChoice();
}


