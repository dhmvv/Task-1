//CS112_A2_T1_S13_20220869.cpp

/*
 File: CS112_A2_T1_S13_20220869.cpp
 Purpose: Rail-fence Cipher code
 Author: Abdulrahman mohamed mohamed (S13)
 Emails: a8edris@gmail.com
 IDs: 20220869 (Question 10)
*/

#include <iostream>
using namespace std;

int main() 
{
    string plain , cipher , cipher_odd;
    cin>>plain;
    int n = plain.size();
    for(int i = 0; i < n; i++){
      if(i % 2 == 0) cipher += plain[i];// make sure that i is equal or not 
      else cipher_odd += plain[i]; // when the index i is odd. In this case, the character at that index in plain is appended to the cipher_odd string
    }
    cipher.append(cipher_odd);
    cout<<cipher;
    
    return 0;
}