// combine_samefn_1.c
// test merging two source files, each of which contain a definition
// of a given function, but those definitions are identical (up to
// alpha renaming of locals/params)
                               
// testing --mergeKeepAnnotations
#pragma boxpoly("some_poly_fn")

// repeated function
int foo(int xxx)
{
  int yyy = xxx + 3;    // 8
  int z = yyy + xxx;    // 13
  return z + xxx;       // 18
}


int myglobal __attribute__((mayPointToStack)) = 3;


int main()
{
  return foo(5) - 18 + myglobal - 3;
}