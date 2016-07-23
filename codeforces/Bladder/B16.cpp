#include <bits/stdc++.h>

using namespace std;

bool letters_present(string s1,string s2){

	int len1=s1.size(),len2 = s2.size();
	int present[26];
	memset(present,0,sizeof(present));
	for(int i=0;i<len1;i++)
		present[s1[i]-'a']++;
	for(int i=0;i<len2;i++)
		if(!present[s2[i]-'a'])
			return false;
		else
			present[s2[i]-'a']--;

	return true;
}
bool letters_present_inorder(string s1,string s2){
	
	int len1=s1.size(),len2 = s2.size();
	int prev_pos=-1;
	for(int i=0;i<len2;i++){
		int flag = 0;
		for(int j=0;j<len1;j++){
			if(s2[i]==s1[j] && j>prev_pos ){
				prev_pos=j;
				flag=1;
				break;
			}
		}
		if(flag==0)
			return false;
	}
	return true;
	

}
int main(){
	string str1,str2;
	cin>>str1>>str2;
	string s1=str1,s2=str2;
	sort(str1.begin(),str1.end());
	sort(str2.begin(),str2.end());

	if(str1==str2){
		cout<<"array"<<endl;return 0;
	}
	else if (letters_present_order(s1,s2)) {
    	cout<<"automaton"<<endl;return 0;
	}
	else if(letters_present(s1,s2)){	
		cout<<"both"<<endl;
	}
	else
		cout<<"need tree"<<endl;

}