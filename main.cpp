#include <iostream>
#include <math.h>

using namespace std;

double f(double x){
    double t;
    t=pow(x,2)*cos(x)+1;
    return t;
}


int main()
{
    double a,b,x,err;

    do{
        cout<<"inserire estremi"<<endl;
        cin>>a;
        cin>>b;
    }while(f(a)*f(b)>=0);



    do{
        x=(a+b)/2;
        if(f(x)==0.0)
            cout<<x<<endl;
        else
        {
            if(f(x)*f(b)<0)
                a=x;
            else
                b=x;
            err=abs(b-a)/2;
        }
    }while(err>=1e-6);

    cout<<x<<endl;

    return 0;
}
