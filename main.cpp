
/* If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include <iostream>

using namespace std;

int main(){
bool loop=true;
int sum=0;
int num;
while(loop==true){
    cout << "Euler Problem 1" << endl;
    cout << "Adding up all multiples of 5 and 3  up to 1000" << endl;
    int fives = 5;
    int threes = 3;

        if ((num % fives ==0) && (num % threes==0)){
            sum=sum+num;
            cout<<num<<endl;
        }
        else if (num % fives==0) {
            sum = sum+num;
            cout << num << endl;
        }
        else if (num % threes == 0){
            sum=sum+num;
            cout<< num << endl;
        }
    }

    cout<<"sum is" <<endl;
    cout<<sum<<endl;
    cout << "Again?"<<endl;
    string answer;
    cin>>answer;
    if (answer=="no"){
        loop=false;
    }
}
    return 0;
}
