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
#include "android/app/Activity.h"
#include "android/content/Context.h"
#include "android/content/Intent.h"
#include "org/allbinary/android/AndroidServicesUtil.h"
#include "org/allbinary/data/resource/ResourceUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/media/audio/NoSound.h"
#include "org/allbinary/media/audio/Sound.h"
#include "org/allbinary/string/CommonStateStrings.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/time/GameTickTimeDelayHelper.h"
#include "org/allbinary/time/GameTickTimeDelayHelperFactory.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListUtil.h"

typedef struct MusicManager MusicManager;
struct MusicManager {
    const char* PLAY;
    const char* FOR;
    CommonStrings* commonStrings;
    MusicStrings* musicStrings;
    CommonStateStrings* commonStateStrings;
    BasicArrayListUtil* basicArrayListUtil;
    ResourceUtil* resourceUtil;
    AndroidServicesUtil* androidServicesUtil;
    GameTickTimeDelayHelper* gameTickTimeDelayHelper;
    TimeDelayHelper* timeDelayHelper;
    TimeDelayHelper* timeDelayHelper2;
    BasicArrayList* songList;
    Sound* currentSongSound;
    Sound* nextSongSound;
    int32_t leftVolume;
    int32_t rightVolume;
    const char* musicServiceClass;
    Intent* currentIntent;
};


MusicManager* MusicManager_new(const char* musicServiceClass, BasicArrayList* songList);

void MusicManager_init(MusicManager* this, const char* musicServiceClass, BasicArrayList* songList);
void MusicManager_nextSong(MusicManager* this, Sound* nextSongSound, int32_t leftVolume, int32_t rightVolume);
void MusicManager_reset(MusicManager* this);
void MusicManager_process(MusicManager* this);
void MusicManager_show(MusicManager* this);
void MusicManager_startNewSong(MusicManager* this);
void MusicManager_stop(MusicManager* this);
void MusicManager_pause(Activity* activity, const char* musicServiceClass);
void MusicManager_resume(Activity* activity, const char* musicServiceClass);

static void MusicManager_initFields(MusicManager* this) {
    this->PLAY = "Play ";
    this->FOR = " for: ";
    this->commonStrings = CommonStrings_getInstance();
    this->musicStrings = MusicStrings_getInstance();
    this->commonStateStrings = CommonStateStrings_getInstance();
    this->basicArrayListUtil = BasicArrayListUtil_getInstance();
    this->resourceUtil = ResourceUtil_getInstance();
    this->androidServicesUtil = AndroidServicesUtil_getInstance();
    this->gameTickTimeDelayHelper = GameTickTimeDelayHelperFactory_getInstance();
    this->timeDelayHelper = TimeDelayHelper_new(0);
    this->timeDelayHelper2 = TimeDelayHelper_new(1200);
    
    this->currentSongSound = NoSound_getInstance();
    this->nextSongSound = NoSound_getInstance();
    this->leftVolume = 100;
    this->rightVolume = 100;
    
    
}


void MusicManager_init(MusicManager* this, const char* musicServiceClass, BasicArrayList* songList) {
    MusicManager_initFields(this);
        PreLogUtil_put(this->commonStateStrings->CONTEXT + ResourceUtil_getContext(this->resourceUtil), this, this->commonStrings->CONSTRUCTOR);
        this->musicServiceClass = musicServiceClass;
        this->currentIntent = Intent_new(ResourceUtil_getContext(this->resourceUtil), musicServiceClass);
        this->songList = songList;
}

MusicManager* MusicManager_new(const char* musicServiceClass, BasicArrayList* songList) {
    MusicManager* this = calloc(1, sizeof(MusicManager));
    MusicManager_init(this, musicServiceClass, songList);
    return this;
}


void MusicManager_nextSong(MusicManager* this, Sound* nextSongSound, int32_t leftVolume, int32_t rightVolume) {
        if (nextSongSound == nullptr) {
            nextSongSound = NoSound_getInstance();
        }
        this->nextSongSound = nextSongSound;
        this->leftVolume = leftVolume;
        this->rightVolume = rightVolume;
        MusicManager_reset(this);
}


void MusicManager_reset(MusicManager* this) {
        this->timeDelayHelper->delay = 0;
}


