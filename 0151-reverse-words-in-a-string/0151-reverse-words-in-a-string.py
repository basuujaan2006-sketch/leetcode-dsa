class Solution(object):
    def reverseWords(self, s):
        s1 = s[::-1]
        l = s1.split()
        ans = ""
        for i in l:
            word = i[::-1]
            ans += " " + word
        return ans[1:]


        