String - collection of characters used to represent names address etc

Two ways:
    1. char Array
        char s[10] = "Hello" // array of 10 Hello\0 where \0 is string terminatior

        char *s = "Hello" // string in heap

        char s[] = {'a','b','\0','d'} // if we print s here it'll only display till b not d as it will stop after string terminator

    2. class string

        string s = "hello" // using string class to create a datatype of string

Input to a string 
    1. Plain old cin
        it can take only one word, it wont take anything after the space
        cin<<s;

    2. using cin.get
        issue occurs in this one as it takes in the next line character and sends it to next cin.get
        cin.get(s,10); //where 10 is the upper bound of characters to read, it can only read 9 characters as 10th will be the null \0
                    // cin.ignore() is used to ignore the side effects of cin.get

    3. using cin.getline
        it is used perfectly to capture multiple words
        cin.getline(s,10);

string functions string.h / cstring.h

    1. strlen(a)
        it gives the length of string a

    2. strcat(destination,source) 
        concatnates two strings into one (destination)

    3. strncat(destination,source,lenght)
        concatnates two strings with only length number of characters are used from source

    4. strcpy(destination, source) / strncpy(destination, source, length)
        copies source into destination

    5. strstr(main, sub)
        it finds the first substring in the main string and returns all the characters followed by and in the substring
        if the substring is not found it'll throw a runtime error, it can be handlled via -- if (strstr(s2,s1) != NULL)

        //*cout can't print null so it throws a runtime error*

    6. strchr(main, char)
        find occurence of a character in the string

    7. strrchr(main, char)
        find occurence of a character from the right handside in the string

    8. strcmp(s1, s2)
        compares two strings in the order of the dictionary
          0: both strings same
        -ve: s1 smaller than s2
        +ve: s1 greater than s2
        return the difference between the strings

        smaller case has greater ascii value to upper case so a > A
        //*difference in the ascii code of 'a' - 65 and 'A' - 97 is 32 *
    9. strol(a,NULL,10) 
        string to long it will convert the numbers present in the string a to long, where NULL is the end of the number and 10 is the base i.e. decimal

    10. strof(a,NULL)
        it will convert the number in the string to float

    11. strtok(string,"delimiters")
        it tokenizes the string based on the delimiters
        :/ confusing
