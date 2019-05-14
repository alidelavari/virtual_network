#ifndef EXCEPTIONS_HPP
#define EXCEPTIONS_HPP
class Not_found: public std::exception{
public:
	virtual const char* what() const throw();
};

class Bad_request: public std::exception{
public:
	virtual const char* what() const throw();
};

class  Permition_denied: public std::exception{
public:
	virtual const char* what() const throw();
};
#endif