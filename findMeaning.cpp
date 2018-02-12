bool findMeaning(string wordQuery)
{
  if (dictionary.find(wordQuery) != dictionary.end())
    return true;
  return false;
}