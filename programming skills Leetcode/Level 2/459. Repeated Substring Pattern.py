class Solution:
    def repeatedSubstringPattern(self, s: str) -> bool:
        temp=""
        temp+=s[0];
        i=0;
        while(temp.__len__()<=s.__len__()/2):
            if(s.count(temp)==s.__len__()/temp.__len__() and s.__len__()%temp.__len__() ==0):
                return True;
            i=i+1;
            temp+=s[i];

        return False;
