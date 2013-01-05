// From link: http://msdn.microsoft.com/en-us/library/bz6at95h%28v=vs.80%29.aspx
// expre_const_cast_Operator.cpp
// compile with: /EHsc
#include <iostream>

using namespace std;
class CCTest {
public:
   void setNumber( int );
   void printNumber() const;
private:
   int number;
};

void CCTest::setNumber( int num ) { 
    number = num; 
}

void CCTest::printNumber() const {  // const func can only operate const variable, by Tom Xue
   cout << "\nBefore: " << number << endl;
   const_cast< CCTest * >( this )->number--;    // but it can change this situation, by Tom Xue
   //( this )->number--;
   cout << "\nAfter: " << number << endl;
}

int main() {
   CCTest X;
   X.setNumber( 8 );
   X.printNumber();
}
