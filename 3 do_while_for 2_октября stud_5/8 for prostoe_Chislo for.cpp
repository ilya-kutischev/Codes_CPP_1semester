// ������ 8. ����������, �������� �� ����������� ����� �������.
#include <iostream>
using namespace std;
int main(){
 int n;
 bool flag;
 do{
  cout<<" vvedi n "<<endl;
  cin>>n;
 }while (n == 0 || n < 0);
  cout<<"n= "<<n<<endl;
 int k = n / 2;
 flag = true;
 for(int i = 2;i <= k;i++){
    if(n % i == 0){flag = false; break;}
 }
 if (flag) cout<<"Yes"<<endl;
 else cout<<"No"<<endl;
}
