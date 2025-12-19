#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

string translate(string s) { 
     vector<string>word;
     string temp="";
     for(char ch:s){
        if(ch==' '){
            word.push_back(temp);
            temp=" ";
        }
        else{
            temp+=ch;
        }
     }
     word.push_back(temp);
     string res=" ";
     for(int i=word.size()-1;i>=0;i--){
        res+=word[i];
        if(i!=0){
            result+=" ";
        }
     }
     return res;
   
}

int main() {
    int t;
    cin >> t;
    cin.ignore();   

    while (t--) {
        string s;
        getline(cin, s);
        cout << translate(s) << endl;
    }
    return 0;
}
