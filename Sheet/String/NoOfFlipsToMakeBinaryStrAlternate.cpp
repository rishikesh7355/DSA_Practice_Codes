S = "0001010111" 
Output: 2


0 0 0 1 0 1 0 1 1 1
0 1 2 3 4 5 6 7 8 9 
c0=0 c1=0
Your Output: 
0 is 0
1 is1
0 is 1
1 is1
0 is 1
1 is2
0 is 1
1 is3
0 is 1
1 is4
0 is 1
1 is5
0 is 1
1 is6
0 is 1
1 is7
0 is 2
1 is7
0 is 2
1 is8
charToAccept = i%2==0?0:1
for(int i=0;i<S.length();i++)
if(S[i]!=CharToAccept)
i=0 0%2==0 yes 0
S[0]!=0 no 
else c1++ c1=1
i=1 1%2==0 no 1
if(S[1]!=1 yes  c0=1
i=2 2%2==0 yes  0
S[2]!=0 no 
else c1+= c1=2
i=3 3%2==0 no 1
S[3]!=1 no
else c1=3
i=4 4%2==0 yes 0
S[4]!=0 no
c1=4
i=5 5%2==0 no 1
S[5]!=1 no
c1=5
i=6 6%2==0 yyes 0
S[6]!=0 no
c1=6
i=7 &%2==0 no 1
s[7]!=1 no
c1=7
i=8 8%2==0 yes 0
S[8]!=0 yes c0=2
i=9 (%2==0 no 1
S[9]!=1 no
c1=9