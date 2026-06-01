#include<iostream>
using namespace std;
 void pattern1(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<"* ";
        }
        cout<<endl;
 }
}
void pattern2(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void patterns3(int n){
    for(int i =1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    
    }
}
void patterns4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";

        }
        cout<<endl;
    }
}
void patterns5(int n){
    for(int i=n;i>=0;i--){
        for(int j=i;j>=0;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void patterns6(int n){
    for(int i=n;i>=0;i--){
        for(int j=1;j<=i;j++){
            cout<<j <<"";
        }
        cout<<endl;
    }
}
void patterns7(int n){
    for(int i=0;i<n;i++){
for (int j=0;j<n-i-1;j++)
{
    cout<<" ";
}
for (int k =0; k<2*i+1; k++)
{
    cout<<"*";
}
for (int l =0; l<n-i-1; l++ )
{
    cout<<" ";
}
    cout<<endl;
}
}
void patterns8(int n){
for(int i=0;i<n;i++){
for (int j=0;j<i;j++)
{
    cout<<" ";
}
for (int k =0; k<2*n-2*i-1; k++)
{
    cout<<"*";
}
for (int l =0; l<i; l++ )
{
    cout<<" ";
}
    cout<<endl;
}
}
void patterns9(int n){

for(int i=1;i<=2*n-1;i++){
int st=i;
if(i>n) st=2*n-i;
for(int j=1;j<=st;j++){
    cout<<"*";
}
cout<<endl;
}

}
void patterns10(int n){
for(int i=0;i<=n;i++){
    for(int j=0;j<=i;j++){
        if((i+j)%2==0)cout<<"1";
        else cout<<"0";
    }
cout<<endl;
}

}
void patterns11(int n){
    for(int i=1;i<=n;i++){
// numbers
   int st=2*(n-i); 
for(int j=1;j<=i;j++){
    cout<<j;
}

// space
for(int k=1;k<st;k++){
    cout<<" ";
 }

// numbers
   
for(int j=i;j>=1;j--){
    cout<<j;
}
    
    cout<<endl;
    st=st-2;
}
}
void patterns12(int n){
int num=1;
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<num<<" ";
        num++;
    }cout<<endl;
}

}
void patterns13(int n){
    for(int i=1;i<=n;i++){
        for(char ch='A';ch<'A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void patterns14(int n){
    for(int i=n;i>=1;i--){
        for(char ch='A';ch<'A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    // pattern1(n);
    // pattern2(n);
    // patterns3(n);
    // patterns4(n);
    // patterns5(n);
    // patterns6(n);
    // patterns7(n);
    // patterns8(n);
    // patterns10(n);
        // patterns11(n);
        // patterns12(n);    
        // patterns13(n);    
        patterns14(n);
        return 0;

}
