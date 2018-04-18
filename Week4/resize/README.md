#[resize](http://cdn.cs50.net/2016/x/psets/4/pset4/pset4.html#resize)

Implement in resize.c a program called resize that resizes 24-bit uncompressed BMPs by a factor of n. Your program should accept exactly three command-line arguments, per the below usage, whereby the first (n) must be a positive integer less than or equal to 100, the second the name of the file to be resized, and the third the name of the resized version to be written.

Spend some time thinking about what it means to resize a BMP. Decide which of the fields in BITMAPFILEHEADER and BITMAPINFOHEADER you might need to modify. Consider whether or not you’ll need to add or subtract padding to scanlines.

`Usage: ./resize n infile outfile`

## solution
Original image: small.bmp

![small.bmp](https://raw.githubusercontent.com/chumakig86/CS50/master/Week4/resize/small.bmp "small.bmp")

Resized image (100x zoom): large.bmp
![large.bmp](https://raw.githubusercontent.com/chumakig86/CS50/master/Week4/resize/large.bmp "large.bmp")
