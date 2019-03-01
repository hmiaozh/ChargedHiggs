#include "interface/AnalysisBase.hpp"
#include "interface/AnalysisChargedHiggsEWKPurity.hpp"
#include "interface/AnalysisChargedHiggsHW.hpp"
#include "interface/AnalysisChargedHiggsMET.hpp"
#include "interface/AnalysisChargedHiggsQCDPurity.hpp"
#include "interface/AnalysisChargedHiggsSync.hpp"
#include "interface/AnalysisChargedHiggsTauNu.hpp"
#include "interface/AnalysisChargedHiggsTmva.hpp"
#include "interface/AnalysisChargedHiggsTopBottom.hpp"
#include "interface/AnalysisChargedHiggsZW.hpp"
#include "interface/AnalysisChargedHiggsTBfullHad.hpp"
#include "interface/AnalysisEfficiencies.hpp"
#include "interface/AnalysisDY.hpp"
#include "interface/AnalysisGG.hpp"
#include "interface/AnalysisHmumu.hpp"
#include "interface/AnalysisQG.hpp"
#include "interface/AnalysisScikit.hpp"
#include "interface/BaseFitter.hpp"
#include "interface/BTagCalibrationStandalone.hpp"
#include "interface/CatSelector.hpp"
#include "interface/Corrector.hpp"
#include "interface/CutSelector.hpp"
#include "interface/Davismt2.hpp"
#include "interface/Dumper.hpp"
#include "interface/EnergyScaleCorrection_class.hpp"
#include "interface/Event.hpp"
#include "interface/Fitter.hpp"
#include "interface/BackgroundFitter.hpp"
#include "interface/GeneralFunctions.hpp"
#include "interface/GenParticle.hpp"
#include "interface/Handlers.hpp"
#include "interface/Jet.hpp"
#include "interface/FatJet.hpp"
#include "interface/JSON.hpp"
#include "interface/KalmanMuonCalibrator.hpp"
#include "interface/KaMuCa.hpp"
#include "interface/JetFilter2016.hpp"
#include "interface/Lepton.hpp"
#include "interface/LinkDef.hpp"
#include "interface/Loader.hpp"
#include "interface/Logger.hpp"
#include "interface/Loop.hpp"
#include "interface/MC.hpp"
#include "interface/Met.hpp"
#include "interface/MetFilters.hpp"
#include "interface/MetPhiCorrector.hpp"
#include "interface/Named.hpp"
#include "interface/Object.hpp"
#include "interface/Output.hpp"
#include "interface/Photon.hpp"
#include "interface/PreselectionAnalysis.hpp"
#include "interface/PU.hpp"
#include "interface/PurityFit.hpp"
#include "interface/PurityFitAnalytic.hpp"
#include "interface/PurityFitBase.hpp"
#include "interface/RoccoR.hpp"
#include "interface/Rochester.hpp"
#include "interface/RooCMSShape.hpp"
#include "interface/RooVoigtianShape.hpp"
#include "interface/ScaleAndSmear.hpp"
#include "interface/SF.hpp"
#include "interface/Smearable.hpp"
#include "interface/Smearer.hpp"
#include "interface/SmearJesSources.hpp"
#include "interface/SplitMC.hpp"
#include "interface/Tau.hpp"
#include "interface/TmvaTrainer.hpp"
#include "interface/Trigger.hpp"
#include "interface/Weight.hpp"
#include "interface/RooBinnedUncertainties.hpp"
#include "interface/UnfirableFilter.hpp"
#include "interface/HmmLikelihood.hpp"

// put template stuff here, MyClass<T> myclass;
//nampspace{
//	struct dictionary{
//	};
//};
