all: shop
product.o: product.cpp product.h
g++ -c -o product.o product.cpp
shop.o: shop.cpp shop.h
g++ -c -o shop.o shop.cpp
main.o: main.cpp
g++ -c -o main.o main.cpp
shop: shop.o product.o main.o
g++ -o shop shop.o product.o main.o