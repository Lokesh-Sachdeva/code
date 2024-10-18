// #include<iostream>
// #define f(x,y) ((y*y-x*x)/(y*y+x*x))
// using namespace std;
// int main(){
//     float x0,y0,xn,yn,k,k1,k2,k3,k4,h;
//     int i,n;
//     cout<<"enter initial condition"<<endl;
//     cout<<"x0=";
//     cin>>x0;
//     cout<<"y0=";
//     cin>>y0;
//     cout<<"enter calculation point xn=";
//     cin>>xn;
//     cout<<"enter number of steps:";
//     cin>>n;
//     h=(xn-x0)/n;
//     cout <<"\n x0 \t y0 \t yn \n";
//     cout<<"___________________________\n";
//     for(i=0;i<n;i++){
//         k1=n*f(x0,y0);
//         k2=n*f(x0+n/2,y0+k1/2);
//         k3=n*f(x0+n/2,y0+k2/2);
//         k3=n*f(x0+n,y0+k3);
//         k=(k1+2*k2+2*k3+k4)/6;
//         yn=y0+k;
//         cout<<x0<<"\t"<<y0<<"\t"<<yn<<endl;
//         x0=xo+n;
//         y0=yn;
//     }
//     cout<<"\n value of y at x="<<xn<<"is"<<yn;
//     cout<<"\n LOKESH SACHDEVA \n 09014802723"<<endl;
//     return 0;
// }
#include<iostream>
#include<cmath> 
#define f(x,y) ((y*y-x*x)/(y*y+x*x)) 
using namespace std;

int main() {
    float x0, y0, xn, yn, k, k1, k2, k3, k4, h;
    int i, n;
    
    cout << "Enter initial conditions:" << endl;
    cout << "x0 = "; cin >> x0;
    cout << "y0 = "; cin >> y0;
    cout << "Enter calculation point xn = "; cin >> xn;
    cout << "Enter number of steps: "; cin >> n;


    h = (xn - x0) / n;

    cout << "\n x0 \t\t y0 \t\t yn \n";
    cout << "______________________________\n";


    for (i = 0; i < n; i++) {
        k1 = h * f(x0, y0);
        k2 = h * f(x0 + h / 2, y0 + k1 / 2);
        k3 = h * f(x0 + h / 2, y0 + k2 / 2);
        k4 = h * f(x0 + h, y0 + k3);
        
    
        k = (k1 + 2 * k2 + 2 * k3 + k4) / 6;
        
        yn = y0 + k;
        

        cout << x0 << "\t" << y0 << "\t" << yn << endl;
        x0 = x0 + h;
        y0 = yn;
    }
    

    cout << "\nValue of y at x = " << xn << " is " << yn << endl;
    cout << "\nLOKESH SACHDEVA \n09014802723" << endl;

    return 0;
}
