// Generated Code Do Not Modify
// package org.allbinary.media.audio.music

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/thread/ARunnable.h"
// #include "javax/microedition/media/Player.h"
// #include "javax/microedition/media/PlayerListener.h"
#include "org/allbinary/AvianUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/media/audio/NoSound.h"
#include "org/allbinary/media/audio/PlayerStateUtil.h"
#include "org/allbinary/media/audio/Sound.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/time/GameTickTimeDelayHelper.h"
#include "org/allbinary/time/GameTickTimeDelayHelperFactory.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListUtil.h"

typedef struct MusicManager MusicManager;
struct MusicManager {
    CommonStrings* commonStrings;
    CommonSeps* commonSeps;
    BasicArrayListUtil* basicArrayListUtil;
    GameTickTimeDelayHelper* gameTickTimeDelayHelper;
    PlayerStateUtil* playerStateUtil;
    TimeDelayHelper* timeDelayHelper;
    PlayerListener* playerListener;
    const char* PLAY;
    const char* SONG;
    const char* NEXT_SONG;
    const char* STOPPING;
    const char* ENDING;
    const char* WAITING_FOR_MEDIA_TO_END;
    const char* ALREADY_PLAYING;
    const char* ALREADY_ENDED;
    BasicArrayList* songList;
    Sound* currentSongSound;
    Sound* nextSongSound;
    bool reset;
    bool noDuration;
    bool stopped;
};


MusicManager* MusicManager_new(const char* musicServiceClass, BasicArrayList* songList);

void MusicManager_init(MusicManager* this, const char* musicServiceClass, BasicArrayList* songList);
void MusicManager_startNewSong(MusicManager* this);
void MusicManager_nextSong(MusicManager* this, Sound* nextSongSound, int32_t leftVolume, int32_t rightVolume);
void MusicManager_reset(MusicManager* this);
void MusicManager_process(MusicManager* this);
static void MusicManager_waitForStateChange(MusicManager* this, Sound* endingCurrentSongSound, Sound* startingCurrentSongSound);
void MusicManager_stop(MusicManager* this);

static void MusicManager_initFields(MusicManager* this) {
    this->commonStrings = CommonStrings_getInstance();
    this->commonSeps = CommonSeps_getInstance();
    this->basicArrayListUtil = BasicArrayListUtil_getInstance();
    this->gameTickTimeDelayHelper = GameTickTimeDelayHelperFactory_getInstance();
    this->playerStateUtil = PlayerStateUtil_getInstance();
    this->timeDelayHelper = TimeDelayHelper_new(0);
    this->playerListener = MusicManagerPlayerListener_new(this);
    this->PLAY = "Play ";
    this->SONG = " for: ";
    this->NEXT_SONG = java_concat(java_string_of(CommonLabels_getInstance()->NEXT), " Song: ");
    this->STOPPING = "Stopping Current Song: ";
    this->ENDING = "Ending Current Song: ";
    this->WAITING_FOR_MEDIA_TO_END = "Waiting for media to end";
    this->ALREADY_PLAYING = "Already Playing: ";
    this->ALREADY_ENDED = "Last Song already ended: ";
    
    this->currentSongSound = NoSound_getInstance();
    this->nextSongSound = NoSound_getInstance();
    this->reset = false;
    this->noDuration = false;
    this->stopped = true;
}


void MusicManager_init(MusicManager* this, const char* musicServiceClass, BasicArrayList* songList) {
    MusicManager_initFields(this);
        this->songList = songList;
}

MusicManager* MusicManager_new(const char* musicServiceClass, BasicArrayList* songList) {
    MusicManager* this = calloc(1, sizeof(MusicManager));
    MusicManager_init(this, musicServiceClass, songList);
    return this;
}


void MusicManager_startNewSong(MusicManager* this) {
        if (this->nextSongSound == NoSound_getInstance()) {
            Sound* randomSongSound = ((Sound*) BasicArrayListUtil_getRandom(this->basicArrayListUtil, this->songList));
            MusicManager_nextSong(this, randomSongSound, 0, 0);
        }
        MusicManager_process(this);
}


