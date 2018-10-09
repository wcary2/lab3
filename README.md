# lab3
lab3


2.	a) The overflow can be detected by testing whether the operation exceeds short_max before actually executing
		operation.


	b) An overflow was detected: the operation was stopped.
	last value of sumShort: 32640
	last value of n before overflow: 255
	Value of n that caused overflow: 256
	
3. a) The overflow can be detected by testing whether the value of n and the current sum are above zero and whether
	  the result is positive or negative. If it is negative then an overflow occured. This should be done before
	  the actual operation has occured. 
	
   b)An overflow was detected: the operation was stopped
	 last value of sumLong: 2147450880
	 last value of n before overflow: 65535
	 Value of n that caused overflow: 65536
	 

4.	a)	The overflow can be detected by testing whether the operation would be equal to INFINITY before the operation is executed


	b)	An overflow was detectedL the operation was stopped
		last value of the factorial was: 2.95233e+38
		last value of n before overflow: 34
		alue of n that caused the overflow: 35
		
5.	An overflow was detectedL the operation was stopped
	last value of the factorial was: 7.25742e+306
	last value of n before overflow: 170
	value of n that caused the overflow: 171
	

6. The sum of the ratio of the float test is not as completely precise as adding the ratio n times should always result in 1,
	but when n gets large the sum of the ratio demonstrates a lack of precision by remaining less than the expected value
	for instance:
		Enter value of n: 1000
		value of the ratio is: 0.001
		the sum of the 1000 times is: 0.999991
	--> expected = 1
		
7.	The double version of the previous function results in much more precision as it always results in 1
	for instance: 
		Enter value of n: 8888885
		value of the ratio is: 1.125e-07
		the sum of the 8.88889e+06 times is: 1
	--> expected = 1
	
8.	The numerical error occurs during the last iteration of the for loop when the loop should have recognized that i was
	equal to 4.4 and stopped, but instead continued through the for loop.
	
9. The numerical error does not occure demonstrating that the double is more precise and accurate than floats
