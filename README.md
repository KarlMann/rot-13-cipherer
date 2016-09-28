# rot-13-cipherer
Author: Charlemagne L. Javinal
Date Added: 28th September, 2016
Purpose: The program was created for educational purpose of studying and demonstrating
         basic cryptography(specifically, the rot-13 cipher -- one of the most
         ancient if not THE most ancient cryptography). 
         This program could be use for ciphering simple messages or for ciphering source files
         in the most basic cipher of all. :-)


A program to create a rot-13 version of a given file.
# OS
The program itself is compiled on a Fedora Workstation 24 OS and should work
on any Linux Platform. If it doesn't, or if you are using a Mac or a Windows OS,
then you have to compile the source code(rot-13.cpp) to work in your platform
before you can use it.

# Usage:
The program is a CLI program.
TO use it you have to type in your shell:
  ./rot-13.exe 
Upon start the program will prompt for the directory and/or filename of
the file that you want to cipher, then the name of output-file where
you want to write the ciphered version of the o, riginal file.
The program should work on any file that you can open using a text-editor
(eg. .txt , .cpp, .c, .py, .html, .java, .cs, etc) 
so long as the two filenames/directories entered are not the same file -
doing so will render a run-time error that shall make the file unreadable
even through text-editor.

After the program is done, a new file will be created
that contains the ciphered version
of the original file. The original file is left untouched
and should remain as-is before the program is executed. It is the duty of 
the user to delete the original file or keep it somewhere more secure or keep
it untouched.

Neverheless, the decryption works the same way.
start the program by typing in: './rot-13.exe' and inputing the file that you
want to cipher and filename where you want to put the 'unciphered' version.
As the same as encryption the ciphered version will remain intact and the unciphered
version should be created. 





