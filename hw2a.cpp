

set<string> s;
string line;
while (getline(cin, line)) {
    if (s.find(line) == s.end()) {
        //print line
        s.insert(line);
        }
    }
}

