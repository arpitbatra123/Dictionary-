void modifyMeaning(string modifyMeaningOfThisWord)
{
    if (dictionary.find(modifyMeaningOfThisWord) != dictionary.end()) {
        dictionary.erase(modifyMeaningOfThisWord);

        string addThisMeaning;
        cout << "Enter the meaning"
             << "\n";
        getline(cin, addThisMeaning);
        dictionary.insert(make_pair(modifyMeaningOfThisWord, addThisMeaning));

        cout << "Meaning Successfully Modified\n";
    }

    else {

        cout << "Word Does not exist,Meaning cannot be modified\n";
    }
}