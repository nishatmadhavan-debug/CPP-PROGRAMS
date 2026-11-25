#include<iostream>
int main()
{

int number,n,result,count,c,lastdigit;
count = 0;
std::cout << "enter the number:\n";
std::cin >> number;
n = number;
result = 0;

if(n == 0)
{
std::cout << "the number is zero\n";
}

while(n>0)
{
    n = n/ 10;
    count++;
}
std::cout << "the size of the number is " << count << std::endl;
c = count;
n = number;
std::cout << n;
while(n>0)
{
lastdigit = n % 10;
int power = 1;
for(int i = 0; i < c; i++)
{
power = power * lastdigit;
}
result = result + power;
n = n / 10;
c = count;
}
std::cout << "the result is " << result << std::endl;
if(number == result)

{


    std::cout << "the number is armstrong\n";
}
else 

std::cout << "the number is not armstrong\n";

    return 0;
}