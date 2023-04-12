
  ASSIGMENT:
  program a clean menu in text mode so that it is easy to use in other applications.
  the following information will be available in the form of variables:
  number of text menu items (lines)
  menu width (number of characters)
  actor item (will be highlighted with a different text and background color)
  Use the up and down arrow keys or the arrow keys on the secondary keyboard to move around the menu.
  Select menu items using the Enter key.
  I recommend 2 more variables x,y which will indicate the position of the menu, i.e. its upper left corner.
  You can color the whole menu with the background color.
 


  SOLUTION:
  I tried to make the solution as general as possible, so that it can be used as easily as possible and so that it has the possibility of extension if needed.
  each item can have its own color, its own alignment (aligment)
  the programmer first defines the menu items and then repeats the rendering and input retrieval while the menu is online
  in the following solution you can see a simple menu with 3 items where:
  1. has pink color and left alignment
  2. is white and center aligned
  3. is white and centered
       
  the required information can be obtained as follows:
  1. number of items -> menu.items.Count
  2. menu width -> menu.menuWidth
  3. current item -> menu.selected has information about the item, if you want to know the exact text use menu.items[selected]
  unused functions that are available:
  menu.setGlobalAlligment(direction) -> sets the alignment for all items
  menu.changePosRelative(x, y) changes the position of the menu relative to its original position
  menu.changePosAbsolute(x, y) sets the menu position to a specific value
       
  unless the user specifies otherwise or sets it during code, the text color will be white.
 
