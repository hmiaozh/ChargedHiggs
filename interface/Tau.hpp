#ifndef TAU_H
#define TAU_H

#include "interface/Lepton.hpp"
#include "interface/GenParticle.hpp"

class Tau: virtual public Object,
    virtual public Lepton
{

    public:
    Tau() ;
    bool id;
    float iso2;
    bool id_ele =0;
    bool id_mu =0 ;
    int match ; // is matched with a gen tau

    virtual int IsTau() ;
    virtual int IsTauInvIso();
    virtual inline int IsObject(){ return IsTau(); }

    virtual bool IsMatch( ) { if (match >= 0) return true; else return false;}

    virtual void clearSyst(){
        Lepton::clearSyst(); 
        Object::clearSyst();
        }

};

#endif
// Local Variables:
// mode:c++
// indent-tabs-mode:nil
// tab-width:4
// c-basic-offset:4
// End:
// vim: tabstop=4 expandtab shiftwidth=4 softtabstop=4 
