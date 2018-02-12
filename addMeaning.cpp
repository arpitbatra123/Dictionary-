void addMeaning(string addThisWord)
{

  if (dictionary.find(addThisWord) == dictionary.end())
  {
    string addThisMeaning;
    cout << "Enter the meaning"
         << "\n";
    getline(cin, addThisMeaning);
    dictionary.insert(make_pair(addThisWord, addThisMeaning));
    cout << "Word And Meaning Added\n";
  }

  else
  {

    cout << "Word Already Exists,Skipping...\n";
  }
}