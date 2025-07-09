// #include<iostream>                        //Even and Odd Number
// int main(){
//     int n;
//     std::cout<<"Enter the number: ";
//     std::cin>>n;
    
//         if(n%2==0){
//             std::cout<<"The number is Even";
//         }
//         else{
//             std::cout<<"The number is odd";
//          }
//     return 0;
// }
// #include <iostream>

// int main() {
// int a;
// std::cout<< "Enter the Number:" <<"\n";
// std::cin>>a;
// if(a>0)
// std::cout<<"Positive"<<"\n";                 //to cheak if number is positive negetive and zero
// else if(a<0)
// std::cout<<"Negetive"<<"\n";
// else
// std::cout<<"Zero"<<"\n";
//     return 0;
// }
// #include<iostream>
// int main(){
// std::string Fullname;
// std::cout<<"Enter Your Name: ";
// std::getline(std::cin,Fullname);
// std::cout<<Fullname<<"\n";
// int age;
// std::cout<<"Enter Your Age: ";
// std::cin>>age;
// std::cout<<age<<"\n";
// int ageinmonths=age*12;
// std::cout<<ageinmonths<<"\n";
// std::cout<<"Hello! " << Fullname << ", You Are "<< ageinmonths <<" months old."<<"\n";
// return 0;}
//Write a program that:

// Takes 2 numbers as input

// Outputs:

// Their sum

// Difference

// Product

// Quotient (as float)

// Remainder

// Checks if both numbers are equal or not using ==
// #include<iostream>
// int main(){
//     int a;
//     int b;
//     float c=(float)a/b;
    
//     std::cout<<"Enter The Number1: "<<"\n";
//     std::cin>>a;
//     std::cout<<"Enter The Number2: "<<"\n";
//     std::cin>>b;
//     std::cout<<a+b<<"\n" ;
//     std::cout<<a-b<<"\n";
//     std::cout<<a*b<<"\n";
//     std::cout<<c<<"\n";
//     std::cout<<a%b<<"\n";
    
//     if (a == b) {
//         std::cout << "The numbers are equal.\n";
//     } else {
//         std::cout << "The numbers are NOT equal.\n";
//     }


//     return 0;
// }
// Write a program that:
// Asks the user: “How many times should I print your name? 
// Asks the user:  “What is your name?”    
//Then prints the name that many times, one per line.
// #include<iostream>
//  int main(){  
//     int n;                                                                                        
//  std::cout<<"How Many Times Should i Print your Name ";
//  std::cin>>n;
//  std::cout<<"What is your name ";
//  std::string name;
//  std::cin.ignore();
//  std::getline(std::cin,name);
//  for(int i=1;i<=n;i++){
//     std::cout<<name<<"\n";}                                                                    
//     return 0;
// }

//using While Loop;
// #include<iostream>
//  int main(){  
//     int n;                                                                                        
//  std::cout<<"How Many Times Should i Print your Name: ";
//  std::cin>>n;
//  std::cout<<"What is your name: ";
//  std::string name;
//  std::cin.ignore();
//  std::getline(std::cin,name);
//  int i = 1;
//  while(i<=n){
//    std::cout<<name<<"\n";
//    i++;
//  }                                                                   
//  return 0;
// }
//Using do-while;
// #include<iostream>
//  int main(){  
//     int n;                                                                                        
//  std::cout<<"How Many Times Should i Print your Name: ";
//  std::cin>>n;
//  std::cout<<"What is your name: ";
//  std::string name;
//  std::cin.ignore();
//  std::getline(std::cin,name);
//  int i = 1;

//  do{
//    std::cout<<name<<"\n";
//    i++;
//  } while(i<=n);                                                                  
//  return 0;
// }


// Input an integer x and print:

// Its double using <<
// Its half using >>
// Its NOT value using ~

// #include<iostream>                                 //Bitwise Operator                               
// int main(){
//    int a;
//    std::cout<<"Enter The Number: ";
//    std::cin>>a;
//    std::cout<<(a<<1)<<"\n";

