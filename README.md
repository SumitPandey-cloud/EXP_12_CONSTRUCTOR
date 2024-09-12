# Experiment 12

**Aim:** <br>
To study and implement constructors and destructors. <br>
<br>
**Theory:** <br>
Constructors: <br>
<br>
Constructors are unique member functions of a class that are automatically called when an object of the class is created. The object’s data members are initialized. Resources may also be allocated when required. <br>
There are some key points about costructors which are: <br>
&#8594; The name of the constructor is same as its class name. <br>
&#8594; Constructors do not have a return type. <br>
&#8594; Constructors are mostly declared in the public section of the class. <br>
&#8594; Multiple constructors can be defined with different parameters, this is known as overloading. <br>
<br>
There are mainly 3 types of constructors. They are: <br>
_Default Constructor:_ <br>
A constructor which takes no arguments. It is also called a zero-argument constructor as it has no parameters. <br>
_Parameterized Constructor:_  <br>
A constructor that takes parameters, allowing the object to be initialized with specific values. <br>
_Copy Constructor:_  <br>
A constructor that initializes an object using another object of the same class. It is used for deep copying and when passing objects by value. <br>
<br>

Destructors <br>
A destructor is a special member function which destroys the class objects created by the constructor. It has the same name as their class name preceded by a _tilde_ (~) symbol.
There are some key points about destructors which are: <br>
&#8594; They neither require any argument nor do they return any value. <br>
&#8594; They release memory space which are occupied by the objects created by the constructor. <br>
&#8594; Destructor cannot be overloaded. <br>
&#8594; Objects are destroyed in the reverse of an object creation. <br>
&#8594; Only one destructor can be defined. <br>
<br>

**Code:** <br>
