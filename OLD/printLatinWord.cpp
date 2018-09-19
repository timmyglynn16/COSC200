#include <iostream>
#include <cstring>
using namespace std;

const int SIZE = 80;

void printLatinWord( char const * const );
int main()
{
//declaring character
char sentence[ SIZE ], *tokenPtr;
//input sentence
cout << "Enter a sentence:\n";
cin.getline( sentence, SIZE );

//tokenize each word

cout << "\nThe sentence in Pig Latin is:\n";

tokenPtr = strtok( sentence, " .,;" );

//to convert each word to pig latin form

while ( tokenPtr )

{

printLatinWord( tokenPtr );

tokenPtr = strtok( 0, " .,;" );

if ( tokenPtr )

cout << ' ';

}

cout << '.' << endl;

//pause system for a while

system("pause");

return 0;

}

//function definition

void printLatinWord( char const * const wordPtr )

{

int len = strlen( wordPtr );

for (int i = 1; i < len; ++i )

cout << *( wordPtr + i );

cout << *wordPtr << "AY";
}
