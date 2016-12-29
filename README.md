proj02

All code written by A and Ian Bacus Responsibilities:


Ian: drew the UML diagram, wrote the barista class and deliverOrder implementations, and wrote the printing algorithm for the orderlist vectors.

A: wrote the AbstractOrderListFactory class and designed its interface, and edited the previous drink class to match this project needs.

Both students: designed the class hierarchy to match the abstract factory pattern. Both debugged and cleaned up the code to aviod crashes.

NETIDs: 

EVERYTHING WORKS. To extend the barista class, a new concrete barista could be created. They would not require any additional code in the existing classes to implement a new deliverOrder algorithm.

To extend the OrderList class, a new type of Drink object would first have to be generated. Or, if a "mixed list" of OJ and BT objects were to be created as an orderlist type, then a new type of Drink concrete object would not need to be implemented. The virtual accessor methods would need a new override for whatever vector type the new class had.

In this project, an abstract factory was designed around the drink class designed in the previous project. The Barista class provided an interface for the "algorithms," and the OrderList class provided an interface for the "data." This separation allows new algorithms and data types to be added as concrete classes to these base class interfaces, and does not require additional code in the other classes to accomodate this. Baristas operate through a temporary instance of the AbstractOrderList that they can call methods on. The OrderList class provides an interface to individual objects from the vector and to the size of the vector.

In the concrete implementations, the OrderLists are broken up into OrangeJuiceOrderLists and BubbleTeaLists. The key difference between these concrete classes is their data type. Each one holds a vector of concrete drink objects of their respetive type, and the casting conversion takes place inside the Barista algorithms on each extraction with the accessor method for individual objects of the vector.


Type "make" and "./out" to compile and run the program.
