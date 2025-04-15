HEADERS = -I ej1/Personajes/ \
          -I ej1/Personajes/Magos/ \
          -I ej1/Personajes/Guerreros/ \
          -I ej1/Armas/ \
          -I ej1/Armas/ArmasCombate/ \
          -I ej1/Armas/ItemsMagicos/ \
          -I . \
          -I ej2/ \
          -I ej3/

SRC_COMMON = ej1/Personajes/Magos/*.cpp \
             ej1/Personajes/Guerreros/*.cpp \
             ej1/Armas/ArmasCombate/*.cpp \
             ej1/Armas/ItemsMagicos/*.cpp

SRC_EJ2 = ej2/PersonajeFactory.cpp
SRC_EJ3 = ej2/PersonajeFactory.cpp ej3/Batalla.cpp

ejercicio1:
	g++ -std=c++17 -Wall -Wextra $(HEADERS) -g ej1/main_ej1.cpp $(SRC_COMMON) $(SRC_EJ2) -o ejercicio1
	./ejercicio1

ejercicio2:
	g++ -std=c++17 -Wall -Wextra $(HEADERS) -g ej2/main_ej2.cpp $(SRC_COMMON) $(SRC_EJ2) -o ejercicio2
	./ejercicio2

ejercicio3:
	g++ -std=c++17 -Wall -Wextra $(HEADERS) -g ej3/main_ej3.cpp $(SRC_COMMON) $(SRC_EJ3) -o ejercicio3
	./ejercicio3

clean:
	rm -f ejercicio1 ejercicio2 ejercicio3
	rm -rf *.dSYM/