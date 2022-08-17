class Solution:
    def firstUniqChar(self, s: str) -> int:
        
        index=-1
        l=[]
        final=''
        for x in s:
            if s.count(x)==1:
                final =x
                l.append(x)
            if x  in l:
                break

        if final=='':
            return -1
        else:
            return s.index(final)

        
