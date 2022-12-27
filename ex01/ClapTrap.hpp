#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	public:
		// Constructors
		ClapTrap( void );
		ClapTrap(std::string name);
		ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage);
		ClapTrap(const ClapTrap &copy);
		
		// Destructor
		virtual ~ClapTrap();
		
		// Operators
		ClapTrap & operator=(const ClapTrap &assign);

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		bool	isActive(void);
	
	protected:
		std::string _name;
		int	_hitPoints;
		int	_energyPoints;
		int	_attackDamage;
		
};

#endif