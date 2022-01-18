//
// Created by 봉유진 on 2022-01-17.
//

#ifndef SDDS_CSTRTOOLS_H
#define SDDS_CSTRTOOLS_H




namespace sdds {

    char toLower(char ch);
    int strCmp(const char *s1, const char *s2);
    int strnCmp(const char *s1, const char *s2, int len);
    void strCpy(char *des, const char *src);
    int strLen(const char *str);
    int isAlpha(char ch);
    int isSpace(char ch);
    void trim(char word[]);
    const char *strStr(const char *str, const char *find);
    void toLowerCaseAndCopy(char des[], const char source[]);


}
#endif //SDDS_CSTRTOOLS_H
