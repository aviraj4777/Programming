#include <iostream>
using namespace std;

int main() {
	int testcase;
	cin>>testcase;
	string str;
	while (testcase--) {
	    cin>>str;
	    
	    int arr1[26] = {0};
	    int arr2[26] = {0};
	    int len = str.length();
	    int j = 0;
	    if (len % 2 != 0) 
	       j = len/2 + 2;
	 
	    for (int i = 0; i < len/2; i++) {
	        arr1[str[i] - 97]++;
	   }
	   
	   for (int i = j; i < len;i++) {
	       arr2[str[i] - 97]++;
	   }
	   bool flag = true;
	   for (int i = 0; i < 26; i++) {
	       if (arr1[i] != arr2[i]) {
	           flag = false;
	           break;
	       }
	   }
	   
	   if (flag) {
	       cout<<"YES"<<endl;
	   }
	   else 
	    cout<<"NO"<<endl;
	}
	
	return 0;
}
