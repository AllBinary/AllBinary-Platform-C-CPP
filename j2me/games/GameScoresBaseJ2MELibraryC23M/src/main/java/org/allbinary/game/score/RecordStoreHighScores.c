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
// #include "java/io/ByteArrayInputStream.h"
// #include "java/io/DataInputStream.h"
// #include "java/io/EOFException.h"
// #include "java/io/IOException.h"
// #include "javax/microedition/rms/RecordComparator.h"
// #include "javax/microedition/rms/RecordEnumeration.h"
// #include "javax/microedition/rms/RecordStore.h"
// #include "javax/microedition/rms/RecordStoreException.h"
// #include "javax/microedition/rms/RecordStoreNotFoundException.h"
#include "org/allbinary/TsUtil.h"
#include "org/allbinary/game/GameInfo.h"
#include "org/allbinary/game/configuration/persistance/NullRecordComparator.h"
#include "org/allbinary/game/configuration/persistance/NullRecordFilter.h"
#include "org/allbinary/game/configuration/persistance/NullRecordStore.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/persistance/PlatformRecordIdUtil.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/game/score/HighScores.h"

typedef struct RecordStoreHighScores RecordStoreHighScores;
struct RecordStoreHighScores {
    HighScores base;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    PlatformRecordIdUtil* platformRecordIdUtil;
    TsUtil* tsUtil;
    const char* RECORD_ID;
    int32_t MAXHIGHSCORES;
    GameInfo* gameInfo;
    AbeClientInformationInterface* abeClientInformation;
    RecordComparator* recordComparatorInterface;
};

static ABHashtable* RecordStoreHighScores_hashTable;

RecordStoreHighScores* RecordStoreHighScores_new(AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo, const char* name, const char* heading, const char* columnTwoHeading, RecordComparator* recordComparatorInterface);

void RecordStoreHighScores_init(RecordStoreHighScores* this, AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo, const char* name, const char* heading, const char* columnTwoHeading, RecordComparator* recordComparatorInterface);
HighScores* RecordStoreHighScores_getInstance(AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo, const char* highScoreName, const char* heading, const char* columnTwoHeading, RecordComparator* recordComparatorInterface);
static const char* RecordStoreHighScores_getRecordId(RecordStoreHighScores* this, AbeClientInformationInterface* abeClientInformation);
void RecordStoreHighScores_addHighScore(RecordStoreHighScores* this, HighScore* newHighScore);
static void RecordStoreHighScores_removeLowestHighScore(RecordStoreHighScores* this);
static void RecordStoreHighScores_load(RecordStoreHighScores* this);
static bool RecordStoreHighScores_isTooManyHighScores(RecordStoreHighScores* this);
bool RecordStoreHighScores_isBestScore(RecordStoreHighScores* this, HighScore* newHighScore);
const char* RecordStoreHighScores_toString(RecordStoreHighScores* this);

// Static fields with runtime initializers: call this once at startup
void RecordStoreHighScores_staticInit(void) {
    RecordStoreHighScores_hashTable = StdUtil_createHashtable(StdUtil_getInstance());
}

static void RecordStoreHighScores_initFields(RecordStoreHighScores* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->platformRecordIdUtil = PlatformRecordIdUtil_getInstance();
    this->tsUtil = TsUtil_getInstance();
    this->RECORD_ID = "_HS";
    this->MAXHIGHSCORES = 100;
    
    
    
}


void RecordStoreHighScores_init(RecordStoreHighScores* this, AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo, const char* name, const char* heading, const char* columnTwoHeading, RecordComparator* recordComparatorInterface) {
        HighScores_init(&this->base, name, heading, columnTwoHeading);
        RecordStoreHighScores_initFields(this);
        this->abeClientInformation = abeClientInformation;
        this->gameInfo = gameInfo;
        this->recordComparatorInterface = recordComparatorInterface;
        RecordStoreHighScores_load(this);
}

RecordStoreHighScores* RecordStoreHighScores_new(AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo, const char* name, const char* heading, const char* columnTwoHeading, RecordComparator* recordComparatorInterface) {
    RecordStoreHighScores* this = calloc(1, sizeof(RecordStoreHighScores));
    RecordStoreHighScores_init(this, abeClientInformation, gameInfo, name, heading, columnTwoHeading, recordComparatorInterface);
    return this;
}


// synchronized
HighScores* RecordStoreHighScores_getInstance(AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo, const char* highScoreName, const char* heading, const char* columnTwoHeading, RecordComparator* recordComparatorInterface) {
        Any* highScoresCanBeNull = JAVA_CALL(RecordStoreHighScores_hashTable, get, ((Any*) highScoreName));
        if (highScoresCanBeNull == nullptr) {
            HighScores* highScores = RecordStoreHighScores_new(abeClientInformation, gameInfo, highScoreName, heading, columnTwoHeading, recordComparatorInterface);
            JAVA_CALL(RecordStoreHighScores_hashTable, put, HighScores_getName(highScores), highScores);
            return highScores;
        }
        return ((HighScores*) highScoresCanBeNull);
}


