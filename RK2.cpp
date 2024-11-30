#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;
int coll(const string& filename, const string& str){
    fstream file;
    file.open(filename);
    vector <string> vec;
    string ch;
    int col = 0;
    while (getline(file, ch)){
        file >> ch;
        if (ch == str){
            col += 1;
        } else {
            vec.push_back(ch);
        }
    }
    for (auto i: vec){
        file << i << endl;
    }
    file.close();
    return col;
}


int main()
{
    string filename;
    string a;
    cout << coll("123.txt", "мир") << endl;
}