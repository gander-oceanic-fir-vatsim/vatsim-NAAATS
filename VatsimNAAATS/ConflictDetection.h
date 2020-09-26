#pragma once
#include "EuroScopePlugIn.h"
#include <vector>
#include "Constants.h"

using namespace std;
using namespace EuroScopePlugIn;

class CConflictDetection
{
	public:
		// Detect the current conflict status between two aircraft
		static CConflictStatus DetectStatusNow(CRadarTarget* targetA, CRadarTarget* targetB); // Compare with single aircraft
		static CConflictStatus DetectStatusNow(CRadarTarget* target, vector<CRadarTarget*>* targetsToCompare); // Compare with multiple aircraft
		
		// Return status predictions on the route path for a requested timeframe (one status per minute)
		static vector<CConflictStatus> PredictStatusFuturePath(CRadarTarget* targetA, CRadarTarget* targetB); // Compare with single aircraft
		static vector<CConflictStatus> PredictStatusFuturePath(CRadarTarget* target, vector<CRadarTarget*>* targetsToCompare); // Compare with multiple aircraft

		// Return status predictions on a straight line vector for a requested timeframe (one status per minute)
		static vector<CConflictStatus> PredictStatusFutureVector(CRadarTarget* targetA, CRadarTarget* targetB); // Compare with single aircraft
		static vector<CConflictStatus> PredictStatusFutureVector(CRadarTarget* target, vector<CRadarTarget*>* targetsToCompare); // Compare with multiple aircraft

		// Separation calculators
		static int LateralSeparation(CRadarTarget* targetA, CRadarTarget* targetB); // Implement gentle slope and 9-5 separation
		static int LongitudinalSeparation(CRadarTarget* targetA, CRadarTarget* targetB); // Implement recprocal, intersecting and same separation
		static int VerticalSeparation(CRadarTarget* targetA, CRadarTarget* targetB); // 1000ft below FL410, 2000ft above 410, supersonic 4000ft anywhere
};

