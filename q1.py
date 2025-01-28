# MagicStrings ->  any 2 strings which have exactly the same chracters in it. 
# eg. ab = aab = bba = aba. also not empty
# Adjecent string -> s1 => i <= j;    s2 =>  j+1 < k; 
#
# Given a string of length N.. count all the Magic Adjecent String in
# the given string
# eg = ababac 
# anx = 4
def findStrings(s):
    ans = 0
    def findmagic(start, end):
        res = 0
        count = {}
        while(start <= end):
            count[s[start]] = 1
            start += 1
        count2 = {}
        for i in range(end + 1, len(s)):
            count2[s[i]] = 1
            if count == count2:
                res += 1
            elif s[i] not in count.keys():
                break
        return res

    for i in range(0,len(s) - 2):
        for j in range(i+1, len(s) -1):
            ans += findmagic(i, j)
    return ans

print(f"{findStrings('ababac')}")
