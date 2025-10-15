#include <iostream>
using namespace std;
class MobileDevice{
  private:
  string modelname;
  const int imeinumber;
  public:
  MobileDevice(string m,int i): modelname(m) , imeinumber(i){}
  void verifyDevice() const{
      
      cout<<"Model Name: "<<modelname<<endl<<"IMEI no :"<<imeinumber;
  }
};
int main()
{
    MobileDevice m("Samsung",979468736);
    m.verifyDevice();
}