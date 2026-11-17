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
// package org.allbinary.game.displayable.canvas

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/canvas/Processor.h"
#include "org/allbinary/game/score/HighScores.h"
#include "org/allbinary/game/score/HighScoresHelperBase.h"
#include "org/allbinary/game/score/NullHighScoresSingletonFactory.h"
#include "org/allbinary/game/state/GameStateFactory.h"
#include "org/allbinary/graphics/paint/NullPaintable.h"

typedef struct EndGameProcessor EndGameProcessor;
struct EndGameProcessor {
    Processor base;
    GameStateFactory* gameStateFactory;
    AllBinaryGameCanvas* gameCanvas;
    int64_t WAIT;
};


EndGameProcessor* EndGameProcessor_new(AllBinaryGameCanvas* gameCanvas);

void EndGameProcessor_init(EndGameProcessor* this, AllBinaryGameCanvas* gameCanvas);
void EndGameProcessor_process(EndGameProcessor* this);

static void EndGameProcessor_initFields(EndGameProcessor* this) {
    this->gameStateFactory = GameStateFactory_getInstance();
    
    this->WAIT = 5000LL;
}


void EndGameProcessor_init(EndGameProcessor* this, AllBinaryGameCanvas* gameCanvas) {
    Processor_init(&this->base);
    EndGameProcessor_initFields(this);
        this->gameCanvas = gameCanvas;
}

EndGameProcessor* EndGameProcessor_new(AllBinaryGameCanvas* gameCanvas) {
    EndGameProcessor* this = calloc(1, sizeof(EndGameProcessor));
    EndGameProcessor_init(this, gameCanvas);
    return this;
}


// throws Exception
void EndGameProcessor_process(EndGameProcessor* this) {
        if (AllBinaryGameCanvas_isHighScoreSubmitted(this->gameCanvas)) {
            if (JAVA_CALL(AllBinaryGameCanvas_getGameStateTimeHelper(this->gameCanvas), isElapsedTNT, this->WAIT)) {
                if (AllBinaryGameCanvas_getGameState(this->gameCanvas) == this->gameStateFactory->SHOW_END_RESULT_GAME_STATE) {
                    HighScoresHelperBase* highScoresBase = ((HighScoresHelperBase*) this->gameCanvas->highScoresHelper);
                    HighScores* highScores = HighScoresHelperBase_getSelectedHighScores(highScoresBase);
                    if (highScores != NullHighScoresSingletonFactory_getInstance()) {
                        HighScoresHelperBase_selectHighScores(highScoresBase);
                        JAVA_CALL(AllBinaryGameCanvas_getRealHighScoresPaintable(this->gameCanvas), setHighScores, highScores);
                        AllBinaryGameCanvas_setGameState(this->gameCanvas, this->gameStateFactory->SHOW_HIGH_SCORE_GAME_STATE);
                        AllBinaryGameCanvas_setHighScoresPaintable(this->gameCanvas, AllBinaryGameCanvas_getRealHighScoresPaintable(this->gameCanvas));
                    }
                } else if (AllBinaryGameCanvas_getGameState(this->gameCanvas) == this->gameStateFactory->SHOW_HIGH_SCORE_GAME_STATE) {
                    AllBinaryGameCanvas_setGameState(this->gameCanvas, this->gameStateFactory->SHOW_END_RESULT_GAME_STATE);
                    AllBinaryGameCanvas_setHighScoresPaintable(this->gameCanvas, NullPaintable_getInstance());
                }
            }
        }
}

