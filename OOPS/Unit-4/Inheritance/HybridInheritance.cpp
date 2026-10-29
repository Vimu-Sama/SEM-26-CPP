#include<iostream>

class C{

};

class A: public C{

};

class B: public C{

} ;

class E: public A{

};

class D: public B{

};