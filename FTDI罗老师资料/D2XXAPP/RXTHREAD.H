//---------------------------------------------------------------------------
#ifndef rxthreadH
#define rxthreadH
//---------------------------------------------------------------------------
#include <Classes.hpp>
//---------------------------------------------------------------------------
class TFtRxThread : public TThread
{
private:
protected:
    void __fastcall Execute();
public:
    __fastcall TFtRxThread(bool CreateSuspended);
};
//---------------------------------------------------------------------------
#endif
