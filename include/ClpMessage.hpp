// Copyright (C) 2002, International Business Machines
// Corporation and others.  All Rights Reserved.
#ifndef ClpMessage_H
#define ClpMessage_H


#include "CoinPragma.hpp"

/** This deals with Clp messages (as against Osi messages etc)
 */

#include "CoinMessageHandler.hpp"
enum CLP_Message
{
  CLP_SIMPLEX_FINISHED,
  CLP_SIMPLEX_INFEASIBLE,
  CLP_SIMPLEX_UNBOUNDED,
  CLP_SIMPLEX_STOPPED,
  CLP_SIMPLEX_ERROR,
  CLP_SIMPLEX_STATUS,
  CLP_DUAL_BOUNDS,
  CLP_SIMPLEX_ACCURACY,
  CLP_SIMPLEX_BADFACTOR,
  CLP_SIMPLEX_BOUNDTIGHTEN,
  CLP_SIMPLEX_INFEASIBILITIES,
  CLP_SIMPLEX_FLAG,
  CLP_SIMPLEX_GIVINGUP,
  CLP_DUAL_CHECKB,
  CLP_DUAL_ORIGINAL,
  CLP_SIMPLEX_PERTURB,
  CLP_PRIMAL_ORIGINAL,
  CLP_PRIMAL_WEIGHT,
  CLP_PRIMAL_OPTIMAL,
  CLP_SINGULARITIES,
  CLP_MODIFIEDBOUNDS,
  CLP_RIMSTATISTICS1,
  CLP_RIMSTATISTICS2,
  CLP_RIMSTATISTICS3,
  CLP_POSSIBLELOOP,
  CLP_SMALLELEMENTS,
  CLP_DUPLICATEELEMENTS,
  CLP_SIMPLEX_HOUSE1,
  CLP_SIMPLEX_HOUSE2,
  CLP_SIMPLEX_NONLINEAR,
  CLP_SIMPLEX_FREEIN,
  CLP_SIMPLEX_PIVOTROW,
  CLP_DUAL_CHECK,
  CLP_PRIMAL_DJ,
  CLP_PACKEDSCALE_INITIAL,
  CLP_PACKEDSCALE_WHILE,
  CLP_PACKEDSCALE_FINAL,
  CLP_PACKEDSCALE_FORGET,
  CLP_INITIALIZE_STEEP,
  CLP_UNABLE_OPEN,
  CLP_BAD_BOUNDS,
  CLP_BAD_MATRIX,
  CLP_LOOP,
  CLP_IMPORT_RESULT,
  CLP_IMPORT_ERRORS,
  CLP_EMPTY_PROBLEM,
  CLP_CRASH,
  CLP_END_VALUES_PASS,
  CLP_QUADRATIC_BOTH,
  CLP_QUADRATIC_PRIMAL_DETAILS,
  CLP_IDIOT_ITERATION,
  CLP_INFEASIBLE,
  CLP_MATRIX_CHANGE,
  CLP_TIMING,
  CLP_INTERVAL_TIMING,
  CLP_SPRINT,
  CLP_BARRIER_ITERATION,
  CLP_BARRIER_OBJECTIVE_GAP,
  CLP_BARRIER_GONE_INFEASIBLE,
  CLP_BARRIER_CLOSE_TO_OPTIMAL,
  CLP_BARRIER_COMPLEMENTARITY,
  CLP_BARRIER_EXIT2,
  CLP_BARRIER_STOPPING,
  CLP_BARRIER_EXIT,
  CLP_BARRIER_SCALING,
  CLP_BARRIER_MU,
  CLP_BARRIER_INFO,
  CLP_BARRIER_END,
  CLP_BARRIER_ACCURACY,
  CLP_BARRIER_SAFE,
  CLP_BARRIER_NEGATIVE_GAPS,
  CLP_BARRIER_REDUCING,
  CLP_BARRIER_DIAGONAL,
  CLP_BARRIER_SLACKS,
  CLP_BARRIER_DUALINF,
  CLP_BARRIER_KILLED,
  CLP_BARRIER_ABS_DROPPED,
  CLP_BARRIER_ABS_ERROR,
  CLP_BARRIER_FEASIBLE,
  CLP_BARRIER_STEP,
  CLP_DUMMY_END
};

class ClpMessage : public CoinMessages {

public:

  /**@name Constructors etc */
  //@{
  /** Constructor */
  ClpMessage(Language language=us_en);
  //@}

};

#endif
