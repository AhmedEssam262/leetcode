class Solution:
    def isPalindrome(self, s: str) -> bool:
        n=""
        for x in s:
            if (x.isalnum()):
                n=n+x
        n=n.lower()
        if (n==""):
            return True
        
        i=0
        while(i< len(n)/2):
            if(n[i] != n[len(n)-i-1]):
                return False
            i+=1
        return True
        
