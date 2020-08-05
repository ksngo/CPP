#include <string>
#include <iostream>

using namespace std;

int main()
{
    string istring("hello");
    cout<<istring<<endl;

    // (1) conventional container insert constructor **********
    // insert(iterator, value)
    
    istring.insert(istring.end(),'!');
    cout<<istring<<endl; // hello!

    // (2) additional string constructor*************************
    // insert(index, args)
    // args => string

    istring.insert(5, "hello");
    cout<<istring<<endl; //hellohello!

    // insert(index, args)
    // args => str, pos, len
    // add str , starting from index of str and total len 

    istring.insert(5, "wor$$", 3, 2);
    cout<<istring<<endl; //hello$$hello!

    //insert(index, args)
    // args => cp, len
    // add len characters from char array pointed to by cp 

    char ichar[] = "Character";
    istring.insert(5,ichar, 4);
    cout<<istring<<endl; //helloChar$$hello!

    //insert(index, args)
    //args = > n ,c
    // n copies of character c

    istring.insert(5, 3 , '*');
    cout<<istring<<endl; //hello***Char$$hello!

    //insert(iter, args)
    //args => n, c

    istring.insert(istring.begin(), 3, '%');
    cout<<istring<<endl; //%%%hello***Char$$hello!

    //insert(iter, args)
    //args => b , e
    // characters in the range iterator b and iterator e

    string sample("Singapore");

    istring.insert(istring.begin(), sample.begin(), sample.begin() +4);
    cout<<istring<<endl; //Sing%%%hello***Char$$hello!

    //insert(iter, args)
    //args = > initialiser list, comma seperated list of characters enclosed in braces

    istring.insert(istring.begin(), {'a','b','c'});
    cout<<istring<<endl; //abcSing%%%hello***Char$$hello!

    //(3) conventional container erase(iterator)**********************
    // removes element denoted by iterator

    istring.erase(istring.begin());
    cout<<istring<<endl; //bcSing%%%hello***Char$$hello!

    // erase(b, e)
    // range between iterators b & e

    istring.erase(istring.begin(), istring.begin()+2);
    cout<<istring<<endl; //Sing%%%hello***Char$$hello!

    //(4) additional erase constructor for string******************************
    // erase(pos, len)
    // removes len characters starting at position pos
    istring.erase(0,4);
    cout<<istring<<endl; //%%%hello***Char$$hello!

    //(5) assign() for string ***********************************************
    //assign(args)
    //args = > str

    string  sample2("Replace me please");
    cout<<sample2<<endl; //Replace me please
    sample2.assign(istring);
    cout<<sample2<<endl; //%%%hello***Char$$hello!

    //assign(args)
    //args => str, pos, len
    //up to len characters from str starting at pos

    sample2.assign(istring, 8, 9);
    cout<<sample2<<endl; //***Char$$

    //assign(args)
    //args = > cp, len
    //character array pointed by cp and len characters

    char mychar[] = "Replacement terminator";
    sample2.assign(mychar, 13 );
    cout<<sample2<<endl; //Replacement t

    //assign(args)
    //args=> cp

    sample2.assign(mychar);
    cout<<sample2<<endl; //Replacement terminator

    //assign(args)
    //args => n, c
    //n copies of character c

    sample2.assign(5, '#');
    cout<<sample2<<endl; //#####

    //assign(args)
    //args => b , e
    //range between iterator b and e

    sample2.assign(istring.begin(), istring.end());
    cout<<sample2<<endl; //%%%hello***Char$$hello!

    //assign(args)
    //args => initialiser list, comma seperated characters enclosed in braces

    sample2.assign({'t','o','m'});
    cout<<sample2<<endl; //tom

    //(6) append() for string ***********************************
    //append(args)
    // args=> str

    sample2.append("andJerry");
    cout<<sample2<<endl; //tomandJerry

    //append(args)
    // args=> str, pos, len

    sample2.append("mouse and cat", 5, 4);
    cout<<sample2<<endl; //tomandJerry and

    //append(args)
    //args=> cp, len

    char mychar2[] = " parliament house";
    sample2.append(mychar2, 13); 
    cout<<sample2<<endl; //tomandJerry and parliament h

    //append(args)
    //args=> cp

    sample2.append(mychar2);
    cout<<sample2<<endl; //tomandJerry and parliament h parliament house


    //append(args)
    //args=> n,c
     sample2.append(5,'&');
     cout<<sample2<<endl; //tomandJerry and parliament h parliament house&&&&&

    //append(args)
    //args=> b,e
    sample2.append(sample2.begin(), sample2.begin()+10);
    cout<<sample2<<endl; //tomandJerry and parliament h parliament house&&&&&tomandJerr

    //append(args)
    //args=> initialiser list

    sample2.append({'a','b','c'});
    cout<<sample2<<endl; //tomandJerry and parliament h parliament house&&&&&tomandJerrabc

    //(7) replace() for string ***********************************

    //replace(pos, len, args)
    //args => str

    sample2.replace(0,11, "REPLACED");
    cout<<sample2<<endl; //REPLACED and parliament h parliament house&&&&&tomandJerrabc

    //replace(b,e, args)
    //args => str

    sample2.replace(sample2.begin()+9, sample2.begin()+12, "AND");
    cout<<sample2<<endl; //REPLACED AND parliament h parliament house&&&&&tomandJerrabc


    //replace(pos,len, args)
    //args => str, pos, len

    sample2.replace(13, 12, "PANADOL PARACETAMOL", 8,11 );
    cout<<sample2<<endl; //REPLACED AND PARACETAMOL parliament house&&&&&tomandJerrabc

    //replace(pos, len, args)
    //args=> cp, len

    char mychar3[] = "PHARAMCY";
    sample2.replace(25, 10, mychar3, 6 );
    cout<<sample2<<endl; //REPLACED AND PARACETAMOL PHARAM house&&&&&tomandJerrabc

    //replace(b, e, args)
    //args=> cp, len

    sample2.replace(sample2.begin() + 32, sample2.end(), mychar3, 4);
    cout<<sample2<<endl; //REPLACED AND PARACETAMOL PHARAM PHAR

    //replace(pos, len, args)
    //args=> cp

    sample2.replace(9, 3, mychar3);
    cout<<sample2<<endl; //REPLACED PHARMACY PARACETAMOL PHARAM PHAR

    //replace(b,e,args)
    //args=> cp

    char mychar4[] = "MED";
    sample2.replace(sample2.begin()+9, sample2.begin()+17, mychar4);
    cout<<sample2<<endl; //REPLACED MED PARACETAMOL PHARAM PHAR

    //replace(pos, len, args)
    //args=> n, c

    sample2.replace(0, 8, 2, '@');
    cout<<sample2<<endl; //@@ MED PARACETAMOL PHARAM PHAR

    //replace(b,e,args)
    //args=>n,c

    sample2.replace(sample2.begin()+25, sample2.end(), 3, '!');
    cout<<sample2<<endl; //@@ MED PARACETAMOL!!!

    //replace(b,e,args)
    //args=> b, e

    sample2.replace(sample2.begin(), sample2.end(), istring.begin(), istring.begin()+10);
    cout<<sample2<<endl; //%%%hello**

    //replace(b,e,args)
    //args=> initialiser list

    sample2.replace(sample2.begin()+3, sample2.end(), {'W','H','Y'});
    cout<<sample2<<endl;

}