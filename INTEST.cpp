    #include <iostream>
    using namespace std;
     
    int main() {
    int count=0;
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {int l;
    	cin>>l;
    	if (l%k==0)
    	count++;}
    	cout<<count;
    	return 0;
     
    } 
