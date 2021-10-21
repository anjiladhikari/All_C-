#include <iostream>
#include <cstring>

using namespace std;
class string_add
{
private:
    char *string1;
    char *string2;

public:
    string_add (char* str1 , char* str2)
    {

        string1 = new char[30] ;
        string2 = new char[40] ;
        strcpy(string1 , str1);
        strcpy(string2 , str2);
    }
      int i , j;
    char join( )// This loop would concatenate the string str2 at the end of str1
    {

    // calculate the length of string s1
    // and store it in i
    for(i = 0; string1[i] != '\0'; ++i);

    for(j = 0; string2[j] != '\0'; ++j, ++i)
    {
        string1[i] = string2[j];
    }

    string1[i] = '\0';

    }
    display()
    {

         cout<<string1 ;
    }

};

int main()
{
    string_add str3( "Engineers are"    , " Creatures of logic");

    str3.join();
    str3.display();

}






