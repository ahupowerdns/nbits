#include "sodium.h"
#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char**argv)
{
  unsigned char hash[crypto_shorthash_BYTES];
  unsigned char key[crypto_shorthash_KEYBYTES];


  const unsigned char* shortData=(unsigned char*)argv[1];

  cout<<"Bytes: "<<crypto_shorthash_BYTES<<endl;
  memset(key, 0, sizeof(key));
  memcpy(key, argv[2], strlen(argv[2]));
  
  //  crypto_shorthash_keybytes(key);
  crypto_shorthash(hash, (unsigned char*)shortData, strlen((char*)shortData), key);

  for(unsigned int n=0; n < sizeof(hash); ++n)
    cout << (int)hash[n]<<" ";

  cout<<endl;
  
}
