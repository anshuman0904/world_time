#include <iostream>
#include <omniORB4/CORBA.h>
#include "example.hh"

int main(int argc, char** argv) {
    try {
        CORBA::ORB_var orb = CORBA::ORB_init(argc, argv);
        CORBA::Object_var obj = orb->string_to_object("corbaloc::localhost:12345/ExampleHello");

        Example::Hello_var hello = Example::Hello::_narrow(obj);
        if (!CORBA::is_nil(hello)) {
            CORBA::String_var response = hello->sayHello();
            std::cout << "Server response: " << response.in() << std::endl;
        }
    } catch (CORBA::Exception& e) {
        std::cerr << "Exception: " << e._name() << std::endl;
    }
    return 0;
}
