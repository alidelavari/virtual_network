#include <map>
#include <string>
#include "film.hpp"
#include "user.hpp"
class Publisher : public User{
private:
	std::vector<Film*> posted_film_list;
	std::vector<User*> follower_list;
public:
	Publisher(int id , std::string username , std::string password ,
	 std::string email , int age , bool is_publisher);
	void post_film();
	void del_film();
	void get_money();
	void get_own_published_list();
	void reply_comment();
	void del_comment();
	void get_followers();
};