static const char* RecordStoreHighScores_getRecordId(RecordStoreHighScores* this, AbeClientInformationInterface* abeClientInformation) {
        return PlatformRecordIdUtil_getRecordId(this->platformRecordIdUtil, abeClientInformation, JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), CommonSeps_getInstance()->UNDERSCORE), append, RecordStoreHighScores_getName(this)), append, this->RECORD_ID), toString));
}


// synchronized
void RecordStoreHighScores_addHighScore(RecordStoreHighScores* this, HighScore* newHighScore) {
        RecordStore* recordStore = NullRecordStore_NULL_RECORD_STORE;
        JAVA_TRY {
            LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Adding HighScore: "), appendlong, ((int64_t) HighScore_getScore(newHighScore))), toString), this, this->commonStrings->ADD);
            if (RecordStoreHighScores_isTooManyHighScores(this)) {
                LogUtil_putF(this->logUtil, "Removing Lowest Score", this, this->commonStrings->ADD);
                RecordStoreHighScores_removeLowestHighScore(this);
            }
            recordStore = RecordStore_openRecordStore(RecordStoreHighScores_getRecordId(this, this->abeClientInformation), true);
            int8_t* highScoreBytes = HighScore_getAsBytes(newHighScore);
            int32_t recordId = RecordStore_addRecord(recordStore, highScoreBytes, 0, java_array_length(highScoreBytes));
            RecordStoreHighScores_load(this);
        } JAVA_CATCH(RecordStoreException, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->ADD, e);
        } JAVA_CATCH(IOException, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->ADD, e);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->ADD, e);
        } JAVA_FINALLY {
            JAVA_TRY {
                if (recordStore != nullptr) {
                    PreLogUtil_put("Closing RecordStore", this, this->commonStrings->ADD);
                    RecordStore_closeRecordStore(recordStore);
                }
            } JAVA_CATCH(RecordStoreException, e) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->ADD, e);
            } JAVA_END_TRY;
        } JAVA_END_TRY;
}


static void RecordStoreHighScores_removeLowestHighScore(RecordStoreHighScores* this) {
        RecordStore* recordStore = NullRecordStore_NULL_RECORD_STORE;
        JAVA_TRY {
            recordStore = RecordStore_openRecordStore(RecordStoreHighScores_getRecordId(this, this->abeClientInformation), true);
            RecordEnumeration* recordEnum = RecordStore_enumerateRecords(recordStore, NullRecordFilter_NULL_RECORD_FILTER, NullRecordComparator_NULL_RECORD_COMPARATOR, true);
            ScoreComparator* scoreComparator = (((ScoreComparator*) this->recordComparatorInterface));
            HighScore* bestHighScore = HighScore_new(-1, "none", GameInfo_NONE, ScoreComparator_getBestScore(scoreComparator));
            int8_t* recordAsBytes = nullptr;
            ByteArrayInputStream* byteArrayInputStream = nullptr;
            DataInputStream* inputStream = nullptr;
            while (RecordEnumeration_hasNextElement(recordEnum)) {
                int32_t id = RecordEnumeration_nextRecordId(recordEnum);
                recordAsBytes = TsUtil_getRecord(this->tsUtil, recordStore, id);
                if (recordAsBytes != nullptr) {
                    byteArrayInputStream = ByteArrayInputStream_new(recordAsBytes);
                    inputStream = DataInputStream_new(byteArrayInputStream);
                    const char* name = DataInputStream_readUTF(inputStream);
                    int64_t nextScore = DataInputStream_readLong(inputStream);
                    HighScore* nextCurrentHighScore = HighScore_new(id, name, GameInfo_NONE, nextScore);
                    if (RecordComparator_compare(this->recordComparatorInterface, HighScore_getAsBytes(nextCurrentHighScore), HighScore_getAsBytes(bestHighScore)) == RecordComparator_FOLLOWS) {
                        bestHighScore = nextCurrentHighScore;
                    }
                }
            }
            if (HighScore_getId(bestHighScore) != -1) {
                LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Removing Lowest HighScore: "), appendlong, ((int64_t) HighScore_getScore(bestHighScore))), toString), this, this->commonStrings->LOAD);
                RecordStore_deleteRecord(recordStore, HighScore_getId(bestHighScore));
            }
        } JAVA_CATCH(RecordStoreException, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "removeLowestHighScore", e);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "removeLowestHighScore", e);
        } JAVA_FINALLY {
            JAVA_TRY {
                if (recordStore != nullptr) {
                    PreLogUtil_put("Closing RecordStore", this, "removeLowestHighScore");
                    RecordStore_closeRecordStore(recordStore);
                }
            } JAVA_CATCH(RecordStoreException, e) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "removeLowestHighScore", e);
            } JAVA_END_TRY;
        } JAVA_END_TRY;
}


