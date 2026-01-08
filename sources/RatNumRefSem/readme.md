Generating the documentation reveals a problem with respect to
the call graph for main() in main.cpp. There is no box for
rational_number::RationalNumber::divide. Turning lines 39 and
40 into a comment has the effect, that the box for this 
method is drawn correctly. The reason for this is not known
to the author.