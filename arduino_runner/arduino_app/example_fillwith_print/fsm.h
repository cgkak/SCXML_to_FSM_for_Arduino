/******************************************************* 
 *  author    : Raphaël KUMAR generator
 *  copyright : SoFAB CC-BY-SA
 *  file      : fsm.h
 *  object    : ain applicative fsm
 ***/

#pragma once

#include "params.h"
void run_current(Event evt);
void call_for_initial_on_entry();
void doRun();
void doUpdate();
void doPause();
void PAUSE_trans(Event evt);
void RUN_trans(Event evt);
void PAUSE_entry();
void RUN_entry();
void interrupt_Pause_RISING();
