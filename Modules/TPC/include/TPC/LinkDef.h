#ifdef __CLING__
#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;
#pragma link C++ class o2::quality_control_modules::tpc::PID+;
#pragma link C++ class o2::quality_control_modules::tpc::Tracking+;
#pragma link C++ class o2::quality_control_modules::tpc::Tracks+;
#pragma link C++ class o2::quality_control_modules::tpc::ROCReductor+;
#pragma link C++ class o2::quality_control_modules::tpc::Clusters+;
#pragma link C++ class o2::quality_control_modules::tpc::CalDetPublisher+;
#pragma link C++ class o2::quality_control_modules::tpc::RawDigits+;
#pragma link C++ class o2::quality_control_modules::tpc::CheckOfTrendings+;
#pragma link C++ class o2::quality_control_modules::tpc::PadCalibrationCheck+;
#pragma link C++ class o2::quality_control_modules::tpc::LaserTracks+;
#pragma link C++ class o2::quality_control_modules::tpc::LtrCalibReductor+;
#pragma link C++ class o2::quality_control_modules::tpc::ClustersData+;
#pragma link C++ class o2::quality_control_modules::tpc::ClusterVisualizer+;
#pragma link C++ class o2::quality_control_modules::tpc::SliceInfo+;
#pragma link C++ class std::vector<o2::quality_control_modules::tpc::SliceInfo>+;
#pragma link C++ class o2::quality_control_modules::tpc::TrendingTaskTPC+;
#pragma link C++ class o2::quality_control_modules::tpc::TrendingTaskConfigTPC+;
#pragma link C++ class o2::quality_control_modules::tpc::ReductorTPC+;
#pragma link C++ class o2::quality_control_modules::tpc::TH1ReductorTPC+;
#pragma link C++ class o2::quality_control_modules::tpc::TH2ReductorTPC+;
#pragma link C++ class o2::quality_control_modules::tpc::CheckForEmptyPads+;
#pragma link C++ class o2::quality_control_modules::tpc::SliceInfoQuality+;
#pragma link C++ class o2::quality_control_modules::tpc::QualityReductorTPC+;
#pragma link C++ class o2::quality_control_modules::tpc::DCSPTemperature+;
#pragma link C++ class o2::quality_control_modules::tpc::IDCs+;
#pragma link C++ class o2::quality_control_modules::tpc::QualityObserver+;
#pragma link C++ class o2::quality_control_modules::tpc::RatioGeneratorTPC+;

#pragma link C++ function o2::quality_control_modules::tpc::addAndPublish + ;
#pragma link C++ function o2::quality_control_modules::tpc::toVector + ;
#pragma link C++ function o2::quality_control_modules::tpc::clusterHandler + ;
#endif
