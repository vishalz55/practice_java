//my code
//using global parameter 

#include <iostream>
using namespace std;

int summ,num1,num2;


// he chukich ahe ka br tr bhava summ nahi krta apn direct kru skto kay tr return 
//fun sobbat always bhava use krave kay tr nanan return 0
/*
int sum(){
    summ = num1 + num2;
    return 0;

}
*/

int sum(){
    return num1 + num2;
};
int main()
{
    cout << "Enter the number one: " << endl;
    cin >> num1;
    cout << "Enter the number two: " << endl;
    cin >> num2;
    summ = sum(); //function la call kra store kra
    cout<<"sum is "<<summ;
}




