.PHONY: oops_6.o oops_6 oops_7.o oops_7 moc moc_1.o defcpyc defcpyc.o
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

tqs_adv: tqs_adv.o
	g++ -o tqs_adv tqs_adv.o
tqs_adv.o:
	#we are tqs.o
	g++ -c tqs_adv.cc

filehandle: filehandle.o
	g++ -o filehandle filehandle.o
filehandle.o:
	#we are tqs.o
	g++ -c filehandle.cc

creatbin: creatbin.o
	g++ -o creatbin creatbin.o
creatbin.o:
	#we are tqs.o
	g++ -c creatbin.cc

readdb: readdb.o
	g++ -o readdb readdb.o
readdb.o:
	#we are tqs.o
	g++ -c readdb.cc

oops_1: oops_1.o
	g++ -o oops_1 oops_1.o
oops_1.o:
	#we are tqs.o
	g++ -c oops_1.cc

oops_2: oops_2.o
	g++ -o oops_2 oops_2.o
oops_2.o:
	#we are tqs.o
	g++ -c oops_2.cc

oops_3: oops_3.o
	g++ -o oops_3 oops_3.o
oops_3.o:
	#we are tqs.o
	g++ -c oops_3.cc

oops_4: oops_4.o
	g++ -o oops_4 oops_4.o
oops_4.o:
	#we are tqs.o
	g++ -c oops_4.cc

oops_5: oops_5.o
	g++ -o oops_5 oops_5.o
oops_5.o:
	#we are tqs.o
	g++ -c oops_5.cc

oops_6: oops_6.o
	g++ -o oops_6 oops_6.o
	g++ -o oops_7 oops_7.o
	g++ -o oops_9 oops_9.o
	g++ -o oops_12 oops_12.o
	g++ -o oops_13 oops_13.o
	g++ -o verb verb.o
	g++ -o oops_14 oops_14.o
	g++ -o oops_15 oops_15.o
	g++ -o oops_16 oops_16.o
	g++ -o oops_17 oops_17.o
oops_6.o:
	g++ -c oops_6.cc
	g++ -c oops_7.cc
	g++ -c oops_9.cc
	g++ -c oops_12.cc
	g++ -c oops_13.cc
	g++ -c verb.cc
	g++ -c oops_14.cc
	g++ -c oops_15.cc
	g++ -c oops_16.cc
	g++ -c oops_17.cc

moc: moc_1.o
	g++ -o moc_1 moc_1.o
	g++ -o moc_2 moc_2.o
	g++ -o moc_3 moc_3.o
	g++ -o moc_4 moc_4.o
	g++ -o moc_5 moc_5.o
	g++ -o moc_6 moc_6.o
moc_1.o:
	g++ -c moc_1.cc
	g++ -c moc_2.cc
	g++ -c moc_3.cc
	g++ -c moc_4.cc
	g++ -c moc_5.cc
	g++ -c moc_6.cc

defcpyc : defcpyc.o
	g++ -o defcpyc defcpyc.o
	#g++ -o defcpyc_2 defcpyc_2.o
	g++ -o opoverload opoverload.o
defcpyc.o:
	g++ -c defcpyc.cc
	#g++ -c defcpyc_2.cc
	g++ -c opoverload.cc

clean:
	rm -rf *o *exe structexam main book strcpoint structexam tqs tqs_adv filehandle creatbin readdb oops_1 oops_2 oops_3 oops_4 oops_5 oops_6 moc_1 moc_2 moc_3 moc_4 moc_5 defcpyc defcpyc_2