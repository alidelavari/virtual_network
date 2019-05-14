#ifndef OUTPUT_HPP
#define OUTPUT_HPP
#include <iostream>
#include <vector>
#include "user.hpp"
#include "film.hpp"
#include "not.hpp" 
class Output{
public:
	void static show_success_msg();
	void static show_followers(std::vector<User*>);
	void static show_film_list(std::vector<Film*>);
	void static show_detatiled_film_list(std::vector<Film*> , std::vector<Film*>);
	void static show_nots(std::vector<Not*>);
};
#endif