#include<iostream>
#include<fstream>
#include<string>
using namespace std;

/* Look for all **'s and complete them */

//=====================================================
// File scanner.cpp written by: Group Number: ** 
//=====================================================

// --------- Two DFAs ---------------------------------

// WORD DFA 
// Done by: Julian Jaramillo
// RE:   **
bool word (string s)
{

  int state = 0;
  int charpos = 0;
  // replace the following todo the word dfa  **
  while (s[charpos] != '\0') 
    {
      if (state == 0 && s[charpos] == 'c')
      state = 1;
      else
      if (state == 0 && s[charpos] == 't')
      state = 2;
      else
      if (state == 0 && (s[charpos] == 'b' || s[charpos] == 'm' || s[charpos] == 'k' ||
          s[charpos] == 'n' || s[charpos] == 'h' || s[charpos] == 'p' || s[charpos] == 'r'))
      state = 3;
      else
      if (state == 0 && (s[charpos] == 'd' || s[charpos] == 'w' || s[charpos] == 'z' ||
          s[charpos] == 'y' || s[charpos] == 'j'))
      state = 4;
      else 
      if (state == 0 && s[charpos] == 's')
        state = 5;
      else
      if (state == 0 && (s[charpos] == 'a' || s[charpos] == 'i' || s[charpos] == 'u' ||
          s[charpos] == 'e' || s[charpos] == 'o'))
      state = 7;
      else
      if (state == 1 && s[charpos] == 's')
        state = 4;
      else 
      if (state == 2 && s[charpos] == 's')
        state = 4;
      else 
      if (state == 2 && (s[charpos] == 'a' || s[charpos] == 'i' || s[charpos] == 'u' ||
          s[charpos] == 'e' || s[charpos] == 'o'))
        state = 7;
      else
      if (state == 3 && (s[charpos] == 'a' || s[charpos] == 'i' || s[charpos] == 'u' ||
          s[charpos] == 'e' || s[charpos] == 'o'))
        state = 7;
      else
      if (state == 4 && (s[charpos] == 'a' || s[charpos] == 'i' || s[charpos] == 'u' ||
          s[charpos] == 'e' || s[charpos] == 'o'))
        state = 7;
      else
      if (state == 5 && s[charpos] == 'h')
        state = 4;
      else 
      if (state == 5 && (s[charpos] == 'a' || s[charpos] == 'i' || s[charpos] == 'u' ||
          s[charpos] == 'e' || s[charpos] == 'o'))
        state = 7;
      else
      if (state == 6 && s[charpos] == 'c')
        state = 1;
      else
      if (state == 6 && s[charpos] == 't')
        state = 2;
      else
      if (state == 6 && (s[charpos] == 'b' || s[charpos] == 'm' || s[charpos] == 'k' ||
          s[charpos] == 'n' || s[charpos] == 'h' || s[charpos] == 'p' || s[charpos] == 'r') )
        state = 3;
      else 
      if (state == 6 && s[charpos] == 'y')
        state = 4;
      else
      if (state == 6 && s[charpos] == 's')
        state = 5;
      else
      if (state == 6 && (s[charpos] == 'a' || s[charpos] == 'i' || s[charpos] == 'u' ||
          s[charpos] == 'e' || s[charpos] == 'o'))
        state = 7;
      else 
      if (state == 7 && s[charpos] == 'c')
        state = 1;
      else
      if (state == 7 && s[charpos] == 't')
        state = 2;
      else
      if (state == 7 && (s[charpos] == 'b' || s[charpos] == 'm' || s[charpos] == 'k' ||
          s[charpos] == 'h' || s[charpos] == 'p' || s[charpos] == 'r'))
        state = 3;
      else
      if (state == 7 && (s[charpos] == 'd' || s[charpos] == 'w' || s[charpos] == 'z' ||
          s[charpos] == 'y' || s[charpos] == 'j'))
        state = 4;
      else
      if (state == 7 && s[charpos] == 's')
        state = 5;
      else
      if (state == 7 && s[charpos] == 'n')
        state = 6;
      else
      if (state == 7 && (s[charpos] == 'a' || s[charpos] == 'i' || s[charpos] == 'u' ||
          s[charpos] == 'e' || s[charpos] == 'o'))
        state = 7;
     else
	    return(false);
     charpos++;
    }//end of while

  // where did I end up????
  if (state == 7) return(true);  // end in a final state
   else return(false);
  
}

// PERIOD DFA 
// Done by: **
bool period (string s)
{  // complete this **
}

// ------ Three  Tables -------------------------------------

// TABLES Done by: **

// ** Update the tokentype to be WORD1, WORD2, PERIOD, ERROR, EOFM, etc.
enum tokentype {ERROR, };

// ** For the display names of tokens - must be in the same order as the tokentype.
string tokenName[30] = { }; 

// ** Need the reservedwords table to be set up here. 
// ** Do not require any file input for this. Hard code the table.
// ** a.out should work without any additional files.


// ------------ Scanner and Driver ----------------------- 

ifstream fin;  // global stream for reading from the input file

// Scanner processes only one word each time it is called
// Gives back the token type and the word itself
// ** Done by: 
int scanner(tokentype& tt, string& w)
{

  // ** Grab the next word from the file via fin
  // 1. If it is eofm, return right now.   

  /*  **
  2. Call the token functions (word and period) 
     one after another (if-then-else).
     Generate a lexical error message if both DFAs failed.
     Let the tokentype be ERROR in that case.

  3. If it was a word,
     check against the reservedwords list.
     If not reserved, tokentype is WORD1 or WORD2
     decided based on the last character.

  4. Return the token type & string  (pass by reference)
  */

}//the end of scanner



// The temporary test driver to just call the scanner repeatedly  
// This will go away after this assignment
// DO NOT CHANGE THIS!!!!!! 
// Done by:  Louis
int main()
{
  tokentype thetype;
  string theword; 
  string filename;

  cout << "Enter the input file name: ";
  cin >> filename;

  fin.open(filename.c_str());

  // the loop continues until eofm is returned.
   while (true)
    {
       scanner(thetype, theword);  // call the scanner which sets
                                   // the arguments  
       if (theword == "eofm") break;  // stop now

       cout << "Type is:" << tokenName[thetype] << endl;
       cout << "Word is:" << theword << endl;   
    }

   cout << "End of file is encountered." << endl;
   fin.close();

}// end

