#include <exception>
#include <iostream>
#include <fstream>
#include <stdexcept>
#include <string>
#include <vector>
#include <limits.h>


typedef std::vector<int> Records;
class RecordsManager{
	private:
		std::fstream _file;
		std::string _filename;
	public:
		RecordsManager(std::string filename): _filename(filename){ }
		void read(Records& records)
		{
		try{
			_file.open(_filename, std::ios::in);
			if (_file.is_open()){
				std::string line;
				while(getline(_file, line)){
					// if(line) throw std::invalid_argument("Line is not of type integer.");
					// if (stoi(line) == INT_MAX) throw std::out_of_range("Line is out of range.");
					records.push_back(stoi(line));
					// std::stoi() already has built-in throw messages. It does the checks for us.
				}
			}
		}catch(std::invalid_argument const& e){
				std::cerr << "Invalid argument" <<std::endl;
				std::cout << e.what() << std::endl;
				_file.close();	
		}catch(std::out_of_range const& e){
				std::cerr << "Out of range" <<std::endl;
				// std::cout << e.what() << std::endl;
				_file.close();
		}catch(std::exception const& e){
				std::cout << e.what() << std::endl;
				_file.close();
		}catch(...){
				std::cout << "Invalid exception" << std::endl;
				}
			_file.close();
		}

};



int main(){
	// RecordsManager recordM("test_clean-1.txt");
	// RecordsManager recordM("test_corrupt1.txt");
	// RecordsManager recordM("test_corrupt2.txt");
	RecordsManager recordM("test_corrupt290.txt");
	// It seems that std::stoi() also performs the file not found exception for us.
	Records myRecords;

	// reads records
	recordM.read(myRecords);
	// myRecords should be filled with integers and ready to be summed


	//calculate and print out the sum
	int sum = 0;
	for (int i=0;i<myRecords.size(); i++){
		sum += myRecords[i];
	}

	std::cout << sum << std::endl;
	
	// Testing std::stoi()
	// std::string s = "182882";
	// std::cout << std::stoi(s, 1,) + 10 << std::endl;

	

	return 0;
}