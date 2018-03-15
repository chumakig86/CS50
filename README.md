# CS50
C# coding tasks from Harvard CS50 course.
<p>Description:</p>
<details>
  <summary>Week 1</summary>
<details>
  <summary>cash.c</summary>
  <ul>
  <li>Write, in a file called cash.c in ~/workspace/pset1/cash/, a program that first asks the user how much change is owed and then spits out the minimum number of coins with which said change can be made.</li>
  <li>Use get_float from the CS50 Library to get the user’s input and printf from the Standard I/O library to output your answer. Assume that the only coins available are quarters (25¢), dimes (10¢), nickels (5¢), and pennies (1¢).
    <ul>
      <li> We ask that you use get_float so that you can handle dollars and cents, albeit sans dollar sign. In other words, if some customer is owed $9.75 (as in the case where a newspaper costs 25¢ but the customer pays with a $10 bill), assume that your program’s input will be 9.75 and not $9.75 or 975. However, if some customer is owed $9 exactly, assume that your program’s input will be 9.00 or just 9 but, again, not $9 or 900. Of course, by nature of floating-point values, your program will likely work with inputs like 9.0 and 9.000 as well; you need not worry about checking whether the user’s input is "formatted" like money should be.
      </li>
    </ul>
    </li>
  <li>You need not try to check whether a user’s input is too large to fit in a float. Using get_float alone will ensure that the user’s input is indeed a floating-point (or integral) value but not that it is non-negative.</li>
<li> If the user fails to provide a non-negative value, your program should re-prompt the user for a valid amount again and again until the user complies. </li>
<li>Incidentally, so that we can automate some tests of your code, we ask that your program’s last line of output be only the minimum number of coins possible: an integer followed by \n.</li>
</ul>  
</details>
<details>
  <summary>hello.c</summary>
  Standard hello world application :)
</details>
<details>
  <summary>mario.c</summary>
  Write a program in C that recreates a half-pyramid using hashes (#) for blocks. Prompt the user for the half-pyramid’s height and align the bottom-left corner of the half-pyramid with the left-hand edge of the terminal window.
</details>
<details>
  <summary>water.c</summary>
  Write, in a file called water.c in your ~/workspace/pset1 directory, a program that prompts the user for the length of his or her shower in minutes (as a positive integer) and then prints the equivalent number of bottles of water (as an integer) per the sample output below, wherein underlined text represents some user’s input.
</details>
  </details>