void MusicManager_nextSong(MusicManager* this, Sound* nextSongSound, int32_t leftVolume, int32_t rightVolume) {
        PreLogUtil_put(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->NEXT_SONG), append, Sound_getResource(nextSongSound)), toString), this, this->commonStrings->PROCESS);
        this->nextSongSound = nextSongSound;
        MusicManager_reset(this);
        this->stopped = false;
}


void MusicManager_reset(MusicManager* this) {
        this->reset = true;
}


void MusicManager_process(MusicManager* this) {
        JAVA_TRY {
            if (this->stopped) {
                return;
            }
            if (BasicArrayList_size(this->songList) == 0) {
                return;
            }
            if ((TimeDelayHelper_isTime(this->timeDelayHelper, this->gameTickTimeDelayHelper->startTime) && !this->noDuration) || this->reset) {
                this->reset = false;
                this->noDuration = false;
                Sound* endingCurrentSongSound = this->currentSongSound;
                Sound* nextSongSound = this->nextSongSound;
                this->nextSongSound = NoSound_getInstance();
                if (nextSongSound == NoSound_getInstance()) {
                    this->currentSongSound = ((Sound*) BasicArrayListUtil_getRandom(BasicArrayListUtil_getInstance(), this->songList));
                } else {
                    this->currentSongSound = nextSongSound;
                }
                Sound* startingCurrentSongSound = this->currentSongSound;
                int64_t duration = ((int64_t) Sound_getDuration(this->currentSongSound));
                this->timeDelayHelper->delay = ((int32_t) duration);
                if (duration <= 0LL) {
                    const char* NO_DURATION_FOR = "No Duration for: ";
                    PreLogUtil_put(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), NO_DURATION_FOR), append, Sound_getResource(this->currentSongSound)), toString), this, this->commonStrings->PROCESS);
                    JAVA_CALL(Sound_getPlayerP(this->currentSongSound), addPlayerListener, this->playerListener);
                    this->noDuration = true;
                }
                if (endingCurrentSongSound != NoSound_getInstance()) {
                    if (endingCurrentSongSound == startingCurrentSongSound && JAVA_CALL(Sound_getPlayerP(endingCurrentSongSound), getState) == Player_STARTED) {
                        PreLogUtil_put(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->ALREADY_PLAYING), append, Sound_getResource(endingCurrentSongSound)), toString), this, this->commonStrings->PROCESS);
                        PreLogUtil_put(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->STOPPING), append, Sound_getResource(endingCurrentSongSound)), append, this->SONG), appendlong, duration), toString), this, this->commonStrings->PROCESS);
                        JAVA_CALL(Sound_getPlayerP(endingCurrentSongSound), stop);
                        MusicManager_waitForStateChange(this, endingCurrentSongSound, startingCurrentSongSound);
                    } else {
                        if (JAVA_CALL(Sound_getPlayerP(endingCurrentSongSound), getState) == Player_STARTED) {
                            PreLogUtil_put(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->STOPPING), append, Sound_getResource(endingCurrentSongSound)), append, this->SONG), appendlong, duration), toString), this, this->commonStrings->PROCESS);
                            JAVA_CALL(Sound_getPlayerP(endingCurrentSongSound), stop);
                            MusicManager_waitForStateChange(this, endingCurrentSongSound, startingCurrentSongSound);
                        } else {
                            PreLogUtil_put(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->ALREADY_ENDED), append, this->PLAY), append, Sound_getResource(startingCurrentSongSound)), toString), this, this->commonStrings->PROCESS);
                            if (AvianUtil_isAvian()) {
                                JAVA_CALL(Sound_getPlayerP(endingCurrentSongSound), stop);
                                JAVA_CALL(Sound_getPlayerP(startingCurrentSongSound), stop);
                            }
                            JAVA_CALL(Sound_getPlayerP(startingCurrentSongSound), start);
                        }
                    }
                } else {
                    PreLogUtil_put(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->PLAY), append, Sound_getResource(this->currentSongSound)), append, this->SONG), appendlong, duration), toString), this, this->commonStrings->PROCESS);
                    JAVA_CALL(Sound_getPlayerP(this->currentSongSound), start);
                }
            }
        } JAVA_CATCH(Exception, e) {
            const char* resource = StringUtil_getInstance()->EMPTY_STRING;
            if (this->currentSongSound != NoSound_getInstance()) {
                resource = Sound_getResource(this->currentSongSound);
            }
            PreLogUtil_putOE(java_concat(java_string_of(this->commonStrings->EXCEPTION_LABEL), resource), this, this->commonStrings->PROCESS, e);
        } JAVA_END_TRY;
}


