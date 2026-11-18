// Generated Code Do Not Modify
#include "org/allbinary/game/score/displayable/HighScoreRunnable.h"
#include "org/allbinary/J2MEUtil.h"
#include "org/allbinary/logic/ABSystemWrapper.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/game/score/displayable/HighScoresCanvas.h"
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif





void HighScoreRunnable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void HighScoreRunnable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("HighScoreRunnable", "ARunnable");
    java_register_method("HighScoreRunnable", "run", (void*) HighScoreRunnable_run);
}

static void HighScoreRunnable_initFields(HighScoreRunnable* this) {
    
}


void HighScoreRunnable_init(HighScoreRunnable* this, HighScoresCanvas* highScoresCanvas) {
    HighScoreRunnable_register();
    ARunnable_init(&this->base);
    HighScoreRunnable_initFields(this);
        this->highScoresCanvas = highScoresCanvas;
}

HighScoreRunnable* HighScoreRunnable_new(HighScoresCanvas* highScoresCanvas) {
    HighScoreRunnable* this = java_object_alloc(sizeof(HighScoreRunnable), "HighScoreRunnable");
    HighScoreRunnable_init(this, highScoresCanvas);
    return this;
}


void HighScoreRunnable_run(HighScoreRunnable* this) {
        CommonStrings* commonStrings = CommonStrings_getInstance();
        LogUtil* logUtil = LogUtil_getInstance();
        HighScoresCanvas* highScoresCanvas = this->highScoresCanvas;
        JAVA_TRY {
            bool isHTML = J2MEUtil_isHTML();
            if (!isHTML) {
                while (!highScoresCanvas->hasPainted) {
                }
                highScoresCanvas->hasPainted = false;
            }
            StringMaker* stringMaker = StringMaker_new();
            ABSystemWrapper* systemWrapper = ABSystemWrapper_getInstance();
            int64_t currentTimeMillis = ABSystemWrapper_currentTimeMillis(systemWrapper);
            LogUtil_putF(logUtil, java_string_of(StringMaker_appendlong(StringMaker_append(stringMaker, "HighScoresCanvas - Request repaint to be sure: "), currentTimeMillis)), this, commonStrings->RUN);
            RepaintBehavior_onChangeRepaint(highScoresCanvas->base.repaintBehavior, highScoresCanvas);
            if (!isHTML) {
                while (!highScoresCanvas->hasPainted) {
                }
            }
            StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
            LogUtil_putF(logUtil, java_string_of(StringMaker_appendlong(StringMaker_append(stringMaker, "HighScoresCanvas - Now that the canvas has completed repaint go ahead and fetch the scores: "), currentTimeMillis)), this, commonStrings->RUN);
            HighScoresCanvas_executeUpdate(highScoresCanvas);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(logUtil, commonStrings->EXCEPTION, this, commonStrings->RUN, e);
        } JAVA_END_TRY;
}

