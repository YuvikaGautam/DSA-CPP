

#include <windows.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
char inp, y , n , Y , N;
string name, gtkey, age;
   cout<< " \t\t WELCOME TO CHATBOX \n\n";
   cout<< " To continue the program type 'Y' and to end the program type 'N' ";
   cout<< " --> ";
   cin>>inp;
   if(inp == 'y' || inp == 'Y')
   {
       cout<< " \n welcome!";

   }
   else
   {
       cout<< " \n Thanks for Coming";
       return 0;
   }
   
   system ("cls");
   if(gtkey != "bi")
   {
       cout<< " \t HELLO USER \n";
       cin>> gtkey;
       cout<< " What is your Name \n";
       cin>> name;
       cout<< name << " How you Doing? \n";
       cin>> gtkey;
       cout<< "What is your age? \n";
       cin>> age;
       
       cout<< " Great to Have you Here \n";
       cout<< " BYE BYE TAKE CARE \n";
        

   }
   return 0; 
}