.PHONY: clean distclean default

CXX=c++
CXXFLAGS=-g -Wall

default: GinNTony

lexer.cpp: lexer.l
	flex -s -o lexer.cpp lexer.l

lexer.o: lexer.cpp lexer.hpp parser.hpp ast.hpp general.hpp error.hpp

parser.hpp parser.cpp: parser.y
	bison -dv -o parser.cpp parser.y

parser.o: parser.cpp lexer.hpp ast.hpp symbol.hpp general.hpp error.hpp

GinNTony: lexer.o parser.o 
	$(CXX) $(CXXFLAGS) -o GinNTony lexer.o parser.o error.cpp general.cpp symbol.cpp

clean:
	$(RM) lexer.cpp parser.cpp parser.hpp parser.output *.o 

distclean: clean
	$(RM) GinNTony