//    std::cout<<(a>>1)<<"\n";
//    std::cout<<(~a)<<"\n";
//     return 0;
// }
// #include<iostream>
// int main(){                                               #include<cmath> import this to use sqrt
// int n;
// std::cout<<"Enter the Number: ";
// std::cin>>n;

// for(int i=2;i<=n;i++){
//     bool Isprime=true;
//     for(int j=2;j<i;j++){                              for(int j = 2; j <= std::sqrt(i); j++) for larger number just use sqrt
//         if(i%j==0){
//         Isprime=false;
//         break;
//     }
//   }
// if(!Isprime)
//  continue;    
// std::cout<<i<<" ";
// }


// return 0;
// }
// #include<iostream>                             //Leap Year!!!!!!!
// int main(){
//     int n;
//     std::cout<<"Enter The Number: ";
//     std::cin>>n;

//     if((n % 4 == 0 && n % 100 != 0)||(n % 400 == 0)){
//         std::cout<<"Leap Year! ";
//     }
//     else{
//         std::cout<<"Not a Leap Year! ";
//     }
//     return 0;
// }
// #include<iostream>                         //Factorial 
// int main(){
//     int n;
//   long long fact=1;

//     std::cout<<"Enter the Number: ";
//     std::cin>>n;

//     if(fact<0){
//         std::cout<<"Negetive Number doesn't have factorial ";
//         }
//     else{
//         for(int i=1;i<=n;i++){
//         fact*=i;}
//         std::cout<<"Factorial of"<< n <<"is: " << fact <<"\n";
//     }
    
//     return 0;
// }
// #include<iostream>                               //fibonacci series
// int main(){
//     int n;
//     int a=0 , b=1, temp ;

// std::cout<<"Enter the Number: ";
// std::cin>>n;

// for(int i = 1;i<=n;i++){
    
// std::cout<<a<<" ";    
//     temp=a+b;
//     a=b;
//     b=temp;

// }
//     return 0;
// }
// #include<iostream>                                                          //Palindrome Number
// int main(){
//     int n,originalnum,reversednum=0,digit;
//     std::cout<<"Enter the number: ";
//     std::cin>>n;
//     originalnum=n;
//     while(n!=0){
//         digit=n%10;
//         reversednum=reversednum * 10 + digit;
//         n/=10;
//     }
//     if(originalnum == reversednum){
//         std::cout<<"The Number is a palindrome";
//     }
//     else{
//         std::cout<<"Number is not a palindrome";
//     }

//     return 0;
// }
// #include<iostream>                                              //Palindrome String
//   #include<string.h>                                            //this include is not generally require as string is included in io stream library but,in larger programs if we dont include io stream at industy level we have to include string
// int main(){
//     std::string str, revString="";
//     std::cout<<"Enter The String: ";
//     std::cin>>str;

//     for(int i = str.length()-1;i>=0;i--){
//         revString+=str[i];
//     }
//     if(revString==str){
//         std::cout<<"The string is a palindrome";
//     }
//     else{
//         std::cout<<"The string is not a palindrome";
//     }
//     return 0;
// }
// #include<iostream>                                                              //Armstrong Number Program
// #include<string>
// int power(int base,int exp){
//     int res=1;
//     for(int i = 1;i<=exp;i++){
//         res*=base;

//     }
//     return res;
// }

// int main(){
//     int n,originalnum,remainder,result=0;
//     std::cout<<"Enter the Number: ";
//     std::cin>>n;
//     int count = std::to_string(n).length();                                     //int count = floor(log10(n))+1; doesnt acqurretly tell for 3 and 2 digit number 

//     originalnum=n;

//     while(n!=0){
//         remainder=n%10;
//         result+=power(remainder,count);                                          // line result+=std::pow(remainder,count) gives approximation error it give 5^3 as 125.0000000001 So yes — 5³ should be 125, but when you use std::pow(),
//         n/=10;                                                                          //you're entering the world of floating-point math with tiny rounding errors — and computers aren't perfect at representing real-world decimals. n/=10;
//     }
//     if(result==originalnum){
//         std::cout<<"The Number is Armstrong";
//     }
//     else{
//         std::cout<<"The Number is not Armstrong";
//     }
//      return 0;
// }
