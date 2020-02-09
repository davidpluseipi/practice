#include <cctype> // for the use of toupper()
#include <iostream> // to be able to use cin, cout, and getline()
#include <cstring> // for strlen(), strcat(), and strcpy()
#include <chrono>
#include <unistd.h>
#include <string>
using namespace std;

// remindme "take out the garbage" "1345"
int main(int argc, char** argv) 
{

	// input management
	for (int i=0; i < argc; i++)
	{
		cout << argv[i] << "\n"; // print the input back for confirmation
	}
		
	// input time to reply message / reminder



	char* inputchar;
	string inputstr = "";
	inputchar = argv[2];
	for (int i = 0; i < strlen(inputchar); ++i)
	{
		inputstr = inputstr + inputchar[i];
	}
	cout << inputstr << endl;
/*
	string t_hour = "";
	string t_min = "";
	t_hour = t_hour.append(inputchar[0]);
	cout << "t_hour: " << t_hour << endl;
*/

	for (int i=0; i<60; i++) 
	{ //runs for 60 seconds
	// run the following code at a specific time
		auto time = chrono::system_clock::to_time_t(chrono::system_clock::now());
		string timestr = ctime(&time);
		cout << timestr << endl;
		string hour;
		string hour1;
		hour = timestr.at(11);
		hour1 = timestr.at(12);
		hour = hour + hour1;
	    //cout << "hour: " << hour << endl;

	    string min;
	    string min1;
	    min = timestr.at(14);
	    min1 = timestr.at(15);
	    min = min + min1;
	    //cout << "min: " << min << endl;

	    hour = hour + min;

		if (hour == inputstr) // compare current time to input time
		{			
			// capitalize and sanitize the input
			string str = argv[1]; // string literals are constant array of char in cpp, so using const char*. (just char* works fine in c)
			string s = "";
			char c;

			for (int i=0; i < str.length(); i++)
			{
				c = toupper(str[i]);
				//cout << c << ' ';
				if (c>=' ' && c<='`') // include only ASCII characters between 'space' and '`' (the thing under the tilda)
				{
					s = s + c;
				}
			}
			// send text to wopr
		    string s0 = "wopr -c 20 -l 550 "; 
		    s0 = s0 + "\"";
		    s0 = s0 + s;
		    s0 = s0 + "\"";
		    system (s0.c_str());
		    // send text to espeak
		    string s2 = "espeak -g3 -p40 ";
		    s2 = s2 + "\"";
		    s2 = s2 + s;
		    s2 = s2 + "\"";
		    system (s2.c_str());

		    return 0;
		}
		sleep(1);
	}	
}