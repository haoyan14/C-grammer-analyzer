#include <iostream>

#include "lexical_analyzer.h"
#include "grammer_analyzer.h"

#include<vector>
#include <string> 
#include <fstream> 
using namespace std;
void dfs();
int main(){
	lexical_analyzer la;
	la.lexical_analyzer_do("in.txt");
	grammer_analyzer gl("grammer.txt");
	gl.printpro();
	gl.getfirst();
	gl.getfollow();
	gl.gettable();
	gl.analyse("lexical.txt",la);
	gl.printtree();
	return 0;
}
