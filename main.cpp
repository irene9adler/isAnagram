//ÅÐ¶ÏÊÇ·ñ×Ó´®
#include <string.h>
bool isAnagram(char* s, char* t) {
    int i=0,j=0;
    bool res = false;
    int len1 = strlen(s);
    int len2 = strlen(t);
    if((len1==0)&&(len2==0)) return true;
    while((i<len1)&&(j<len2))
    {
        if(s[i]==t[j])
        {
            i++;
            j++;
        }
        else j++;
    }
    if(i==len1) res = true;
    return res;
}