// throws Exception
static void MusicManager_waitForStateChange(MusicManager* this, Sound* endingCurrentSongSound, Sound* startingCurrentSongSound) {
        while (JAVA_CALL(Sound_getPlayerP(endingCurrentSongSound), getState) == Player_STARTED) {
            PreLogUtil_put(this->WAITING_FOR_MEDIA_TO_END, this, this->commonStrings->PROCESS);
            java_sleep(100);
        }
        PreLogUtil_put(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), PlayerStateUtil_convert(this->playerStateUtil, JAVA_CALL(Sound_getPlayerP(endingCurrentSongSound), getState))), append, this->commonSeps->SPACE), append, this->PLAY), append, Sound_getResource(startingCurrentSongSound)), toString), this, this->commonStrings->PROCESS);
        JAVA_CALL(Sound_getPlayerP(startingCurrentSongSound), start);
}


// throws Exception
void MusicManager_stop(MusicManager* this) {
        JAVA_TRY {
            Sound* currentSongSound = this->currentSongSound;
            if (currentSongSound != NoSound_getInstance()) {
                this->stopped = true;
                PreLogUtil_put(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->ENDING), append, Sound_getResource(currentSongSound)), toString), this, this->commonStrings->PROCESS);
                JAVA_CALL(Sound_getPlayerP(currentSongSound), stop);
            }
            TimeDelayHelper_setStartTime(this->timeDelayHelper, 0);
            PreLogUtil_put(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->commonStrings->END), append, StringUtil_toString(StringUtil_getInstance(), currentSongSound)), toString), this, this->commonStrings->END);
        } JAVA_CATCH(Exception, e) {
            const char* resource = StringUtil_getInstance()->EMPTY_STRING;
            if (currentSongSound != NoSound_getInstance()) {
                resource = Sound_getResource(currentSongSound);
            }
            PreLogUtil_putOE(java_concat(java_string_of(this->commonStrings->EXCEPTION_LABEL), resource), this, this->commonStrings->END, e);
        } JAVA_END_TRY;
}

//Handle Media ending for Avian
typedef struct MusicManagerPlayerListener MusicManagerPlayerListener;
struct MusicManagerPlayerListener {
    PlayerListener PlayerListener_interface;
    MusicManager* musicManager;
};


MusicManagerPlayerListener* MusicManagerPlayerListener_new(MusicManager* musicManager);
    
    void MusicManager_init(MusicManager* this, MusicManager* musicManager);
    void MusicManager_playerUpdate(MusicManager* this, Player* player, const char* event, Any* eventData);

static void MusicManagerPlayerListener_initFields(MusicManagerPlayerListener* this) {
        
}
    

    void MusicManager_init(MusicManager* this, MusicManager* musicManager) {
        MusicManager_initFields(this);
            this->musicManager = musicManager;
    }

    MusicManager* MusicManager_new(MusicManager* musicManager) {
        MusicManager* this = calloc(1, sizeof(MusicManager));
        MusicManager_init(this, musicManager);
        return this;
    }
    

    void MusicManager_playerUpdate(MusicManager* this, Player* player, const char* event, Any* eventData) {
            PreLogUtil_put(event, this, this->musicManager->commonStrings->PROCESS);
            if (event == PlayerListener_END_OF_MEDIA || event == PlayerListener_STOPPED || event == PlayerListener_CLOSED) {
                MusicManager_reset(this->musicManager);
            }
    }

