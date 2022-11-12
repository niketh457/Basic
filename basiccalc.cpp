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
      cout<<"Enter the trigonometric ratio:";  //enter the  trigonometric ratio using a space (eg. sin 2) 
      cin>>trigo>>x ; 
      float a,b;
      a = x - ( (x*x*x)/6) + ((x*x*x*x*x)/120) - ((x*x*x*x*x*x*x)/5040) + ((x*x*x*x*x*x*x*x*x)/362880);
      b =  1 - (( x*x/2)) + (( x*x*x*x/24)) - (( x*x*x*x*x*x)/720) + ((x*x*x*x*x*x*x*x)/40320);
      if (trigo == "sin")
      {
        cout<<"sin("<<x<<"):"<<a<<endl;
      }else if (trigo == "cos")
      {
        cout<<"cos("<<x<<"):"<< b<<endl;
      }else if (trigo == "tan")
      {
        cout<<"tan("<<x<<"):"<< (a/b)<<endl;
      }else if (trigo =="cosec"){
        cout<<"cosec("<<x<<"):"<<(1/a)<<endl;
      }else if (trigo =="sec")
      {
        cout<<"sec("<<x<<"):"<<(1/b)<<endl;
      }else if (trigo == "cot")
      {
        cout<<"cot("<<x<<"):"<<(b/a)<<endl;
      }else
      {
        cout<<"Invalid trigonometric operation";
      }
   }
   return 0;
}
