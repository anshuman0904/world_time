#include <iostream>
#include <omniORB4/CORBA.h>
#include "example.hh"

class HelloImpl : public POA_Example::Hello {
public:
    char* sayHello() override {
        return CORBA::string_dup("Hello from CORBA Server!");
    }
};

int main(int argc, char** argv) {
    try {
        CORBA::ORB_var orb = CORBA::ORB_init(argc, argv);
        CORBA::Object_var obj = orb->resolve_initial_references("RootPOA");
        PortableServer::POA_var poa = PortableServer::POA::_narrow(obj);

        HelloImpl* hello_impl = new HelloImpl();
        PortableServer::ObjectId_var hello_id = poa->activate_object(hello_impl);
        Example::Hello_var hello_ref = hello_impl->_this();

        std::cout << "Server is ready." << std::endl;

        poa->the_POAManager()->activate();
        orb->run();
    } catch (CORBA::Exception& e) {
        std::cerr << "Exception: " << e._name() << std::endl;
    }
    return 0;
}
