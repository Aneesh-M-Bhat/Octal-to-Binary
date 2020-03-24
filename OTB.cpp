#include <iostream>
#include <string>
using namespace std;

int main() {
	string bin="Answer:";
	char oct[50];
	cout<<"Enter an octal number \n";
	cin >> oct;
	for (int i=0;i<50;i++) {
	    switch(oct[i]){
	        case '0':
                bin.append("000");
            case '1':
	            bin.append("001");
	            break;
	        case '2':
	            bin.append("010");
	            break;
	        case '3':
	            bin.append("011");
	            break;
	        case '4':
	            bin.append("100");
	            break;
	        case '5':
	            bin.append("101");
	            break;
	        case '6':
	            bin.append("110");
	            break;
	        case '7':
	            bin.append("111");
	            break;
			case '.':
				bin.append(".");
				break;	
            default:
                i = 50;                
	    }
	}
	cout<<bin;
	
	
	return 0;
}