#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    s1="
1
1 
2
1 2 
1
2 
2
1 2 
1
1 
2
1 2 
1
1 
3
1 2 3 
1
3 
2
1 2 
2
1 2 
3
1 2 3 
2
2 3 
3
1 2 3 
3
1 2 3 
2
1 2 
2
2 3 
2
1 3 
3
1 2 3 
2
1 3 
3
1 2 3 
2
1 2 
3
1 2 3 
3
1 2 3 
2
1 3 
2
1 3 
2
2 3 
2
2 3 
2
1 3 
3
1 2 3 
1
2 
2
2 3 
4
1 2 3 4 
3
1 3 4 
3
1 2 4 
2
1 2 
2
1 2 
3
1 2 4 
3
1 3 4 
3
1 2 3 
3
1 2 3 
2
1 2 
3
1 3 4 
3
1 2 3 
3
1 2 3 
3
2 3 4 
3
1 2 3 
3
2 3 4 
3
1 3 4 
4
1 2 3 4 
3
2 3 4
";

s2="
1
1 
2
1 2 
1
2 
2
1 2 
1
1 
2
1 2 
3
1 2 3 
3
1 2 3 
3
1 2 3 
2
1 2 
2
1 2 
3
1 2 3 
2
2 3 
3
1 2 3 
3
1 2 3 
2
1 2 
2
2 3 
2
1 3 
3
1 2 3 
2
1 3 
3
1 2 3 
2
1 2 
3
1 2 3 
3
1 2 3 
2
1 3 
2
1 3 
2
2 3 
2
2 3 
2
1 3 
3
1 2 3 
3
1 2 3 
2
2 3 
4
1 2 3 4 
3
1 3 4 
3
1 2 4 
4
1 2 3 4 
2
1 2 
3
1 2 4 
3
1 3 4 
3
1 2 3 
3
1 2 3 
2
1 2 
3
1 3 4 
3
1 2 3 
3
1 2 3 
3
2 3 4 
3
1 2 3 
3
2 3 4 
3
1 3 4 
4
1 2 3 4 
";

int i=0;
while(s1[i++]==s2[i++]);

cout<<s1[i]<<" "<<s2[i];

}