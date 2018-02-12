void deleteWord(string deleteThisWord)
{
  if (dictionary.find(deleteThisWord) != dictionary.end())
  {
    dictionary.erase(deleteThisWord);
  }

  else
  {

    cout << "Word not Found,Skipping...\n";
  }
}