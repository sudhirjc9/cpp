# Friend function
- Friend function is not the member function of a class to which is a friend.
- Friend function is declared in the class with friend keyword
- It must be defined outside the the class to which it is friend.
- Friend function can access any member of the class to which it is friend.
- Friend function cannot access members of the class directly.
- It has no caller object because it is not a member function. 
- It should t be defined with membership label. 

**A friend function cannot acceess member function of a class directly**
- Reason behind that is, since there can be so many objects how would friend function know which objects member is it accessing.
- So to avoid this confusion we have to pass the object to the friend function.
- and then by using `. operator ` a friend function can access member function, including the private members.

---
### Note
- friend function can be declared in any section be it public, private or protected. Since it is not the member of class it does not matter where we declare it.
---

_Friend function can become more than a friend function_

``` friend
- If we want to use private members of two different classes at the same time, then normally it is not possible but by using friend function we can do this
- Friend function can become friend to more than one class.
- Freind fucntion can access private member of more than one class at the same time, which is not posssible by other ways. 
```

**Operator overloading can also be done through friend fucntion both Unary and Binary**
- One extra object is passed when using friend function as operator overloading.
- See code for reference.
- Member function of one class can become friend to another class by using scope resolution operator, example
- A class can also be a friend of another class if you want all the functions of one class to be friend of another class
```Code example
    
    class A{

    public:
        void func(){
            .....
        }
    };

    class B{

        friend void A::func();                      // for indiviual class this can be used
        friend class A;
    }
```

***Code examples**
-[] insertion and extraction operator overloading.