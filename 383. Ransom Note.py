class Solution(object):
    def canConstruct(self, ransomNote, magazine):
        l1=[]
        l2=[]
        for x1 in ransomNote:
            l1.append(x1)
        for y1 in magazine:
            l2.append(y1)
        for test1 in l1:
            if l1.count(test1) >l2.count(test1):
                return False
        return True
