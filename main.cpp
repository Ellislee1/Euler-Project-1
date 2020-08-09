
/* If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include <iostream>

int main(){
bool loop=true;
int sum=0;
int num;
while(loop==true){
    std::cout << "Euler Problem 1" << std::endl;
    std::cout << "Adding up all multiples of 5 and 3  up to 1000" << std::endl;
    int fives = 5;
    int threes = 3;

        if ((num % fives ==0) && (num % threes==0)){
            sum=sum+num;
            std::cout<<num<<std::endl;
        }
        else if (num % fives==0) {
            sum = sum+num;
            std::cout << num << std::endl;
        }
        else if (num % threes == 0){
            sum=sum+num;
            std::cout<< num << std::endl;
        }
    }

    std::cout<<"sum is" <<std::endl;
    std::cout<<sum<<std::endl;
    std::cout << "Again?"<<std::endl;
    string answer;
    std::cin>>answer;
    if (answer=="no"){
        loop=false;
    }
}
    return 0;
}
