class Solution {
public:
    bool isValid(string s) {
        if(s.length() < 3){
            return false;
        }

    bool flag = false;
    bool voFlag = false;
    bool exFlag = true;

    for(int i=0;i<s.length();i++){
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')){
            if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='A' && s[i]!='E' && s[i]!='I' && s[i]!='O' && s[i]!='U'){
                flag = true;
            }
            
        }
        if( s[i]=='A' || s[i]=='E' || s[i]=='O' || s[i]=='I' || s[i]=='U'|| s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' || s[i]=='u') {
            voFlag = true;
        }

        if(s[i]=='$' || s[i]=='#' || s[i]=='@'){
            exFlag = false;
        }
    }

    return (flag && voFlag && exFlag);
    }
};