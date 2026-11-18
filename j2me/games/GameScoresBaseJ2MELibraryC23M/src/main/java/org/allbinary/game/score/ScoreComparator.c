// Generated Code Do Not Modify
#include "org/allbinary/game/score/ScoreComparator.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"








void ScoreComparator_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ScoreComparator_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ScoreComparator", nullptr);
    java_register_method("ScoreComparator", "getBestScore", (void*) ScoreComparator_getBestScore);
    java_register_method("ScoreComparator", "compare", (void*) ScoreComparator_compare);
    java_register_method("ScoreComparator", "getHighTooLow", (void*) ScoreComparator_getHighTooLow);
    java_register_method("ScoreComparator", "getLowTooHigh", (void*) ScoreComparator_getLowTooHigh);
}

static void ScoreComparator_initFields(ScoreComparator* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void ScoreComparator_init(ScoreComparator* this, bool isHighestBest) {
    ScoreComparator_register();
    ScoreComparator_initFields(this);
        this->isHighestBest = isHighestBest;
}

ScoreComparator* ScoreComparator_new(bool isHighestBest) {
    ScoreComparator* this = java_object_alloc(sizeof(ScoreComparator), "ScoreComparator");
    ScoreComparator_init(this, isHighestBest);
    return this;
}


int64_t ScoreComparator_getBestScore(ScoreComparator* this) {
        return (this->isHighestBest ? (Long_staticInit(), Long_MAX_VALUE) : 0);
}


int32_t ScoreComparator_compare(ScoreComparator* this, int8_t* recordOne, int8_t* recordTwo) {
        ByteArrayInputStream* byteArrayInputStreamOne = ByteArrayInputStream_new(recordOne);
        DataInputStream* inputStreamOne = DataInputStream_new(byteArrayInputStreamOne);
        ByteArrayInputStream* byteArrayInputStreamTwo = ByteArrayInputStream_new(recordTwo);
        DataInputStream* inputStreamTwo = DataInputStream_new(byteArrayInputStreamTwo);
        int64_t scoreOne = 0LL;
        int64_t scoreTwo = 0LL;
        JAVA_TRY {
            DataInputStream_readUTF(inputStreamOne);
            DataInputStream_readUTF(inputStreamTwo);
            scoreOne = DataInputStream_readLong(inputStreamOne);
            scoreTwo = DataInputStream_readLong(inputStreamTwo);
        } JAVA_CATCH(EOFException, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, "compare", e);
        } JAVA_CATCH(IOException, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, "compare", e);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, "compare", e);
        } JAVA_END_TRY;
        if (this->isHighestBest) {
            return ScoreComparator_getHighTooLow(this, scoreOne, scoreTwo);
        } else {
            return ScoreComparator_getLowTooHigh(this, scoreOne, scoreTwo);
        }
}


int32_t ScoreComparator_getHighTooLow(ScoreComparator* this, int64_t scoreOne, int64_t scoreTwo) {
        if (scoreOne > scoreTwo) {
            return (RecordComparator_staticInit(), RecordComparator_PRECEDES);
        } else if (scoreOne < scoreTwo) {
            return (RecordComparator_staticInit(), RecordComparator_FOLLOWS);
        } else {
            return (RecordComparator_staticInit(), RecordComparator_EQUIVALENT);
        }
}


int32_t ScoreComparator_getLowTooHigh(ScoreComparator* this, int64_t scoreOne, int64_t scoreTwo) {
        if (scoreOne < scoreTwo) {
            return (RecordComparator_staticInit(), RecordComparator_PRECEDES);
        } else if (scoreOne > scoreTwo) {
            return (RecordComparator_staticInit(), RecordComparator_FOLLOWS);
        } else {
            return (RecordComparator_staticInit(), RecordComparator_EQUIVALENT);
        }
}

