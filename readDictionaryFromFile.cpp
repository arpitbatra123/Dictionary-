bool readDictionaryFromFile(ifstream &in)
{
  if (!(in.good()))
  {

    cout << "Unable to Open File\n";
    return false;
  }

  else
  {

    cout << "Processing File\n";
    string wordPlusMeaning, word, meaning;

    while (getline(in, wordPlusMeaning))
    {

      int spaceIndex = wordPlusMeaning.find(' ');
      word = wordPlusMeaning.substr(0, spaceIndex);
      meaning = wordPlusMeaning.substr(spaceIndex + 1);

      //cout << "Word is " << word << "\n";
      //cout << "Meaning is " << meaning << "\n";

      dictionary.insert(make_pair(word, meaning));
    }

    /*  if( (dictionary.find("hola") )!=dictionary.end())
          { cout<<"hola  found "<<std::endl;
            cout<<"Meaning is"<<dictionary["hola"]<<std::endl;
            } */
  }

  return true;
}