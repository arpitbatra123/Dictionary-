#include "headers.h"
#include "functions.h"


int main()

{

  ifstream in;

  string dictFileName;

  cout << "Please Enter Name of Dictionary File\n";
  cout << "Please Note that the Dictionary should have the words"
       << "\n"
       << "and the meanings in the following format\n";
  cout << "word SPACE meaning\n";

  getline(cin, dictFileName);

  in.open(dictFileName.c_str());

  bool status = readDictionaryFromFile(in);

  if (status == false)
  {
    cout << "Error Occured\n";
    exit(1);
  }

  // string queryWord;
  // cout << "Enter word to query in the dictionary"
  //      << "\n";
  // getline(cin, queryWord);

  // if (findMeaning(queryWord))
  // {

  //   cout << "Word is " << queryWord << " and  Meaning is" << dictionary[queryWord] << "\n";
  // }

  // else
  // {
  //   cout << "The Word " << queryWord << " was not found\n";
  // }

  // string addThisWord, addThisMeaning;
  // cout << "Enter word to add to the dictionary"
  //      << "\n";
  // getline(cin, addThisWord);

  // addMeaning(addThisWord);

  string deleteThisWord;
  cout << "Enter word to delete from the dictionary"
       << "\n";
  getline(cin, deleteThisWord);

  deleteWord(deleteThisWord);

  string queryWord;
  cout << "Enter word to query in the dictionary"
       << "\n";
  getline(cin, queryWord);

  if (findMeaning(queryWord))
  {

    cout << "Word is " << queryWord << " and  Meaning is" << dictionary[queryWord] << "\n";
  }

  else
  {
    cout << "The Word " << queryWord << " was not found\n";
  }


  return 0;
}
