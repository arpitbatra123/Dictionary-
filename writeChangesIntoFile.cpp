void writeChangesIntoFile(string dictFileName)
{

    ofstream writeStream;
    writeStream.open(dictFileName.c_str(), std::ios::trunc);

    for (auto kv : dictionary) {
        string word = kv.first;
        string meaning = kv.second;
        writeStream << (word + " " + meaning + " \n");
    }
}