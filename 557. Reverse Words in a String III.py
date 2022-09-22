class Solution:
    def reverseWords(self, s: str) -> str:
        l=s.split()
        l2=[]
        s2=" "
        for i in l :
            text =i [::-1]
            l2.append(text)
        s2= s2.join(l2)
        return s2

