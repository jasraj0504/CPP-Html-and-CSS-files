// #include<iostream>                 //Simple Function call in main function 
// #include<cmath>                //for squareroot
// #include<iomanip>                                          // For Decimal Precision........
// int sum(int a,int b){
//     return a+b;
// }
// double squareroot(int c ){
//     return std::sqrt(c);
// }

// int main(){
// int x;
// int y;
// std::cout<<"Enter the Numbers: ";
// std::cin>>x;
// std::cin>>y;

// int result1=sum(x,y);
// float result2=squareroot(x);
// float result3=squareroot(y);
// std::cout<<"Sum of the numbers = "<<result1<<"\n";          //This is syntax to take precise decimal places.()
// std::cout<<std::fixed<<std::setprecision(3)<<"The squareroot of First number is: "<< result2<<"\n";
// std::cout<<std::fixed<<std::setprecision(3)<<"The squareroot of Second number is: "<< result3<<"\n";
// return 0;
// }
 //                                               // Now,there are 2 types of function 1st) who doesn't affect the value in the main function and 2nd) which affects the value initialized in main program
//
  //                                              // 1st) Call by Value: You send a duplicate key 🔑 — if it breaks, you're fine.
//
  //                                              // 2nd) Call by Reference: You send the original key 🔐 — if it bends, you're locked out.
//  #include<iostream>
//   void ModifyByValue(int x){x = 1000; }       //yellow highlight under x is compiler telling x is not returning in function so its a waste
//   void ModifiedByReference(int &x){x=999;}    //& is the refernce symbol
  
// int main(){
// int a=10,b=10;
// ModifyByValue(a);
// ModifiedByReference(b);
// std::cout<<"Modified by Value is not changing the Value as a = "<<a<< " so if u want to write a program in which the main doesn't get affected Call by value is better "<<"\n";
// std::cout<<"Modified by Refernce is  changing the value as b = "<<b<< " so if u want to write a program in which the main  get affected Call by Reference is better "<<"\n";
// return 0;

//   }
// Using Functions Overloading i.e.., making same functions with different parameters
// #include<iostream>
// #include<iomanip>
// int add(int a ,int b){
//   return a+b;
// }
// float add( float a,float b){
//   return a+b;
// }
// int add(int a,int b,int c){
//   return a+b+c;
// }
// int main(){
// std::cout<<add(1,2)<<"\n";
// std::cout<<std::fixed<<std::setprecision(2);
// std::cout<<add(2.5f,1.5f)<<"\n";
// std::cout<<add(1,2,3)<<"\n";
// return 0;
// // }
// #include<iostream>               
// #include<iomanip>

// float area(float length,float breadth){
// return length*breadth;
// }
// float area(float side){
//   return side*side;
    
// }
// float area(char shape,float radius){
// return 3.141 *radius;
// }
// int main(){
// float l=2,b=3;
// float s=5;
// float r=4;
// std::cout<<std::fixed<<std::setprecision(3);
// std::cout<<"Rectangle Area: "<<area(l,b)<<"\n";
// std::cout<<"Square Area: "<<area(s)<<"\n";
// std::cout<<"Circle: "<<area('c',r)<<"\n";
// return 0;
// }

// An inline function tells the compiler:
// “Instead of jumping to the function code, just paste its body right here where it’s called.”
// ⚠️ Important Notes:
// Inline is just a suggestion — the compiler may or may not actually do it.
// Works best for very small functions.
// Don’t use with loops, recursion, or large code blocks.

// #include<iostream>
// inline int cube(int x){
//   return x * x * x;
// }
// int main(){
//   int a;
//   std::cout<<"Enter the number: "<<"\n";
//   std::cin>>a;
//   std::cout<<cube(a)<<"\n";
//   return 0;
// }

//factorial Using Recursion
// #include<iostream>
// int fact(int n){
//                            this is how the recursion is working      // factorial(3)
//                                                                     // = 3 * factorial(2)
//                                                                   // = 3 * (2 * factorial(1))
//                                                                 // = 3 * (2 * 1)
//                                                               // = 6

//   if(n==0 || n==1)
//   return 1;
//   else
//   return n*fact(n-1);
// }
// int main(){
// int num;
// std::cout<<"Enter the Number: "<<"\n";
// std::cin>>num;

// std::cout<<"Factorial of "<<num<< " is "<<fact(num)<<"\n";
//   return 0;
// }
#//include<iostream>                        //Fibonacci series using function recursion meathod
// int fibo(int n){
//   if(n==0)
//   return 0;
//   else if(n==1)
//   return 1;
//   else
//   return fibo(n-1)+fibo(n-2);
// }
// int main(){
//   int num;
//   std::cout<<"Enter the number: "<<"\n";
//   std::cin>>num;
// for(int i=0;i<=num;i++){
//   std::cout<<fibo(i)<<" ";
// }
// std::cout<<"\n";
//   //std::cout<<"Fibonacci series for: "<<num<<" is "<<fibo(num)<<"\n"; // this only gives the last value of n not the series
//   return 0;
// }

//                                                        // Sum of digits using recursion:-

// #include<iostream>
// int sumofdigits(int n){
//   if(n==0)
//   return 0;
//   else if(n==1)
//   return 1;
//   else 
//   return(n%10)+sumofdigits(n/10);
// } //                                                        //4 + sumOfDigits(123) that is how it is working
//   //                                                      // 3 + sumOfDigits(12)
//   //                                                      // 2 + sumOfDigits(1)
//   //                                                     // 1 + sumOfDigits(0)
//   //                                                       // → 0
// int main(){
//   int num;
//   std::cout<<"Enter the Number: "<<"\n";
//   std::cin>>num;

//   std::cout<<"Sum of Digits is: "<<sumofdigits(num)<<"\n";
//   return 0;
// }

//                                             Reversing the Number using Recursion

#include<iostream>
int reverse(int n,int rev=0){
if(n==0)
return rev;
else
return reverse(n/10 , rev*10+(n%10));

}
int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    std::cout << "Reversed number: " << reverse(num) << "\n";
    return 0;
}