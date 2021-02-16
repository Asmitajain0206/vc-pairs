/* Max has a string S with length N. He needs to find the number of indices i (1≤i≤N−11≤i≤N−1) such that the i-th character of this string is a consonant and the i+1th character is a vowel. However,she is busy, so she asks for your help.

Note: The letters 'a', 'e', 'i', 'o', 'u' are vowels; all other lowercase English letters are consonants.

Input

The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N.
The second line contains a single string S with length N*/

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    int i,n,T,j,count;

    printf("enter test cases : ");
    scanf("%d",&T);
    for(j=0;j<T;j++)
    {
        count=0;
        printf("\nenter n  : ");
        scanf("%d",&n);
        char s[n];
        printf("\nenter  s : ");
        scanf("%s",s);
        for(i=0;i<strlen(s);i++)
        {
            if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u')
        {
            if(s[i+1]=='a' || s[i+1]=='e' || s[i+1]=='i' || s[i+1]=='o' || s[i+1]=='u')
            {
                count++;
                i++;
            }
        }
        } printf("\n%d",count);
    }
    return 0;
}
