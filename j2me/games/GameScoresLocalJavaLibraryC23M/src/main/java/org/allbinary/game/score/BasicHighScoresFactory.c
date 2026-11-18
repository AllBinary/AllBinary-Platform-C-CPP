// Generated Code Do Not Modify
#include "org/allbinary/game/score/BasicHighScoresFactory.h"
#include "org/allbinary/game/GameInfo.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/system/SoftwareInformation.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/game/score/HighScoresBase.h"
#include "org/allbinary/game/score/HighScores.h"
#include "org/allbinary/game/score/HighScoresResultsListener.h"
#include "org/allbinary/game/score/RecordStoreHighScores.h"
#include "org/allbinary/game/score/ScoreComparator.h"
#include "org/allbinary/game/score/HighScoresHelper2.h"
#include "org/allbinary/game/score/HighScoresHelperBaseInterface.h"








void BasicHighScoresFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void BasicHighScoresFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicHighScoresFactory", "HighScoresBase");
    java_register_method("BasicHighScoresFactory", "fetchHighScores", (void*) BasicHighScoresFactory_fetchHighScores);
    java_register_method("BasicHighScoresFactory", "fetchHighScoresPreload", (void*) BasicHighScoresFactory_fetchHighScoresPreload);
    java_register_method("BasicHighScoresFactory", "createHighScoresHelper", (void*) BasicHighScoresFactory_createHighScoresHelper);
}

static void BasicHighScoresFactory_initFields(BasicHighScoresFactory* this) {
    this->logUtil = LogUtil_getInstance();
    
    this->highScoresArray = ((HighScores**) java_array_new(sizeof(HighScores*), 1));
    this->TOP = "Top";
    this->SCORES = "Scores";
    this->PERSONAL_HIGH_SCORES = "Personal Top Scores";
    this->FETCH = "fetchHighScores";
}


void BasicHighScoresFactory_init(BasicHighScoresFactory* this, AbeClientInformationInterface* abeClientInformation, SoftwareInformation* softwareInformation) {
    BasicHighScoresFactory_register();
    HighScoresBase_init(&this->base);
    BasicHighScoresFactory_initFields(this);
        this->abeClientInformation = abeClientInformation;
}

BasicHighScoresFactory* BasicHighScoresFactory_new(AbeClientInformationInterface* abeClientInformation, SoftwareInformation* softwareInformation) {
    BasicHighScoresFactory* this = java_object_alloc(sizeof(BasicHighScoresFactory), "BasicHighScoresFactory");
    BasicHighScoresFactory_init(this, abeClientInformation, softwareInformation);
    return this;
}


void BasicHighScoresFactory_fetchHighScores(BasicHighScoresFactory* this, GameInfo* gameInfo, HighScoresResultsListener* highScoresResultsListener) {
        LogUtil_putF(this->logUtil, "Getting Local HighScores", this, this->FETCH);
        BasicHighScoresFactory_fetchHighScoresPreload(this, gameInfo, highScoresResultsListener, true);
}


void BasicHighScoresFactory_fetchHighScoresPreload(BasicHighScoresFactory* this, GameInfo* gameInfo, HighScoresResultsListener* highScoresResultsListener, bool preload) {
        JAVA_TRY {
            this->highScoresArray[0] = RecordStoreHighScores_getInstance(this->abeClientInformation, gameInfo, this->TOP, this->PERSONAL_HIGH_SCORES, this->SCORES, ScoreComparator_new(true));
            HighScoresResultsListener_setHighScoresArray(highScoresResultsListener, this->highScoresArray);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->base.commonStrings->EXCEPTION, this, this->FETCH, e);
        } JAVA_END_TRY;
}


HighScoresHelperBaseInterface* BasicHighScoresFactory_createHighScoresHelper(BasicHighScoresFactory* this) {
        return HighScoresHelper2_new();
}


bool BasicHighScoresFactory_loaded(int32_t index2) {
        if (index2 >= 0) {
            return true;
        }
        return false;
}

