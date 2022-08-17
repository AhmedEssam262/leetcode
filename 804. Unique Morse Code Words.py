class Solution:
    def uniqueMorseRepresentations(self, words: List[str]) -> int:
        l1=['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']

        l2=[".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.",
            "--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
        l3=[]
        unique_list = []
        for word in words:
            l=''
            for letter in word:
                l+=l2[l1.index(letter)]
            l3.append(l)
            l=''
        if len(l3)==0:
            return 0
        elif len(l3)==1:
            return 1
        else:
            for z in l3:
                if z not in unique_list:
                    unique_list.append(z)
        return len(unique_list)
