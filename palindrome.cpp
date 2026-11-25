#include<iostream>

int main()

{
    int number,original_number;
    int lastdigit;
    std::cout << "enter the number\n";
    std::cin >> number;
    original_number = number;
    
    int reverse = 0;
  

    while(number != 0)
    {
        lastdigit = number % 10;
        reverse = reverse * 10 + lastdigit;
        number = number / 10;
    }
    
       std::cout << "the reversed number is" << reverse << std::endl;
        
    if(original_number == reverse)
    {
        std::cout << "the number is palindrome\n";
    }

    else if(original_number != reverse)
    {

std::cout << "the number is not palindrome\n";

    }
    
        return 0 ;

}