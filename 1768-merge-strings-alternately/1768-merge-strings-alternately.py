class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        p1 = 0
        p2 = 0
        newstr = ""
        val = 0
        while p1 < len(word1) and p2 < len(word2):
            if val % 2 == 0:
                newstr = newstr + word1[p1]
                p1 += 1
            else:
                newstr = newstr + word2[p2]
                p2 += 1
            val += 1
        newstr = newstr + word1[p1:]
        newstr = newstr + word2[p2:]
        return newstr
        