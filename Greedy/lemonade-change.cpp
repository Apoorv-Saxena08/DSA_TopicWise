#include <iostream>
using namespace std;
int main(){ int n; cin>>n; int bills[100]; for(int i=0;i<n;i++)cin>>bills[i]; int five=0, ten=0; for(int i=0;i<n;i++){ if(bills[i]==5) five++; else if(bills[i]==10){ if(five==0){ cout<<"No"; return 0;} five--; ten++; } else { if(ten>0){ ten--; five--; if(five<0){cout<<"No";return 0;} } else { five-=3; if(five<0){cout<<"No";return 0;} } } } cout<<"Yes"; return 0;}
