#include <iostream>
#include <algorithm>
#include <numeric>
#include <cmath>

using namespace std;

int factorial(int n){
if(n==1){
return
    1;
}
else{

return
    n*factorial(n-1);

}




}
int main()
{

/*
for(int r=0; r<1000000; r++){

int choice;
cout<<"hello user 7abibi press 1 for encrypt and 2 for decrypt"<<endl;
cin >> choice;


if(choice==1)

    {


    char ch;
    int Index;
    int value;
    char arr [26]  = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    cout<<"enter the char you want to encrypt"<<endl;
    cin>>ch;


for (int i = 0; i < 26; i++)
{
     if (ch == arr[i])
     {
         Index = i;
     }
}

value=(5*Index+8)%26;

cout<<"the encrypted letter is =" <<arr[value]<<endl;

    }
else if(choice==2){


    char ch1;
    int Index1;
    int value1;
    char arr1 [26]  = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    cout<<"enter the char you want to decrypt"<<endl;
    cin>>ch1;


for (int j= 0; j < 26; j++)
{
     if (ch1 == arr1[j])
     {
         Index1 = j;
     }
}

value1=(21*Index1-8)%26;

cout<<"the decrypted letter is =" <<arr1[value1]<<endl;



}

}

    return 0;

*/
cout<<factorial(3)<<endl;


}
