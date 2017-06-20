//
// Created by Petro Panchenko on 6/15/17.
//

#include "Human.hpp"

void Human::meleeAttack(const std::string &target)
{
	std::cout << "meleeAttack: " << target << std::endl;
}

void Human::rangedAttack(const std::string &target)
{
	std::cout << "rangedAttack: " << target << std::endl;
}

void Human::intimidatingShout(const std::string &target)
{
	std::cout << "intimidatingAttack: " << target << std::endl;
}

void Human::action(const std::string &action_name, const std::string &target)
{
	void (Human::*func[])(const std::string &) =
			{&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};
	std::string func_names[] = {"meleeAttack", "rangedAttack", "intimidatingShout"};

	for (int i = 0; i < 3; i++)
	{
		if (func_names[i] == action_name)
			(this->*func[i])(target);
	}
}
