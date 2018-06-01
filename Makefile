# build
main.out: main.o bodega.o ingredientes.o platos.o 
        g++ main.o bodega.o ingredientes.o platos.o -o main.out

# bodega
bodega.o: bodega.h bodega.cpp
        g++ -c bodega.cpp

# ingredientes
ingredientes.o: ingredientes.h ingredientes.cpp
        g++ -c ingredientes.cpp

# platos
platos.o: platos.h platos.cpp
        g++ -c platos.cpp

# main
main.o: bodega.h ingredientes.h platos.h main.cpp
        g++ -c main.cpp

# clean
.PHONY: clean
clean:
        rm *.o main.out
~                             