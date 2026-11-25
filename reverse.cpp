#include<iostream>

int main()

{
    int number;
    int lastdigit;
    std::cout << "enter the number\n";
    std::cin >> number;
    
    int reverse = 0;
  

    while(number != 0)
    {
        lastdigit = number % 10;
        reverse = reverse * 10 + lastdigit;
        number = number / 10;
    }
    
       std::cout << "the reversed number is" << reverse << std::endl;
    


    
        return 0 ;



}