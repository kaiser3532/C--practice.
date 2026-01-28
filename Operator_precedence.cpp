//**precedence rule*** */
int a=3, b=4;
int c = (a*5)+b;//multiplication first happen thn addition
cout<<c<<endl;

 /*****associativity rule*** */
 //associativity applies when precedence is same of operators..

 int d=(((((a*5)+b)-45))+87);// LEFT TO RIGHT SE SOLVE HOGA
 cout<<d;
