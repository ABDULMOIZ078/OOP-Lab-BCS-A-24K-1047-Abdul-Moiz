#include <iostream>
using namespace std;
class PropertyDeed{
    private:
    int *ownerID;

    public:
    PropertyDeed(int o){
        ownerID = new int;
        *ownerID = o;
    }

    PropertyDeed(const PropertyDeed &o){
        this->ownerID = o.ownerID;
    }

    PropertyDeed(const PropertyDeed &p, int t){
        ownerID = new int;
        *ownerID = *(p.ownerID);
    }

    ~PropertyDeed() {
        delete ownerID;
    }

    void display(){
        cout << "OwnerID : " << *ownerID << endl;
        cout << "Address : " << ownerID << endl;
    }
};
int main(){
    PropertyDeed p1(12);
    p1.display();

    PropertyDeed p2(p1);
    p2.display();

    PropertyDeed p3(p1,0);
    p3.display();

    PropertyDeed p4(67);
    p4.display();

    PropertyDeed p5(p4);
    p5.display();

    PropertyDeed p6(p4,0);
    p6.display();
}