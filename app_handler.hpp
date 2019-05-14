#ifndef APP_HANDLER_HPP
#define APP_HANDLER_HPP
#include <vector>
#include "user.hpp"
#include "film.hpp"
class App_handler{
private:
	User* current_user;
	std::vector<User*> user_list;
	std::vector<Film*> film_list;
	int total_money;
public:
	App_handler();
	void analize_command();
	std::vector<Film*> get_recommended_film_list();
	std::vector<Film*> get_filtered_film_list();
	void add_money(int money);
};
#endif