// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/EndGameProcessor.h"
#include "org/allbinary/game/score/HighScores.h"
#include "org/allbinary/game/score/HighScoresHelperBase.h"
#include "org/allbinary/game/score/NullHighScoresSingletonFactory.h"
#include "org/allbinary/game/state/GameStateFactory.h"
#include "org/allbinary/graphics/paint/NullPaintable.h"
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#if __has_include("org/allbinary/game/displayable/canvas/TimeDelayHelper.h")
#include "org/allbinary/game/displayable/canvas/TimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/canvas/TimeDelayHelper.h")
#include "org/allbinary/canvas/TimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/game/score/TimeDelayHelper.h")
#include "org/allbinary/game/score/TimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/game/score/TimeDelayHelper.h")
#include "org/allbinary/game/score/TimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/game/score/TimeDelayHelper.h")
#include "org/allbinary/game/score/TimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/game/state/TimeDelayHelper.h")
#include "org/allbinary/game/state/TimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/graphics/paint/TimeDelayHelper.h")
#include "org/allbinary/graphics/paint/TimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/HighScoresPaintable.h")
#include "org/allbinary/game/displayable/canvas/HighScoresPaintable.h"
#endif
#if __has_include("org/allbinary/canvas/HighScoresPaintable.h")
#include "org/allbinary/canvas/HighScoresPaintable.h"
#endif
#if __has_include("org/allbinary/game/score/HighScoresPaintable.h")
#include "org/allbinary/game/score/HighScoresPaintable.h"
#endif
#if __has_include("org/allbinary/game/score/HighScoresPaintable.h")
#include "org/allbinary/game/score/HighScoresPaintable.h"
#endif
#if __has_include("org/allbinary/game/score/HighScoresPaintable.h")
#include "org/allbinary/game/score/HighScoresPaintable.h"
#endif
#if __has_include("org/allbinary/game/state/HighScoresPaintable.h")
#include "org/allbinary/game/state/HighScoresPaintable.h"
#endif
#if __has_include("org/allbinary/graphics/paint/HighScoresPaintable.h")
#include "org/allbinary/graphics/paint/HighScoresPaintable.h"
#endif





void EndGameProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void EndGameProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("EndGameProcessor", "Processor");
    java_register_method("EndGameProcessor", "process", (void*) EndGameProcessor_process);
}

static void EndGameProcessor_initFields(EndGameProcessor* this) {
    this->gameStateFactory = GameStateFactory_getInstance();
    
    this->WAIT = 5000LL;
}


void EndGameProcessor_init(EndGameProcessor* this, AllBinaryGameCanvas* gameCanvas) {
    EndGameProcessor_register();
    Processor_init(&this->base);
    EndGameProcessor_initFields(this);
        this->gameCanvas = gameCanvas;
}

EndGameProcessor* EndGameProcessor_new(AllBinaryGameCanvas* gameCanvas) {
    EndGameProcessor* this = java_object_alloc(sizeof(EndGameProcessor), "EndGameProcessor");
    EndGameProcessor_init(this, gameCanvas);
    return this;
}


// throws Exception
void EndGameProcessor_process(EndGameProcessor* this) {
        if (AllBinaryGameCanvas_isHighScoreSubmitted(this->gameCanvas)) {
            if (TimeDelayHelper_isElapsedTNT(AllBinaryGameCanvas_getGameStateTimeHelper(this->gameCanvas), this->WAIT)) {
                if (AllBinaryGameCanvas_getGameState(this->gameCanvas) == this->gameStateFactory->SHOW_END_RESULT_GAME_STATE) {
                    HighScoresHelperBase* highScoresBase = ((HighScoresHelperBase*) this->gameCanvas->highScoresHelper);
                    HighScores* highScores = HighScoresHelperBase_getSelectedHighScores(highScoresBase);
                    if (highScores != NullHighScoresSingletonFactory_getInstance()) {
                        HighScoresHelperBase_selectHighScores(highScoresBase);
                        HighScoresPaintable_setHighScores(AllBinaryGameCanvas_getRealHighScoresPaintable(this->gameCanvas), highScores);
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

