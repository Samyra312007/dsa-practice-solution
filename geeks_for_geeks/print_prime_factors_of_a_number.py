import math

class Solution:
    def primeFac(self, n):
        list1 = []
        for i in range(2, int(math.sqrt(n))+1):
            if(n%i == 0):
                list1.append(i)
                while(n%i == 0):
                    n = n//i
        if(n>2): list1.append(n)
        return list1