void MusicManager_process(MusicManager* this) {
        if (BasicArrayList_size(this->songList) == 0) {
            return;
        }
        if (TimeDelayHelper_isTime(this->timeDelayHelper, this->gameTickTimeDelayHelper->startTime)) {
            MusicManager_startNewSong(this);
            return;
        }
        if (TimeDelayHelper_isTime(this->timeDelayHelper2, this->gameTickTimeDelayHelper->startTime)) {
            if (AndroidServicesUtil_isServiceRunning(this->androidServicesUtil, Class_getName(this->musicServiceClass))) {
            } else {
                MusicManager_startNewSong(this);
            }
        }
}


void MusicManager_show(MusicManager* this) {
        for (int32_t index = BasicArrayList_size(this->songList); --index >= 0; ) {
            Sound* sound = ((Sound*) BasicArrayList_get(this->songList, index));
            int64_t duration = ((int64_t) Sound_getDuration(sound));
            PreLogUtil_put(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->PLAY), append, Sound_getResource(sound)), append, this->FOR), appendlong, duration), toString), this, this->commonStrings->PROCESS);
        }
}


void MusicManager_startNewSong(MusicManager* this) {
        JAVA_TRY {
            JAVA_CALL(ResourceUtil_getContext(this->resourceUtil), stopService, this->currentIntent);
            if (this->nextSongSound == NoSound_getInstance()) {
                this->currentSongSound = ((Sound*) BasicArrayListUtil_getRandom(this->basicArrayListUtil, this->songList));
            } else {
                this->currentSongSound = this->nextSongSound;
                this->nextSongSound = NoSound_getInstance();
            }
            int64_t duration = ((int64_t) Sound_getDuration(this->currentSongSound));
            PreLogUtil_put(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->PLAY), append, Sound_getResource(this->currentSongSound)), append, this->FOR), appendlong, duration), toString), this, this->commonStrings->PROCESS);
            this->timeDelayHelper->delay = ((int32_t) duration);
            Intent_putExtra(this->currentIntent, this->musicStrings->SONG_EXTRA, JAVA_CALL(ResourceUtil_getResourceId(this->resourceUtil, Sound_getResource(this->currentSongSound)), intValue));
            Intent_putExtra(this->currentIntent, this->musicStrings->LEFT_VOLUME, this->leftVolume);
            Intent_putExtra(this->currentIntent, this->musicStrings->RIGHT_VOLUME, this->rightVolume);
            JAVA_CALL(ResourceUtil_getContext(this->resourceUtil), startService, this->currentIntent);
        } JAVA_CATCH(Exception, e) {
            const char* resource = StringUtil_getInstance()->EMPTY_STRING;
            if (this->currentSongSound != nullptr) {
                resource = Sound_getResource(this->currentSongSound);
            }
            PreLogUtil_putOE(java_concat(java_string_of(this->commonStrings->EXCEPTION_LABEL), resource), this, this->commonStrings->PROCESS, e);
        } JAVA_END_TRY;
}


// throws Exception
void MusicManager_stop(MusicManager* this) {
        JAVA_CALL(ResourceUtil_getContext(this->resourceUtil), stopService, this->currentIntent);
}


void MusicManager_pause(Activity* activity, const char* musicServiceClass) {
        CommonStateStrings* commonStateStrings = CommonStateStrings_getInstance();
        Intent* musicPauseIntent = Intent_new(((Context*) activity), musicServiceClass);
        Intent_putExtra(musicPauseIntent, commonStateStrings->ON_START_COMMAND, 1);
        Activity_startService(activity, musicPauseIntent);
}


void MusicManager_resume(Activity* activity, const char* musicServiceClass) {
        if (AndroidServicesUtil_isServiceRunning(AndroidServicesUtil_getInstance(), Class_getName(musicServiceClass))) {
            CommonStateStrings* commonStateStrings = CommonStateStrings_getInstance();
            Intent* musicResumeIntent = Intent_new(activity, musicServiceClass);
            Intent_putExtra(musicResumeIntent, commonStateStrings->ON_START_COMMAND, 2);
            Activity_startService(activity, musicResumeIntent);
        }
}

