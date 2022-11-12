#include <iostream>
 
using namespace std;

int main(){
  string fundamental,trigo,operation;
  double x;
   int num1,num2;
  char op;
   double result;
    cout<<"fundamentaloperation (or) trigonometricoperation :";
    cin>>operation;
  if(operation==fundamental){
  
   
  cout<<"Number 1:";
  cin>>num1;
  cout<<"math operator:";
  cin>>op;
  cout<<"Number 2:";
  cin>>num2;
  if(op == '+'){
    result = num1+num2;
  }else if(op =='-'){
    result = num1-num2;
  }else if(op =='*'){
    result=num1*num2;
  }else if(op =='/'){
    result=num1/num2;
  }else if(op =='%'){
      result= num1%num2;
  
  }else {
    cout<<"This is an invalid operator";
  }
  cout<<result;
  }
  else{
      cout<<"Enter the value of the radian:";  //enter the value of only  radians no need to mention ratio
      cin>>x ; 
      float a,b;
      a = x - ( (x*x*x)/6) + ((x*x*x*x*x)/120) - ((x*x*x*x*x*x*x)/5040) + ((x*x*x*x*x*x*x*x*x)/362880);
      b =  1 - (( x*x/2)) + (( x*x*x*x/24)) - (( x*x*x*x*x*x)/720) + ((x*x*x*x*x*x*x*x)/40320);
      
      cout<<"sin("<<x<<"):"<<a<<endl;
      cout<<"cos("<<x<<"):"<< b<<endl;
      cout<<"tan("<<x<<"):"<< (a/b)<<endl;
      cout<<"cosec("<<x<<"):"<<(1/a)<<endl;
      cout<<"sec("<<x<<"):"<<(1/b)<<endl;
      cout<<"cot("<<x<<"):"<<(b/a)<<endl;

       
      
  }
   return 0;
}
