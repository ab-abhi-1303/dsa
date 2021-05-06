//question link: https://practice.geeksforgeeks.org/problems/print-anagrams-together/1

vector<vector<string> > Anagrams(vector<string>& string_list) 
{
    // Your Code Here
    //sort each word individually
    
    //we create map of string->vector<string> and do as you see next
    map<string, vector<string> > mp;
    
    for(int i = 0 ; i < string_list.size() ; i++) {
        string s = string_list[i];
        sort(s.begin(), s.end());
        mp[s].push_back(string_list[i]);
    }
    
    vector<vector<string> > res;
    for(auto x : mp) {
        res.push_back(x.second);
    }
    return res;
}
