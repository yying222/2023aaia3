# week03-5.py 學習計畫第5題 判斷某個字串，是不是由「重複」做出來的字串
# LeetCode 459. Repeated Substring Pattern
# abcabcabcabc
# abcabcabcabcabcabcabcabc 把它 copy 兩次
#  bcabcabcabcabcabcabcab  頭尾 都 砍到1個字母
class Solution:
    def repeatedSubstringPattern(self, s: str) -> bool:
        s2=s+s
        s2=s2[1:len(s2)-1]
        if s in s2: return True
        else: return False