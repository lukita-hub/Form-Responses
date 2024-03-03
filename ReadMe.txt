# Form-Responses
C++ code, functional and testable;
SQL code, fucntional and database;
Readme with comments on how to test and validate solutions or other comments.

**Common files:**
    launch.json;
    seetings.json;
    tasks.json;

**Exercise3:** The Exercise requires a program that prints a conditional statement for each number 'i' from 1 to 100. The conditions are
    For each multiple of 3, print "Foo" instead of the number.
    For each multiple of 5, print "Baa" instead of the number.
    For multiple numbers simultaneously of 3 and 5, print "FooBaa", instead of the number.

    File: Exerc3.cpp; 
        The program checks if integer <i> is multiple of 3 (prints "Foo"), 5 (prints "Baa") or both (prints both <strings>). Otherwise, prints <i>.

**Exercise4:** The Exercise requires a program that compares string 's' with string 't' and outputs either 'yes' or 'no' if string 's' can be transformed into string 't' using 'k' operations. Operations can be of two types:
    1. Concat a lowercase character from the Portuguese alphabet at the end of the string.
    2. Remove the last character from the string. If the string is empty, it will remain empty.

    Constrains:
        i.      1 <= | s | <= 100.
        ii.     1 <= | t | <= 100.
        iii.    1 <= k <= 100.
        iv.     s and t consists of lowercase letters of the Portuguese alphabet, ascii [a-z].

    File: Exerc4.cpp; 
        i.      The program asks the User for 'stringS', 'stringT' and 'kParameter'. 
        ii.     Function 'ConcatRemove' then checks the 'commonLength' between 'stringS' and 'stringT'.
        iii.    It then calculates the number of required operations 'requiredOperations', as the sum of Removals of stringS to reach 'commonLength' with the Concatenations necessary to reach 'stringT', starting from 'commonLength'.
        iv.     If 'requiredOperations' is less or equal to 'kParameter' 'ConcatRemove' returns 'yes', otherwise returns 'no'.

**Exercise5:** The Exercise requires an Unit Test for the function 'ConcatRemove'. As the programs were implemented using C++, the GoogleTest framework. The function concatremove considers the constraints enunciated on the previous exercise. This unit test will assert the 'sanity' of the function for some expected cases using gtest.

    File: Exerc5.cpp; 
        i.      The program calls 'InitGoogleTest'.
        ii.     InitGoogleTest performs 5 tests using 'EXPECT_EQ' function on 'ConcatRemove' based on the Examples provided in Exercise4 and returns the function 'RUN_ALL_TESTS' result format.

**Exercise6:** The Exercise requires an SQL query that generates a report of 'Name', 'Grade' and 'Value', from Tables 'Students' and 'Notes'. With the following requirements:
    1. The report must be in descending order by grade, that is, the highest grades are inserted first.
    2. If there are more than one student with the same grade (8-10) assigned to them, sort those students in particular by their names in alphabetical order. 
    3. Use "NULL" as the name, if student 'Grade' is lower than 8.
    4. List grades in descending order.
    5. If more than one student has the same grade lower than 8, sort those students in particular by their grades in ascending order.    

    File: Exerc6Script.sql;  TestDataBase.sqlite;
        i.      The program creates TABLE 'Students(ID[INTEGER, PRIMARY KEY];Name[TEXT];Value[INTEGER])' and TABLE 'Notes(Grade[INTEGER];Min_Value[INTEGER];Max_values[INTEGER])'.
        ii.     It then fills TABLE 'Students' and TABLE 'Notes' with the data provided in the exercise.
        iii.    The query is performed in the following order:
            a. If 'Notes.Grade' < 8, then NULL, else 'Students.Name',
            b. 'Notes.Grade',
            c. 'Students.Value'
            d. Fill report in descending order of 'Notes.Grade' and 'Students.Name'.

**Exercise7:** The Exercise proposes a class/subclass structure with operations performed within class and subclass. The results provided by the structure for a given structure indicate an example 'Polymorphism'.
    
    File: Exerc7.txt;
        i. Provides another example of class/subclass structure used for studying the problem.

**Exercise8:** The Exercise requires an SQL query that select all distinct pet names for:
    1.TABLE dogs
        i. id INTEGER NOT NULL PRIMARY KEY,
        ii. name VARCHAR(50) NOT NULL

    2. TABLE cats
        i. id INTEGER NOT NULL PRIMARY KEY,
        ii. name VARCHAR(50) NOT NULL

    File: Exerc8Script.sql;  TestDataBase.sqlite;
        i.      The program creates TABLE 'dogs(ID[INTEGER, NOT NULL];name[VARCHAR(50), NOT NULL])' and TABLE 'cats(ID[INTEGER, NOT NULL];name[VARCHAR(50), NOT NULL])'.
        ii.     It then fills TABLE 'dogs' and TABLE 'cats' with ten names common in the US for pets, each.
        iii.    The query is performed in the following order:
            a. SELECT 'name' FROM 'dogs',
            b. UNION,
            c. 'SELECT 'name' FROM 'cats'.

**Exercise9:** The Exercise presents a softwae utility ‘bq’ that allows the user to read runtime, persistent data structures. Based on the relations provided, 3 Problems are proposed.

    File: Exerc9.txt;
        i. The sequence of commands necessary for each of the 3 problems based on the relations is describe in the file.

**Exercise10:** The Exercise requires a program that calculates a strin length informed by the user, without usage of pre-existing functions, e.g., len(), count(), etc.

    File: Exerc10.cpp;
        i.      The program asks the User for 'string'. 
        ii.     Using 'while' loop, it iterates over the 'string', until a null charcter is reached.
        iii.     Returns the iterated value.

**Exercise11:** The Exercise requires a program that reverses a string informed by the user without using any temporary variable, buffer or any pre-existing function or method.

    File: Exerc11.cpp;
        i.      The program asks the User for 'string'. 
        ii.     Program calculates the length if 'string' in the same manner as previous Exercise.
        iii.    It then swaps characters of 'string' using XOR for swapping the variable logic.
        iv.     Returns the reversed 'string'.  

**Exercise12 - Exercise16:** All responded directly into the form provided.