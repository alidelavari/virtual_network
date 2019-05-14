#ifndef NOT_HPP
#define NOT_HPP
#include <string>
class Not{
private:
	std::string msg;
	bool is_seen;
public:
	std::string get_msg();
	bool get_seen_state();
	void set_seen();
};
#endif