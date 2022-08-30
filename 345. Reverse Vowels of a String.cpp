class Solution {
public:
bool isVowel(char c)
{
    return (c=='a' || c=='A' || c=='e' ||
            c=='E' || c=='i' || c=='I' ||
            c=='o' || c=='O' || c=='u' ||
            c=='U');
}
 
string reverseVowels(string str)
{
    int j = 0;
    string vowel="";
    for (int i = 0; str[i] != '\0'; i++)
        if (isVowel(str[i])) {
            vowel += str[i];
            j++;
        }


    for (int i = 0; str[i] != '\0'; i++)
        if (isVowel(str[i]))
            str[i] = vowel[--j];

    return str;
}
};
