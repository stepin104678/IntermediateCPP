#include "CANFrame.h"

CANFrame::CANFrame()
{
    m_id = 0;
    m_dlc = 0;
    for(int i=0;i<8;i++)
    {
        m_data[i]=0;
    }
}
CANFrame::CANFrame(uint32_t id,uint8_t dlc,uint8_t& data)   //id, dlc and data
{
    m_id = id;
    m_dlc = dlc;
    for(int i=0;i<8;i++)
    {
        uint8_t *p = &data;
        m_data[i] = *(p + i);
    }
}
CANFrame::CANFrame(uint32_t id,uint8_t dlc)            //id, dlc, data will be random
    : m_id(id), m_dlc(dlc)
{

}
CANFrame::CANFrame(std::string can)
{
    this->m_dlc = 8;
    char canc[can.length()];
    char de[] = "#";
    strcpy(canc, can.c_str());
    char * tok = strtok(canc, de);
    while(tok)
    {
        
    }

}
int CANFrame::id() const
{
    return m_id;
}
int CANFrame::dlc() const
{
    return m_dlc;
}
uint8_t* CANFrame::data()
{
    return m_data;
}
void CANFrame::dispay() const
{
    cout << "ID : " << unsigned(m_id) << "\nDLC : " << unsigned(m_dlc) << "\nData : ";
    for(int i=0; i<8; i++)
    {
        cout << unsigned(m_data[i]);
    }
}