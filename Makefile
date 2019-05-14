MAIN:main.o app_handler.o output.o publisher.o user.o film.o not.o comment.o exceptions.o 
	g++ main.cpp app_handler.cpp output.cpp publisher.cpp user.cpp film.cpp not.cpp comment.cpp exceptions.cpp -o virtual_network.out
main.o:main.cpp app_handler.o
	g++ -c main.cpp
app_handler.o:app_handler.cpp app_handler.hpp film.o user.o exceptions.o output.o 
	g++ -c app_handler.cpp
output.o:output.cpp output.hpp comment.o film.o not.o user.o
	g++ -c output.cpp
publisher.o:publisher.cpp publisher.hpp user.o
	g++ -c publisher.cpp
user.o:user.cpp user.hpp not.o film.o 
	g++ -c user.cpp
film.o:film.cpp film.hpp comment.o
	g++ -c film.cpp
comment.o:comment.cpp comment.hpp
	g++ -c comment.cpp
not.o:not.cpp not.hpp
	g++ -c not.cpp
exceptions.o:exceptions.cpp exceptions.hpp
	g++ -c exceptions.cpp
.PHONY:clean
clean:
	rm *.o
	rm a.out
