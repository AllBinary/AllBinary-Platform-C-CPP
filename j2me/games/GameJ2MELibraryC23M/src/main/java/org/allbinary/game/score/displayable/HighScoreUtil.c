// Generated Code Do Not Modify
#include "org/allbinary/game/score/displayable/HighScoreUtil.h"
#include "javax/microedition/lcdui/Command.h"
#include "javax/microedition/lcdui/CommandListener.h"
#include "org/allbinary/game/GameInfo.h"
#include "org/allbinary/game/score/HighScore.h"
#include "org/allbinary/game/score/HighScoreNamePersistanceSingleton.h"
#include "org/allbinary/game/score/HighScores.h"
#include "org/allbinary/game/score/HighScoresFactoryInterface.h"
#include "org/allbinary/game/score/HighScoresHelperBaseInterface.h"
#include "org/allbinary/graphics/displayable/MyCanvas.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/string/CommonStrings.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/game/score/HighScoreNamePersistanceSingleton.h")
#include "org/allbinary/game/score/HighScoreNamePersistanceSingleton.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif


Command* HighScoreUtil_SUBMIT_TEXTBOX_COMMAND;






void HighScoreUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    HighScoreUtil_SUBMIT_TEXTBOX_COMMAND = Command_new4("Submit", StringUtil_getInstance()->EMPTY_STRING, (Command_staticInit(), Command_SCREEN), 1);
}

void HighScoreUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("HighScoreUtil", nullptr);
    java_register_method("HighScoreUtil", "setHighScoresArray", (void*) HighScoreUtil_setHighScoresArray);
    java_register_method("HighScoreUtil", "update", (void*) HighScoreUtil_update);
    java_register_method("HighScoreUtil", "saveHighScore", (void*) HighScoreUtil_saveHighScore);
    java_register_method("HighScoreUtil", "submit", (void*) HighScoreUtil_submit);
}

static void HighScoreUtil_initFields(HighScoreUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    
    
    
    
    
    this->firstTime = true;
}


void HighScoreUtil_init(HighScoreUtil* this, HighScoresFactoryInterface* highScoresFactoryInterface, HighScoresHelperBaseInterface* highScoresHelper, AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo, CommandListener* cmdListener, const char* name, HighScore* highScore) {
    HighScoreUtil_register();
    HighScoreUtil_initFields(this);
        this->highScoresFactoryInterface = highScoresFactoryInterface;
        this->highScoresHelper = highScoresHelper;
        this->highScoresArray = HighScoresHelperBaseInterface_getHighScoresArray(this->highScoresHelper);
        this->highScore = highScore;
        this->abeClientInformation = abeClientInformation;
        this->gameInfo = gameInfo;
}

HighScoreUtil* HighScoreUtil_new(HighScoresFactoryInterface* highScoresFactoryInterface, HighScoresHelperBaseInterface* highScoresHelper, AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo, CommandListener* cmdListener, const char* name, HighScore* highScore) {
    HighScoreUtil* this = java_object_alloc(sizeof(HighScoreUtil), "HighScoreUtil");
    HighScoreUtil_init(this, highScoresFactoryInterface, highScoresHelper, abeClientInformation, gameInfo, cmdListener, name, highScore);
    return this;
}


void HighScoreUtil_setHighScoresArray(HighScoreUtil* this, HighScores** highScoresArray) {
        this->highScoresArray = highScoresArray;
        this->firstTime = false;
        HighScoreUtil_saveHighScore(this);
}


void HighScoreUtil_update(HighScoreUtil* this, const char* name) {
        HighScoreNamePersistanceSingleton_save(HighScoreNamePersistanceSingleton_getInstance(), this->abeClientInformation, this->gameInfo, name);
        HighScore_setName(this->highScore, name);
}


void HighScoreUtil_saveHighScore(HighScoreUtil* this) {
        LogUtil_putF(this->logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), this->commonStrings->START), StringUtil_toString(StringUtil_getInstance(), this->highScore))), this, "saveHighScore");
        int32_t size = java_array_length(this->highScoresArray);
        if (this->firstTime && size == 0) {
            LogUtil_putF(this->logUtil, "Games canvas did not give us any HighScores", this, "saveHighScore");
            HighScoresFactoryInterface_fetchHighScores(this->highScoresFactoryInterface, this->gameInfo, this);
            return;
        }
        HighScores* highScores = nullptr;
        const char* highScoresAsString = nullptr;
        for (int32_t index = 0; index < size; index++) {
            highScores = this->highScoresArray[index];
            HighScores_addHighScore(highScores, this->highScore);
            highScoresAsString = java_string_of(highScores);
            LogUtil_putF(this->logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), "Added/Adding Score: "), highScoresAsString)), this, "saveHighScore");
        }
        HighScoresResultsListener_setHighScoresArray(this->highScoresHelper, this->highScoresArray);
}


void HighScoreUtil_submit(HighScoreUtil* this, MyCanvas* myCanvas) {
        CommandListener* commandListener = MyCanvas_getCustomCommandListener(myCanvas);
        CommandListener_commandAction(commandListener, (HighScoreUtil_staticInit(), HighScoreUtil_SUBMIT_TEXTBOX_COMMAND), myCanvas);
}

