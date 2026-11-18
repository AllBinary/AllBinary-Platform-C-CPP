// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/SaveHighScoreRunnable.h"
#include "org/allbinary/game/score/displayable/HighScoreTextBox.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"





void SaveHighScoreRunnable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SaveHighScoreRunnable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SaveHighScoreRunnable", nullptr);
    java_register_method("SaveHighScoreRunnable", "run", (void*) SaveHighScoreRunnable_run);
}

static void SaveHighScoreRunnable_initFields(SaveHighScoreRunnable* this) {
    this->progressCanvas = ProgressCanvasFactory_getInstance();
    
    
}


void SaveHighScoreRunnable_init(SaveHighScoreRunnable* this, bool isLast, HighScoreTextBox* textBox) {
    SaveHighScoreRunnable_register();
    SaveHighScoreRunnable_initFields(this);
        this->isLast = isLast;
        this->textBox = textBox;
}

SaveHighScoreRunnable* SaveHighScoreRunnable_new(bool isLast, HighScoreTextBox* textBox) {
    SaveHighScoreRunnable* this = java_object_alloc(sizeof(SaveHighScoreRunnable), "SaveHighScoreRunnable");
    SaveHighScoreRunnable_init(this, isLast, textBox);
    return this;
}


void SaveHighScoreRunnable_run(SaveHighScoreRunnable* this) {
        LogUtil* logUtil = LogUtil_getInstance();
        JAVA_TRY {
            if (this->isLast) {
                HighScoreTextBox_submit(this->textBox);
            } else {
                HighScoreTextBox_saveHighScore(this->textBox);
            }
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(logUtil, commonStrings->EXCEPTION, this, "run", e);
            ProgressCanvas_end(this->progressCanvas);
        } JAVA_END_TRY;
}

