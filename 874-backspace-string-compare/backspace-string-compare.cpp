class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int i= s.size()-1;
        int j= t.size()-1;
        int backs=0;
        int backt=0;

        while(i>=0 || j>=0){
            while(i>=0){
                if(s[i]=='#'){
                    backs++;
                    i--;
                }
                else if(backs>0){
                    backs--;
                    i--;
                }
                else break;
            }

            while(j>=0){
                if(t[j]=='#'){
                    backt++;
                    j--;
                }
                else if(backt>0){
                    backt--;
                    j--;
                }
                else break;
            }
            if (i >= 0 && j >= 0) {
                if (s[i] != t[j]) return false;
            } else if (i >= 0 || j >= 0) {
                return false;
            }
            i--;
            j--;   
        }
        return true;
    }
};