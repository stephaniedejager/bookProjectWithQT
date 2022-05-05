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

![image](https://user-images.githubusercontent.com/68548733/166995445-b13ead5a-9571-4d28-b6b2-16d06ac7538c.png)

![image](https://user-images.githubusercontent.com/68548733/166995763-c5e57625-5827-47a0-9492-cee950b0fe30.png)

Press save

![image](https://user-images.githubusercontent.com/68548733/166995959-b8b5b681-e057-48dc-8bd0-0605f61564c0.png)

Press OK

![image](https://user-images.githubusercontent.com/68548733/166996132-90b0de40-9dee-423a-af88-40f52dccc50b.png)


File

![image](https://user-images.githubusercontent.com/68548733/166996433-8857c04f-d3b1-4d0e-897d-81b5a7103dda.png)

