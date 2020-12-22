#include "IPAddress.h"

IPAddress::IPAddress()
  : ipval(0)
{

}

IPAddress::IPAddress(uint8_t a,uint8_t b,uint8_t c,uint8_t d)   //a,b,c,d vals
{
  ipval = a;
  ipval = (ipval << 8) + b;
  ipval = (ipval << 8) + c;
  ipval = (ipval << 8) + d;
}
IPAddress::IPAddress(std::string ips)                       //"a.b.c.d" format
{
  char de[] = ".";
  char ip[ips.length()];
  strcpy(ip, ips.c_str());
  char *tok = strtok(ip, de);
  ipval = stoi(tok);
  while(tok)
  {
    ipval = (ipval << 8) + (stoi(tok));
    tok = strtok(NULL, de);
  }
}
bool IPAddress::isLoopBack() const
{
  uint8_t f;
  f = ((ipval >> 24)& 0xFF) ;
  if(f == 127)
  {
    return true;
  }  
  else
  {
    return false;
  }
}
IPClass IPAddress::getIPClass() const
{
  uint8_t a;
  a = (ipval >> 24) & 0xFF;
  if (a >= 0 && a < 128) 
  {
    return A;
  } 
  else if (a >= 128 && a < 192) 
  {
    return B;
  }
  else if (a >= 192 && a < 224) 
  {
    return C;
  } 
  else if (a >= 224 && a < 240) 
  {
    return D;
  } 
  else
  {
    return E;
  }
}
void IPAddress::display() const
{
  uint8_t a;
  cout << (a & 0xFF) << "." << ((a >> 8 ) & 0xFF) << "." << ((a >> 16) & 0xFF) << "." << ((a >> 24) & 0xFF) << endl; 
}