<details>
 <summary>caesar.c</summary>
 <p>Design and implement a program, <code>caesar</code>, that encrypts messages using Caesar&#8217;s cipher.</p>
</div>
<div class="ulist">
<ul>
<li>
<p>Implement your program in a file called <code>caesar.c</code> in a directory called <code>caesar</code>.</p>
</li>
<li>
<p>Your program must accept a single command-line argument, a non-negative integer. Let&#8217;s call it <em>k</em> for the sake of discussion.</p>
</li>
<li>
<p>If your program is executed without any command-line arguments or with more than one command-line argument, your program should print an error message of your choice (with <code>printf</code>) and return from <code>main</code> a value of <code>1</code> (which tends to signify an error) immediately.</p>
</li>
<li>
<p>You can assume that, if a user does provide a command-line argument, it will be a non-negative integer (e.g., <code>1</code>). No need to check that it&#8217;s indeed numeric.</p>
</li>
<li>
<p>Do not assume that <em>k</em> will be less than or equal to 26. Your program should work for all non-negative integral values of <em>k</em> less than 2<sup>31</sup> - 26. In other words, you don&#8217;t need to worry if your program eventually breaks if the user chooses a value for <em>k</em> that&#8217;s too big or almost too big to fit in an <code>int</code>. (Recall that an <code>int</code> can overflow.) But, even if <em>k</em> is greater than 26, alphabetical characters in your program&#8217;s input should remain alphabetical characters in your program&#8217;s output. For instance, if <em>k</em> is 27, <code>A</code> should not become <code>[</code> even though <code>[</code> is 27 positions away from <code>A</code> in ASCII, per <a href="http://www.asciichart.com/">asciichart.com</a>; <code>A</code> should become <code>B</code>, since <code>B</code> is 27 positions away from <code>A</code>, provided you wrap around from <code>Z</code> to <code>A</code>.</p>
</li>
<li>
<p>Your program must output <code>plaintext:</code> (without a newline) and then prompt the user for a <code>string</code> of plaintext (using <code>get_string</code>).</p>
</li>
<li>
<p>Your program must output <code>ciphertext:</code> (without a newline) followed by the plaintext&#8217;s corresponding ciphertext, with each alphabetical character in the plaintext "rotated" by <em>k</em> positions; non-alphabetical characters should be outputted unchanged.</p>
</li>
<li>
<p>Your program must preserve case: capitalized letters, though rotated, must remain capitalized letters; lowercase letters, though rotated, must remain lowercase letters.</p>
</li>
<li>
<p>After outputting ciphertext, you should print a newline. Your program should then exit by returning <code>0</code> from <code>main</code>.</p>
</li>
</ul>
</details>
<details>
 <summary>initials.c</summary>
<p>Design and implement a program, <code>initials</code>, that, given a person&#8217;s name, prints a person&#8217;s initials.</p>
</div>
<div class="ulist">
<ul>
<li>
<p>Implement your program in a file called <code>initials.c</code> in a directory called <code>initials</code>.</p>
</li>
<li>
<p>Your program should prompt a user for their name using <code>get_string</code> to obtain their name as a <code>string</code>.</p>
</li>
<li>
<p>You may assume that the user&#8217;s input will contain only letters (uppercase and/or lowercase) plus single spaces between words. You don&#8217;t need to worry about names like <code>Joseph Gordon-Levitt</code>, <code>Conan O&#8217;Brien</code>, or <code>David J. Malan</code>!</p>
</li>
<li>
<p>Your program should print the user&#8217;s initials (i.e., the first letter of each word in their name) with no spaces or periods, followed by a newline (<code>\n</code>).</p>
</li>
</ul>
</div>
</details>
<details>
 <summary>vigenere.c</summary>
<p>Design and implement a program that encrypts messages using Vigenère&#8217;s cipher.</p>
</div>
<div class="ulist">
<ul>
<li>
<p>Implement your program in a file called <code>vigenere.c</code> in a directory called <code>vigenere</code>.</p>
</li>
<li>
<p>Your program must accept a single command-line argument: a keyword, <em>k</em>, composed entirely of alphabetical characters.</p>
</li>
<li>
<p>If your program is executed without any command-line arguments, with more than one command-line argument, or with one command-line argument that contains any non-alphabetical character, your program should print an error (of your choice) and exit immediately, with <code>main</code> returning <code>1</code> (thereby signifying an error).</p>
</li>
<li>
<p>Otherwise, your program must proceed to prompt the user for a string of plaintext, <em>p</em>, (as by a prompt for <code>plaintext:</code>) which it must then encrypt according to Vigenère&#8217;s cipher with <em>k</em>, ultimately printing the result (prepended with <code>ciphertext:</code> and ending with a newline) and exiting, with <code>main</code> returning <code>0</code>.</p>
</li>
<li>
<p>With respect to the characters in <em>k</em>, you must treat <code>A</code> and <code>a</code> as 0, <code>B</code> and <code>b</code> as 1, &#8230;&#8203; , and <code>Z</code> and <code>z</code> as 25.</p>
</li>
<li>
<p>Your program must only apply Vigenère&#8217;s cipher to a character in <em>p</em> if that character is a letter. All other characters (numbers, symbols, spaces, punctuation marks, etc.) must be outputted unchanged. Moreover, if your code is about to apply the <em>j<sup>th</sup></em> character of <em>k</em> to the <em>i<sup>th</sup></em> character of <em>p</em>, but the latter proves to be a non-alphabetical character, you must wait to apply that <em>j<sup>th</sup></em> character of <em>k</em> to the next alphabetical character in <em>p</em>; you must not yet advance to the next character in <em>k</em>.</p>
</li>
<li>
<p>Your program must preserve the case of each letter in <em>p</em>.</p>
</li>
</ul>
</div>
</details>


