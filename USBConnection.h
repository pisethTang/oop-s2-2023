#ifndef USBCONNECTION_H
#define USBCONNECTION_H
#include <stack>

class USBConnection{
    private:
         int id;
        USBConnection(int id);
        //  int current_ports;
    public:
        static std::stack<int> ids; //keeps track of the given id
        static USBConnection* CreateUsbConnection();

        int get_id();
        ~USBConnection();

};






#endif