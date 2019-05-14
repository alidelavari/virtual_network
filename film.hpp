#ifndef FILM_HPP
#define FILM_HPP
#include <vector>
#include <string>
#include "header.hpp"
#include "comment.hpp"
class Film{
private:
	int id;
	std::string name;
	int production_year;
	int length;
	int price;
	std::string summery;
	std::string director;
	int rate;
	int number_of_sales;
	std::vector<Comment*> comment_list;
public:
	Film(int id , std::string name , int production_year ,
	 int length , int price , std::string summery , std::string director);
	film_levels get_rate_level();
	void rate(int rate);
	void add_comment(Comment*);
};
#endif