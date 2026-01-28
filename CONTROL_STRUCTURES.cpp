  #include<iostream>
  using namespace std;
  int main(){

    //****CONTROL STRUCTURES**** */

    ***IF_ELSE ****** */
    int marks;
    cout<<"enter marks"<<endl;
    cin>>marks;
    
    if(marks>=90 && marks<=100)
    {
        cout<<"Grade A";
    }
    else if(marks>=75 && marks<=89)
    {
        cout<<"Grade B";
    }
    else if(marks>=60 && marks<=74)
    {
        cout<<"Grade C";
    }
    else if(marks>=40 && marks<=59){
      cout<<"Grade D";
    }
    
    else if(marks<40 && marks>0)
    {
        cout<<"FAIL";
      }
    
else 
            cout<<"INVALID MARKS";
        


//***SWITCH STATEMENT***** */
int a;
int b;
cout<<"enter a"<<endl;
cin>>a;
cout<<"enter b"<<endl;
cin>>b;
char op;
cout<<"enter operation"<<endl;
cin>>op;

switch(op){
case '+':
cout<<a+b<<endl;
break;

case '-':
cout<<""<<a-b<<endl;
break;

case '*':
cout<<a*b<<endl;
break;

case '/':
if(b==0)
cout<<"division by zero is not allowed"<<endl;
else 
cout<< (float)a/b<<endl;
break;
default :
cout<<"invalid operator"<<endl;
}

cout<<"DONE WITH SWITCH CASES";

    return 0;
  }
