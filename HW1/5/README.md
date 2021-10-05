# HW1-5
### Matviy Zhachek
##### Input
`scanf` scans for inputs until a `'\n'` is detected, and copies the inputs into character array `in[]`.
##### Grid Representation
Each letter gets a 2D character array with 7 rows and 5 columns
##### Output
Using 2 `for` loops, a row of each character of the string gets printed. <br>
The outside `for` loop cycles iterates through the 7 rows. <br>
The inside `for` loop iterates through the character of the string. <br>
The `if` statements inside check if the character matches a letter and then print the matching array's row depending on what iteration the outside `for` loop is in. <br>
Once the inside `for` loop is done, it skips to the next line/row
