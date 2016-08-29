#ifndef BTAGGINGSFHELPER_H
#define BTAGGINGSFHELPER_H

#include "CondFormats/BTauObjects/interface/BTagCalibration.h"
#include "CondFormats/BTauObjects/interface/BTagCalibrationReader.h"

#include <string>
#include <vector>
#include <utility>

#include "TFile.h"
#include "TH1F.h"

enum SFsyst {central = 0, up = 1, down = 2};

class BTaggingSFHelper
{

 public:

  BTaggingSFHelper(std::string SFfilename, std::string effFileName);
  ~BTaggingSFHelper();
  float getSF (SFsyst syst, int jetFlavor, float pt, float eta);
  float getEff (int jetFlavor, float pt, float eta);
   
 private:

  // related to scale factors
  BTagCalibration* m_calib;
  BTagCalibrationReader* m_reader_b;
  BTagCalibrationReader* m_reader_b_up;
  BTagCalibrationReader* m_reader_b_do;
  BTagCalibrationReader* m_reader_c;
  BTagCalibrationReader* m_reader_c_up;
  BTagCalibrationReader* m_reader_c_do;
  BTagCalibrationReader* m_reader_udsg;
  BTagCalibrationReader* m_reader_udsg_up;
  BTagCalibrationReader* m_reader_udsg_do;
  BTagCalibrationReader* m_readers [3][3]; // [b, c, udsg] [central, up, down]

  // related to b tag efficiency
  TFile* m_fileEff;
  TH1F* m_hEff [3]; // [0: b, 1: c 2: udsg]

};

#endif