# bookProjectWithQT

![image](https://user-images.githubusercontent.com/68548733/166981737-4e0cfcf6-586a-4879-9165-8bdc2c852017.png)

The Book class is burdened with two additional responsibilities:
1. obtainbookInfo() to get user input on book details (title, authors, ISBN, and date of publication) via a console, and <br />
2. saveBook() to save the state of a Book instance into a file.

Redesign the Book class so that the concept/process currently included in it is achieved using three different classes:
1. The Book class to represent a book with the necessary functions (as given in the above UMLdiagram). Remember that a book may have more than one author.<br />
2. A BookWriter class which saves the state of a Book instance (values of the data members of that instance) in a file (you may save it in any sensible format). <br />
3. A Graphical User Interface (GUI) class BookInput, which allows users to enter book information to create Book instances, which should also be saved to a file (using the BookWriter). <br />
Note: You can decide when Book instance(s) should be saved.

Result

GUI:

![image](https://user-images.githubusercontent.com/68548733/166983356-307ac58c-6ee0-48de-b7d7-dd44ed3b6d1f.png)

![image](https://user-images.githubusercontent.com/68548733/166983838-c29a7588-4888-421a-ad0f-064d75619881.png)

