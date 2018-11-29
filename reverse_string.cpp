//using std::reverse
string reverse_string_1(const string& s)
{
	string s_t = s;
	std::reverse(s_t.begin(), s_t.end());
	return s_t; //probably move semantics
}

//using char*
/*char good[] = "lolita";
  reverse_string_2(good,sizeof(good)/sizeof(char) - 1);*/
void reverse_string_2(char * s, int size)
{
	int f = 0;
	int e = size;
	while (s[f] != s[e] && s[f] != s[--e])
	{
		std::swap(s[f++], s[e]);
	}
}
