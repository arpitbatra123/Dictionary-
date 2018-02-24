void deleteWord(string deleteThisWord)
{
    if (dictionary.find(deleteThisWord) != dictionary.end()) {
        dictionary.erase(deleteThisWord);
        cout << "Word Deleted Successfully\n";
    }

    else {

        cout << "Word not Found,Skipping...\n";
    }
}