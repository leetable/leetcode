s1 = 'abcdefg'
s2 = 'cdefghi'

def fn(s1,s2):
    if len(s1) < len(s2):
        s1,s2 = s2,s1
    maxstr = s1
    substr_maxlen = max(len(s1),len(s2))
    for sublen in range(substr_maxlen,-1,-1):
        for i in range(substr_maxlen-sublen+1):
            if maxstr[i:i+sublen] in s2:
                return maxstr[i:i+sublen]
print(fn(s1,s2))
