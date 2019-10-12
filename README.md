# Security-PEFileInfo
HW2Q1

This program was made to create a text file called "PE-1.txt" if it does not exist in the directory where the executable is located.
If the file does not exist already, it will create it and write "I want to learn PE file format!". 
If the file already exists, it will check whether it contains the phrase "I want to learn PE file format!". 
If it does, the program will output the file's contents onto the command line. IF it does not, it will append the phrase onto the end of the file. 

The program could fail even if it contains the phrase if the phrase is past 255 characters due to the buffer for reading only being 255 characters long. 

The executable is also packed and unpacked to compare the import tables of the executable in the three different forms. 

Using the technique of packing discussed in class, the executable triggered 7 false positives on VirusTotal. 
