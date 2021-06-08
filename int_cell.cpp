#include <bits/stdc++.h>
using namespace std;

class IntCell{
    public:
        explicit IntCell(int initialValue = 0){
            storedValue = new int (initialValue);
        }
        
        ~IntCell(){delete storedValue;} //Destructor

        IntCell(const IntCell& rhs){ //Copy-constructor
        storedValue = new int (*rhs.storedValue);
        }

        IntCell(IntCell&& rhs):storedValue(rhs.storedValue){ //Move-constructor
            rhs.storedValue = nullptr;
        }

        IntCell& operator = (const IntCell& rhs) //Copy assignment

        {
            if (this != &rhs)
                *storedValue = *rhs.storedValue;
            return *this;
        } 

        IntCell& operator = (IntCell&& rhs){ // Move assignment
            std::swap(storedValue,rhs.storedValue);
            return *this;
        }

        int read() const {
            return *storedValue;
        }
        
        
        void write(int x){
            *storedValue = x;
        }

friend ostream& operator << (ostream& os, const IntCell& rhs);
        
    private:
       int* storedValue;
};
ostream& operator << (ostream& os, const IntCell& rhs){
   os << *(rhs.storedValue);
   return os;
}




int main(){

    IntCell m1,m2;
    m1.write(1);
    m2.write(9);
    cout << m1 << ' ' << m2 << '\n';
 
    cin.get();
    system("clear");
} 
