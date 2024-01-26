#include <bits/stdc++.h>

using namespace std;



string timeConversion(string s) {
    
    if (s.substr(s.length()-2) == "AM")
    {
        s.erase(s.length()-2);
        if (s.substr(0,2) == "12") {
            s.erase(0,2);
            return "00"+s;
        }
        else{
            return s;
        }
    }
    else
    {
        if (s.substr(0,2) != "12") {
            int count = 12 + stoi(s.substr(0,2));
            s.erase(s.length()-2);
            s.erase(0,2);
            return to_string(count)+s;
        }
        else{
            s.erase(s.length()-2);
            return s;
        }
    }
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
