// Copyright 2019-2020 CERN and copyright holders of ALICE O2.
// See https://alice-o2.web.cern.ch/copyright for details of the copyright holders.
// All rights not expressly granted are reserved.
//
// This software is distributed under the terms of the GNU General Public
// License v3 (GPL Version 3), copied verbatim in the file "COPYING".
//
// In applying this license CERN does not waive the privileges and immunities
// granted to it by virtue of its status as an Intergovernmental Organization
// or submit itself to any jurisdiction.

///
/// \file   TracksQcTask.h
/// \author Valerie Ramillien
///

#ifndef QC_MODULE_MID_MIDTRACKSQCTASK_H
#define QC_MODULE_MID_MIDTRACKSQCTASK_H

#include "QualityControl/TaskInterface.h"
#include "MIDBase/Mapping.h"

class TH1F;
class TH2F;
class TProfile;

using namespace o2::quality_control::core;

namespace o2::quality_control_modules::mid
{

class TracksQcTask final : public TaskInterface
{
 public:
  /// \brief Constructor
  TracksQcTask() = default;
  /// Destructor
  ~TracksQcTask() override;

  // Definition of the methods for the template method pattern
  void initialize(o2::framework::InitContext& ctx) override;
  void startOfActivity(Activity& activity) override;
  void startOfCycle() override;
  void monitorData(o2::framework::ProcessingContext& ctx) override;
  void endOfCycle() override;
  void endOfActivity(Activity& activity) override;
  void reset() override;

 private:
  std::shared_ptr<TH1F> mMultTracks{ nullptr };
  std::shared_ptr<TH2F> mTrackMapXY{ nullptr };
  std::shared_ptr<TH1F> mTrackDevX{ nullptr };
  std::shared_ptr<TH1F> mTrackDevY{ nullptr };
  std::shared_ptr<TH2F> mTrackDevXY{ nullptr };
  std::shared_ptr<TH1F> mTrackTheta{ nullptr };
  std::shared_ptr<TH1F> mTrackEta{ nullptr };
  std::shared_ptr<TH1F> mTrackThetaI{ nullptr };
  std::shared_ptr<TH1F> mTrackEtaI{ nullptr };
  std::shared_ptr<TH1F> mTrackAlpha{ nullptr };
  std::shared_ptr<TH1F> mTrackPhi{ nullptr };
  std::shared_ptr<TH1F> mTrackThetaD{ nullptr };
  std::shared_ptr<TH1F> mTrackPT{ nullptr };
  std::shared_ptr<TH1F> mTrackRatio44{ nullptr };
  std::shared_ptr<TH1F> mTrackBDetRatio44{ nullptr };
  std::shared_ptr<TH1F> mTrackNBDetRatio44{ nullptr };
  std::shared_ptr<TH1F> mTrackBLocRatio44{ nullptr };
  std::shared_ptr<TH1F> mTrackNBLocRatio44{ nullptr };
  std::shared_ptr<TH1F> mTrackBCCounts{ nullptr };

  std::shared_ptr<TH2F> mTrackDetRatio44Map11{ nullptr };
  std::shared_ptr<TH2F> mTrackDetRatio44Map12{ nullptr };
  std::shared_ptr<TH2F> mTrackDetRatio44Map21{ nullptr };
  std::shared_ptr<TH2F> mTrackDetRatio44Map22{ nullptr };

  std::shared_ptr<TH2F> mTrackLocalBoardsRatio44Map{ nullptr };
  std::shared_ptr<TH2F> mTrackLocalBoardsBRatio44Map{ nullptr };
  std::shared_ptr<TH2F> mTrackLocalBoardsNBRatio44Map{ nullptr };

  ///////////////////////////
  o2::mid::Mapping mMapping; ///< Mapping
  int nROF = 0;
  int multTracksTot = 0;
  int multTracks44Tot = 0;
  int multTracksBend44 = 0;
  int multTracksNBend44 = 0;
  int multTraksB34MT11 = 0;
  int multTraksNB34MT11 = 0;
  int multTraksB34MT12 = 0;
  int multTraksNB34MT12 = 0;
  int multTraksB34MT21 = 0;
  int multTraksNB34MT21 = 0;
  int multTraksB34MT22 = 0;
  int multTraksNB34MT22 = 0;
  float globEff = 0;
  float globBendEff = 0;
  float globNBendEff = 0;
  std::unordered_map<int, std::vector<int>> LocTracks;
  std::unordered_map<int, std::vector<int>> DetTracks;
  std::unordered_map<int, int> LocColMap;
};

} // namespace o2::quality_control_modules::mid

#endif // QC_MODULE_MID_MIDTRACKSQCTASK_H
