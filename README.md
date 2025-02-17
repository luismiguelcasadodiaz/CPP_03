# CPP_03

## Ex03, the diamond problem

The scenario where class **DiamondTrap** inherits from two classes (**FragTrap** and **ScavTrap**) that share a common ancestor (**ClapTrap**) is known as the Diamond Problem in multiple inheritance.

### Key Characteristics of the Diamond Problem:

+ **Multiple Inheritance**: It arises specifically in situations where a class inherits from two or more base classes that themselves share a common ancestor.  

+ **Ambiguity**: The core issue is ambiguity. If the common ancestor class (**ClapTrap**) contains data members or methods, the derived class inherits these members twice (one from **FragTrap** and other from **ScavTrap**). This creates uncertainty about which inherited version to use, leading to potential conflicts and unexpected behavior.

### Resolving the Diamond Problem:

Virtual Inheritance: The most common and effective solution is to use virtual inheritance. By declaring the common ancestor class as virtual in the intermediate classes, you ensure that only one instance of the common ancestor's members exists within the derived class.

```c++
class ClapTrap { 
  // ... 
};

class FragTrap : virtual public ClapTrap { 
  // ... 
};

class ScavTrap : virtual public ClapTrap { 
  // ... 
};

class DiamondTrap : public FragTrap, public ScavTrap { 
  // ... 
};
```


While virtual inheritance resolves the ambiguity, it can introduce some complexity and potential overhead.  

### The order **maters**

Declaring the inheritance in one order or other changes DiamondTrap behaviour.

```c++
class DiamondTrap: public ScavTrap, public FragTrap {} //option 1
class DiamondTrap: public FragTrap, public ScavTrap {} //option 2
```

Either FragTrap or ScapTrap use ClapTrap attributes, so the last one keeps its attributes correctly and overwrites former's attributes.

You can see it, when you try to define Diamond attributes according to subject rules

•Hit points (FragTrap)
•Energy points (ScavTrap)
•Attack damage (FragTrap)

DiamTrap Luis Miguel [hit ==>(100) energy ==>(100) attack ==>(30)] //Option 1
DiamTrap Luis Miguel [hit ==>(100) energy ==>(50) attack ==>(20)] //Option 2