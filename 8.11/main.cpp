(a)
int*number=nullptr;
cout<<number<<endl;
(b)
double*realPtr;
long*integerPtr;
integerPtr=&realPtr;
(c)
int*x,*y;
x=y;
(d)
char s[]="this is a character array";
for(;*s!='\0';++s)
    cout<<*sPtr<<''
(e)
short *numPtr,result;
void *gengricPtr=numPtr;
resul=*static_cast_<short*>(gengericPtr+7);
(f)
double x=19.34;
double xPtr=&x;
cout<<*xPtr<<endl;

