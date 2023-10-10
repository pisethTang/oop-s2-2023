#include "USBConnection.h"
#include <iostream>

USBConnection::USBConnection(int id){
    // //USBConnection::ids({3,2,1});
    // ids.push(1);
    // ids.push(2);
    // ids.push(3);
    this -> id = id;
}

USBConnection* USBConnection::CreateUsbConnection(){
    //creates new objects by calling the private constructor
    // if a port is available
    // push a usb connection into the stack and increment current_ports by 1
    //actually, a static function can't implement a non-static member
    // So the only thing I have right now is the usb connection
    // bool a = false;
    // if(!ids.empty()){
    //     // push the connection into the stack
    //     a = true;
    //     return new USBConnection(get_id());
    // }
    if(!ids.empty()) {
        int x = ids.top();
        ids.pop();
        return new USBConnection(x);
    }    
    // std::cout << ids.size() << "\n";
    // if port reaches the maximum number of ports, 3, which can be assessed by 
    return nullptr; // if all ports are available
} 


int USBConnection::get_id(){ return id;}


USBConnection::~USBConnection(){
    //return a used ID to the stack
    ids.pop();
    // ids.push(id);
    // current_ports--;
}