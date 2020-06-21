All:
	g++ -o main main.cc
structexam:
	g++ -o structexam structexam.cc
book: book.o
	g++ -o book book.o
book.o:
	#we are book.o
	g++ -c book.cc

strcpoint: strcpoint.o
	g++ -o strcpoint strcpoint.o
strcpoint.o:
	#we are strcpoint.o
	g++ -c strcpoint.cc
tqs: tqs.o
	g++ -o tqs tqs.o
tqs.o:
	#we are tqs.o
	g++ -c tqs.cc

clean:
	rm -rf *o *exe structexam main book strcpoint structexam tqs