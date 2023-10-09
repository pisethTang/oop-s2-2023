#include <iostream>
//#include <stack> // to store list of ids
#include "USBConnection.h"


// using namespace std;

std::stack<int> USBConnection::ids({3,2,1});



int main(){
    int max_usb_ports = 10;
    USBConnection* c[max_usb_ports];
    
    for(int i=0;i<max_usb_ports;i++){
        // CreateUsbConnection is a static function
        // it creates a new objects of USBConnection ...
        // if a port is available
        c[i] = USBConnection::CreateUsbConnection();
        if (c[i] != nullptr) std::cout << "USB connection with ID = " << c[i] -> get_id() << " was created\n";
        else std::cout << "No more USB ports available\n";
    }

    // Let's unplug onbe used connection
    delete c[1];
    // this should return ID 2 to the stack

    std::cout << "-------------------------------\n";
    USBConnection* a = USBConnection::CreateUsbConnection();
    if(a != nullptr) std::cout << "USB connection with ID =" << a -> get_id() << " was created\n";
    else std::cout << "No more USB ports available\n";

    
    return 0;
}