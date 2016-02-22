#include <iostream>
#include <string>
using namespace std;

class DannyClass{
	public:

	    DannyClass(string z){
			setName(z);

		}
	    void setName(string x){
			name = x;
		}

		string getName(){
			return name;

		}

	private:
	    string name;


};


int main()

{
	DannyClass game("Playing sports are very good for your health \n");
	cout << game.getName();

	DannyClass game1("I play sport 3 times a week \n");
	cout << game1.getName();


	return 0;


}
//

