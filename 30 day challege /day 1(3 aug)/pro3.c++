// Unique Number of Occurrences:-

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
       unordered_map<int, int> m;
       for(int i=0;i<arr.size();i++){
           m[arr[i]]++;
       }
       set<int> occ;
       for(auto x: m){
           occ.insert(x.second);
       }
       return occ.size() == m.size();
    }
};