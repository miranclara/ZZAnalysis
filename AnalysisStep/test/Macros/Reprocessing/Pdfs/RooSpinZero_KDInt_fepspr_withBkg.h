/*****************************************************************************
 * Project: RooFit                                                           *
 *                                                                           *
  * This code was autogenerated by RooClassFactory                            * 
 *****************************************************************************/

#ifndef ROOSPINZERO_KDINT_FEPSPR_WITHBKG
#define ROOSPINZERO_KDINT_FEPSPR_WITHBKG

#include "RooAbsPdf.h"
#include "RooRealProxy.h"
#include "RooCategoryProxy.h"
#include "RooAbsReal.h"
#include "RooAbsCategory.h"

 
class RooSpinZero_KDInt_fepspr_withBkg : public RooAbsPdf {
public:
  RooSpinZero_KDInt_fepspr_withBkg() {} ; 
  RooSpinZero_KDInt_fepspr_withBkg(const char *name, const char *title,
		    RooAbsReal& _kd,
		    RooAbsReal& _kdint,
		    RooAbsReal& _fepspr,
		    RooAbsReal& _mu,
 		    vector<TH2F*>& _histos,
 		    vector<TH2F*>& _histos_bkg
		    );
		    
  RooSpinZero_KDInt_fepspr_withBkg(const RooSpinZero_KDInt_fepspr_withBkg& other, const char* name=0) ;
  virtual TObject* clone(const char* newname) const { return new RooSpinZero_KDInt_fepspr_withBkg(*this,newname); }
  inline virtual ~RooSpinZero_KDInt_fepspr_withBkg() { }
  
  Int_t getAnalyticalIntegral(RooArgSet& allVars, RooArgSet& analVars, const char* rangeName=0) const ;
  Double_t analyticalIntegral(Int_t code, const char* rangeName=0) const ;

  double IntegralT[3];
  double IntegralT_bkg[3];
	
protected:

  RooRealProxy kd;
  RooRealProxy kdint;
  RooRealProxy fepspr;
  RooRealProxy mu;
  vector<TH2F*> histos;
  vector<TH2F*> histos_bkg;

  Double_t evaluate() const ;

private:

  ClassDef(RooSpinZero_KDInt_fepspr_withBkg,1) // Your description goes here...
};
 
#endif