static void RecordStoreHighScores_load(RecordStoreHighScores* this) {
        RecordStore* recordStore = NullRecordStore_NULL_RECORD_STORE;
        JAVA_TRY {
            recordStore = RecordStore_openRecordStore(RecordStoreHighScores_getRecordId(this, this->abeClientInformation), true);
            RecordStoreHighScores_setList(this, BasicArrayListD_new());
            RecordEnumeration* recordEnum = RecordStore_enumerateRecords(recordStore, NullRecordFilter_NULL_RECORD_FILTER, NullRecordComparator_NULL_RECORD_COMPARATOR, true);
            int8_t* recordAsBytes = nullptr;
            ByteArrayInputStream* byteArrayInputStream = nullptr;
            DataInputStream* inputStream = nullptr;
            while (RecordEnumeration_hasNextElement(recordEnum)) {
                int32_t id = RecordEnumeration_nextRecordId(recordEnum);
                recordAsBytes = TsUtil_getRecord(this->tsUtil, recordStore, id);
                if (recordAsBytes != nullptr) {
                    byteArrayInputStream = ByteArrayInputStream_new(recordAsBytes);
                    inputStream = DataInputStream_new(byteArrayInputStream);
                    JAVA_TRY {
                        const char* name = DataInputStream_readUTF(inputStream);
                        int64_t score = DataInputStream_readLong(inputStream);
                        HighScore* newHighScore = HighScore_new(id, name, GameInfo_NONE, score);
                        BasicArrayList* list = RecordStoreHighScores_getList(this);
                        int32_t size = BasicArrayList_size(list);
                        int32_t lastIndex = size;
                        for (int32_t index = 0; index < size; index++) {
                            HighScore* highScore = ((HighScore*) list->objectArray[index]);
                            if (RecordComparator_compare(this->recordComparatorInterface, HighScore_getAsBytes(newHighScore), HighScore_getAsBytes(highScore)) == RecordComparator_PRECEDES) {
                                lastIndex = index;
                                break;
                            }
                        }
                        BasicArrayList_addAt(list, lastIndex, newHighScore);
                    } JAVA_CATCH(EOFException, e) {
                        LogUtil_put(this->logUtil, "EOF", this, this->commonStrings->LOAD, e);
                        java_throw(e);
                    } JAVA_END_TRY;
                }
            }
        } JAVA_CATCH(RecordStoreNotFoundException, e) {
            LogUtil_put(this->logUtil, "No High Scores", this, this->commonStrings->LOAD, e);
        } JAVA_CATCH(RecordStoreException, e) {
            LogUtil_put(this->logUtil, this->commonStrings->UNKNOWN, this, this->commonStrings->LOAD, e);
        } JAVA_CATCH(IOException, e) {
            LogUtil_put(this->logUtil, this->commonStrings->UNKNOWN, this, this->commonStrings->LOAD, e);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->UNKNOWN, this, this->commonStrings->LOAD, e);
        } JAVA_FINALLY {
            JAVA_TRY {
                if (recordStore != nullptr) {
                    PreLogUtil_put("Closing RecordStore", this, this->commonStrings->LOAD);
                    RecordStore_closeRecordStore(recordStore);
                }
            } JAVA_CATCH(RecordStoreException, e) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->LOAD, e);
            } JAVA_END_TRY;
        } JAVA_END_TRY;
}


static bool RecordStoreHighScores_isTooManyHighScores(RecordStoreHighScores* this) {
        if (RecordStoreHighScores_getList(this) != nullptr && JAVA_CALL(RecordStoreHighScores_getList(this), size) < this->MAXHIGHSCORES) {
            return false;
        } else {
            LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "HighScores RecordStore Max Reached: "), appendint, this->MAXHIGHSCORES), toString), this, "isTooManyHighScores");
            return true;
        }
}


// throws Exception
// synchronized
bool RecordStoreHighScores_isBestScore(RecordStoreHighScores* this, HighScore* newHighScore) {
        JAVA_TRY {
            if (!RecordStoreHighScores_isTooManyHighScores(this)) {
                LogUtil_putF(this->logUtil, "Slot Available for a High Score", this, "isBestScore");
                return true;
            } else {
                BasicArrayList* list = RecordStoreHighScores_getList(this);
                int32_t size = BasicArrayList_size(list);
                for (int32_t index = 0; index < size; index++) {
                    HighScore* highScore = ((HighScore*) list->objectArray[index]);
                    if (RecordComparator_compare(this->recordComparatorInterface, HighScore_getAsBytes(newHighScore), HighScore_getAsBytes(highScore)) == RecordComparator_FOLLOWS) {
                        LogUtil_putF(this->logUtil, "Obtained a High Score", this, "isBestScore");
                        return true;
                    }
                }
            }
            LogUtil_putF(this->logUtil, "Not a High Score", this, "isBestScore");
            return false;
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->ADD, e);
            java_throw(e);
        } JAVA_END_TRY;
}


const char* RecordStoreHighScores_toString(RecordStoreHighScores* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, HighScores_toString((&this->base)));
        BasicArrayList* list = RecordStoreHighScores_getList(this);
        int32_t size = BasicArrayList_size(list);
        for (int32_t index = 0; index < size; index++) {
            HighScore* highScore = ((HighScore*) list->objectArray[index]);
            StringMaker_append(stringBuffer, HighScore_getScoreString(highScore));
            StringMaker_append(stringBuffer, CommonSeps_getInstance()->COMMA_SEP);
        }
        return StringMaker_toString(stringBuffer);
}

