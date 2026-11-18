#ifndef ORG_ALLBINARY_GAME_SCORE_HIGHSCORECOMMANDSFACTORY_H
#define ORG_ALLBINARY_GAME_SCORE_HIGHSCORECOMMANDSFACTORY_H
/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
 * 
 * By agreeing to this license you and any business entity you represent are
 * legally bound to the AllBinary Open License Version 1 legal agreement.
 * 
 * You may obtain the AllBinary Open License Version 1 legal agreement from
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository.
 * 
 * Created By: Travis Berthelot
 *  
 */
// Generated Code Do Not Modify
// package org.allbinary.game.score

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct HighScoreCommandsBaseFactory HighScoreCommandsBaseFactory;
typedef struct HighScoreCommands HighScoreCommands;
typedef struct Command Command;
#include "org/allbinary/game/score/HighScoreCommandsBaseFactory.h"

typedef struct HighScoreCommandsFactory HighScoreCommandsFactory;
struct HighScoreCommandsFactory {
    HighScoreCommandsBaseFactory base;
};


HighScoreCommandsFactory* HighScoreCommandsFactory_new(void);

HighScoreCommandsFactory* HighScoreCommandsFactory_getInstance(void);

void HighScoreCommandsFactory_init(HighScoreCommandsFactory* this);
#define HighScoreCommandsFactory_new0 HighScoreCommandsFactory_new
#define HighScoreCommandsFactory_init0 HighScoreCommandsFactory_init
#ifndef HighScoreCommandsFactory_isHighScoreCommand
#define HighScoreCommandsFactory_isHighScoreCommand HighScoreCommandsBaseFactory_isHighScoreCommand
#endif
#ifndef HighScoreCommandsFactory_getIndex
#define HighScoreCommandsFactory_getIndex HighScoreCommandsBaseFactory_getIndex
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void HighScoreCommandsFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void HighScoreCommandsFactory_register(void);


#endif // ORG_ALLBINARY_GAME_SCORE_HIGHSCORECOMMANDSFACTORY_H
