#include <iostream>
#include <stack> // to store list of ids
#include "USBConnection.h"


using namespace std;

int main(){
    int max_usb_ports = 10;
    USBConnection* c[max_usb_ports];
    for(int i=0;i<max_usb_ports;i++){
        // CreateUsbConnection is a static function
        // it creates a new objects of USBConnection ...
        // if a port is available
        c[i] = USBConnection::CreateUsbConnection();
        if (c[i] != nullptr) cout << "USB connection with ID = " << c[i] -> get_id() << " was created\n";
        else cout << "No more USB ports available\n";
    }

    // Let's unplug onbe used connection
    delete c[1];
    // this should return ID 2 to the stack

    USBConnection* a = USBConnection::CreateUsbConnection();
    if(a != nullptr) cout << "USB connection with ID =" << a -> get_id() << " was created\n";
    else cout << "No more USb ports available\n";

    

}