    #include <iostream>
    #include <iomanip>
    using namespace std;
     
    int main() {
    int x;
    double y;
    cin>>x;
    cin>>y;
    if (x%5!=0)
    cout<<fixed<<setprecision(2)<<y<<"\n";
    if (x%5==0)
    {
    	if (y>x+0.50)
    	cout<<fixed<<setprecision(2)<<y-x-0.50<<"\n";
    	if (y<x+0.50)
    	cout<<fixed<<setprecision(2)<<y<<endl;
    	return 0;
    }
    } 
