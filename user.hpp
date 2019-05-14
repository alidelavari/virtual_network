#ifndef USER_HPP
#define USER_HPP
#include <map>
#include <string>
#include "film.hpp"
#include "not.hpp"
class User{
protected:
	int id;
	std::string username;
	std::string password;
	std::string email;
	int age;
	bool is_publisher;
	int saved_money;
	std::vector<Film*> bought_film_list;
	std::vector<Not*> not_list;
public:
	User(int id , std::string username , std::string password ,
	 std::string email , int age , bool is_publisher);
	void login(std::map<std::string , std::string>);
	void signup();
	void follow();
	void add_money();
	void buy_film();
	void get_bought_film_list();
	void get_seen_note();
	void get_unseen_note();
};
#endif