CXX = g++
CXXFLAGS = -std=c++11 -Wall
SRC = main.cpp Cliente.cpp Admin.cpp Locadora.cpp Carro.cpp Veiculo.cpp Conta.cpp Pagamento.cpp
OBJ = $(SRC:.cpp=.o)
EXEC = programa

.PHONY: all clean run

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f $(OBJ) $(EXEC)

run: $(EXEC)
	./$(EXEC)
