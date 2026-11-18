#ifndef ORG_ALLBINARY_GAME_CHALLENGERINTERFACE_H
#define ORG_ALLBINARY_GAME_CHALLENGERINTERFACE_H
/*
 * 
 * To change this license header, choose License Headers in Project Properties. 
 * To change this template file, choose Tools | Templates 
 * and open the template in the editor.  
 */
// Generated Code Do Not Modify
// package org.allbinary.game

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct ChallengerInterface ChallengerInterface;
struct ChallengerInterface {
    void (*setWinner)(void* this, bool isWinner);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ChallengerInterface_staticInit(void);

static inline void ChallengerInterface_setWinner(void* this, bool isWinner) {
    ((__typeof__(((ChallengerInterface*) nullptr)->setWinner)) java_method_of(this, "setWinner"))(this, isWinner);
}


#endif // ORG_ALLBINARY_GAME_CHALLENGERINTERFACE_H
