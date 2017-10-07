usage:
	echo "Usage: make foo_NoInst , or: make foo_Inst"


foo_NoInst: codeInstrumentation.o 
	gcc -o foo_NoInst codeInstrumentation.o

codeInstrumentation.o:
	gcc -c codeInstrumentation.c

foo_Inst:
	gcc -DINSTDEBUG -o fooInst codeInstrumentation.c

clean:
	rm fooInst foo_NoInst *.o

