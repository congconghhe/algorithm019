bool isAnagram(char * s, char * t){
    int i;
    int len = strlen(s);
    int len2 = strlen(t);
    int count[26]={0};

  
    if (len != len2) {
        return false;
    }
    for (i = 0; i < len; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--; 
    }
    for(i = 0; i < 26; i++) {
        printf("\n count[%d]:%d ", i, count[i]);
        if (count[i] != 0) {
           return false;
        }
    }
    return true;
}
