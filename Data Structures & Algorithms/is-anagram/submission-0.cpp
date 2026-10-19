class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mpp1;
        unordered_map<char,int> mpp2;
        if(s.size()!=t.size()){
            return false;
        }

        //pre-compute
        for(int i=0;i<s.size();i++){
            mpp1[s[i] - 'a']++;
            mpp2[t[i] - 'a']++;
        }

        //fetch
        for(int i=0;i<s.size();i++){
            if(mpp1[s[i] - 'a'] != mpp2[s[i] - 'a'] ){
                return false;
            }
        }
        return true;
    }
};