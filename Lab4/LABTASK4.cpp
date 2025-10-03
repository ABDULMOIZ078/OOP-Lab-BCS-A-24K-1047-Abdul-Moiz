#include <iostream>
using namespace std;
class ServerSession{
    public:
    int sessionID;

    ServerSession(int i){
        sessionID = i;
        cout << "Session started...." << endl;
    }

    ~ServerSession(){
        cout << "Session is ending...." << endl;
    }
};
int main(){
    cout << "Entering.." << endl;
    {
    ServerSession s1(1);
    }
    cout << "Exited.." << endl;
}