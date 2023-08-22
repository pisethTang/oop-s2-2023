class Orchestra{
    private:
        int size;
    public:
        Orchestra(); // default constructor
        Orchestra(int size); // user-defined constructor

        //returns the number of musicians who have joined the orchestra
        int get_current_number_of_members();

        // returns true if any musician in the orchestra plays the specified instrument
        // otherwise, returns false
        bool has_instrument(std::string instrument);
        

};