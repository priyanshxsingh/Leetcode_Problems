class Solution {
public:

    bool isFreqSame(int freq1[],int freq2[]){
        for(int i=0; i<26; i++){
            if(freq1[i]!=freq2[i]){
                return false;
            }
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {

    if (s1.length() > s2.length()) {
        return false;
    }

    int freq[26] = {0};

    for(int i = 0; i < s1.length(); i++){
        freq[s1[i] - 'a']++;
    }

    for(int i = 0; i <= s2.length() - s1.length(); i++){

        int windFreq[26] = {0};

        for(int j = i; j < i + s1.length(); j++){
            windFreq[s2[j] - 'a']++;
        }

        if(isFreqSame(freq, windFreq)){
            return true;
        }
    }

    return false;
}
};