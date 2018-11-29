//using std::reverse
string reverse_string_1(const string& s)
{
	string s_t = s;
	std::reverse(s_t.begin(), s_t.end());
	return s_t; //probably move semantics
}
