FLAGS =-Wall -g

all: loops recursives recursived  loopd  mains maindloop maindrec

#create static lib for loop
loops: libclassloops.a
#create static lib for rec
recursives:libclassrec.a
#create dynamic lib for loop
loopd:libclassloops.so
#create dynamic lib for rec
recursived:libclassrec.so

libclassloops.a:basicClassification.o advancedClassificationLoop.o 
	ar -rcs libclassloops.a basicClassification.o advancedClassificationLoop.o
libclassrec.a:basicClassification.o advancedClassificationRecursion.o
	ar -rcs libclassrec.a basicClassification.o advancedClassificationRecursion.o  
libclassrec.so:basicClassification.o advancedClassificationRecursion.o
	gcc $(FLAGS) -shared -o libclassrec.so basicClassification.o advancedClassificationRecursion.o
libclassloops.so:basicClassification.o advancedClassificationLoop.o
	gcc $(FLAGS) -shared -o libclassloops.so basicClassification.o advancedClassificationLoop.o


#static with rec
mains:main.o libclassrec.a 
	gcc $(FLAGS) -o mains main.o libclassrec.a -lm
#dynamic with loop
maindloop:main.o 
	gcc $(FLAGS) -o maindloop main.o ./libclassloops.so -lm
#dynamic with rec
maindrec:main.o 
	gcc $(FLAGS) -o maindrec main.o ./libclassrec.so -lm


basicClassification.o: basicClassification.c NumClass.h
	gcc $(FLAGS) -c basicClassification.c 
advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	gcc $(FLAGS) -c advancedClassificationRecursion.c 
advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	gcc $(FLAGS) -c advancedClassificationLoop.c 
main.o: main.c NumClass.h
	gcc $(FLAGS) -c main.c 
		
.PHONY: clean
clean:
	rm -f *.o *.a *.so mains maindloop maindrec