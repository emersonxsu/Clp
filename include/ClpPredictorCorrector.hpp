// Copyright (C) 2003, International Business Machines
// Corporation and others.  All Rights Reserved.

/* 
   Authors
   
   John Forrest

 */
#ifndef ClpPredictorCorrector_H
#define ClpPredictorCorrector_H

#include "ClpInterior.hpp"

/** This solves LPs using the predictor-corrector method.

    It is rather basic as Interior point is not my speciality

    It inherits from ClpInterior.  It has no data of its own and 
    is never created - only cast from a ClpInterior object at algorithm time. 

*/

class ClpPredictorCorrector : public ClpInterior {

public:

  /**@name Description of algorithm */
  //@{
  /** Primal Dual Predictor Corrector algorithm

      Method

      Big TODO
  */

  int solve();
  //@}

  /**@name Functions used in algorithm */
  //@{
  /// findStepLength.
  //phase  - 0 predictor
  //         1 corrector
  //         2 primal dual
  double findStepLength(const int phase);
  /// findDirectionVector.
  double findDirectionVector(const int phase);
  /// createSolution.  Creates solution from scratch
  void createSolution();
  /// complementarityGap.  Computes gap
  //phase 0=as is , 1 = after predictor , 2 after corrector
  double complementarityGap(int & numberComplementarityPairs,
			    const int phase);
  /// setupForSolve.
  //phase 0=affine , 1 = corrector , 2 = primal-dual
  void setupForSolve(const int phase);
  //method: sees if looks plausible change in complementarity
  bool checkGoodMove(const bool doCorrector);
  ///:  checks for one step size
  bool checkGoodMove2(const double move);
  /// updateSolution.  Updates solution at end of iteration
  //returns number fixed
  int updateSolution();
  ///  Save info on products of affine deltaT*deltaW and deltaS*deltaZ
  double affineProduct();
  //@}

};
#endif