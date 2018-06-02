exe:	main.o platos.o ingredientes.o bodega.o 
	g++ main.o platos.o ingredientes.o bodega.o -o exe

main.o:	main.cpp platos.h ingredientes.h bodega.h
	g++ -c main.cpp

platos.o:	platos.h platos.cpp ingredientes.h
	g++ -c platos.cpp

ingredientes.o:	ingredientes.h ingredientes.cpp 	
	g++ -c ingredientes.cpp

bodega.o:	bodega.cpp	bodega.h ingredientes.h
	g++ -c bodega.cpp