proj02

All code written by Yousef Gtat and Ian Bacus Responsibilities:


Ian: drew the UML diagram, drafted interface options for the abstract classes, wrote the barista binning algorithm implementations and the printing algorithm of the orderlist.
Yousef: wrote the AbstractOrderListFactory class, refined the interface options between the two classes, and edited the previous drink class to match this project needs.

Both students: designed the class hierarchy to match the abstract factory pattern. Both debugged and cleaned up the code to aviod crashes.

NETIDs: Yousef Gtat: gtatyous Ian Bacus: bacusian

EVERYTHING WORKS. To extend the barista class, a new concrete barista could be created. It would have to

if we can get function pointers working, it would take only two lines of code to re-implement deliverOrder
To extend the OrderList class, a new type of Drink object would first have to be generated. Or, if a "mixed list" of OJ and BT objects were to be created as an orderlist type, then a new type of Drink concrete object would not need to be implemented. The Constructors and destructors would depend on the private vector member, so they would need to be reimplemnted very similarly to the existing OrderList concrete classes and cannot inherit from the abstract class.

In this project, an abstract factory was designed around the drink class designed in the previous project. The Barista class provided an interface for the "algorithms," and the OrderList class provided an interface for the "data." This separation allows new algorithms and data types to be added as concrete classes to these base class interfaces, and does not require additional code in the other classes to accomodate this. Baristas operate through a temporary instance of the AbstractOrderList that they can call methods on. The OrderList class provides an interface to [SEPARATE, INDIVIDUAL OBJECTS FROM THE VECTOR / THE ORDERLIST MEMBER VECTOR? UP TO YOU].

In the concrete implementations, the OrderLists are broken up into OrangeJuiceOrderLists and BubbleTeaLists. The key difference between these is [THEIR DATA TYPE. EACH ONE HOLDS A VECTOR OF CONCRETE DRINK OBJECTS OF THEIR RESPECTIVE TYPE, AND THE CASTING CONVERSION TAKES PLACE IN THE BARISTA ALGORITHMS / THEIR CONSTRUCTORS. THEIR VECTORS ARE INSTANTIATED FROM THE SAME TYPE AS THEIR NAME, BUT THEY IMMEDIATELY PUSH AND CAST THESE OBJECTS INTO A VECTOR OF DRINK OBJECTS].

Type "make" and "./out" to compile and run the program.