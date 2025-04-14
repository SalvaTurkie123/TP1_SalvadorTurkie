HEADERS = -I ej2/Personajes/ \
          -I ej2/Personajes/Magos/ \
          -I ej2/Personajes/Guerreros/ \
          -I ej2/Armas/ \
          -I ej2/Armas/ArmasCombate/ \
          -I ej2/Armas/ItemsMagicos/ \
          -I . \
          -I ej3/ \
          -I ej4/

SRC_COMMON = ej2/Personajes/Magos/*.cpp \
             ej2/Personajes/Guerreros/*.cpp \
             ej2/Armas/ArmasCombate/*.cpp \
             ej2/Armas/ItemsMagicos/*.cpp

SRC_EJ2 = ej3/PersonajeFactory.cpp 
SRC_EJ3 = ej3/PersonajeFactory.cpp ej4/Batalla.cpp

ej2:
	g++ -std=c++17 -Wall -Wextra $(HEADERS) -g ej2/main_ej2.cpp $(SRC_COMMON) $(SRC_EJ2) -o ejercicio2
	./ejercicio2

ej3:
	g++ -std=c++17 -Wall -Wextra $(HEADERS) -g ej3/main_ej3.cpp $(SRC_COMMON) $(SRC_EJ2) -o ejercicio3
	./ejercicio3

ej4:
	g++ -std=c++17 -Wall -Wextra $(HEADERS) -g ej4/main_ej4.cpp $(SRC_COMMON) $(SRC_EJ3) -o ejercicio4
	./ejercicio4

clean:
	rm -f ejercicio2 ejercicio3 ejercicio4
	rm -rf *.dSYM/
