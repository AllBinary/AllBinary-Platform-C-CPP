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
#include "android/app/Service.h"
#include "android/content/Intent.h"
#include "android/media/MediaPlayer.h"
#include "android/os/IBinder.h"
#include "org/allbinary/android/NullAndroidCanvas.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonStateStrings.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/thread/ARunnable.h"

typedef struct BaseMusicService BaseMusicService;
struct BaseMusicService {
    Service base;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    CommonStateStrings* commonStateStrings;
    const char* ALREADY_PLAYING;
    const char* WAITING_FOR_MUSIC_TO_END;
    MediaPlayer* player;
    int32_t songId;
    int32_t leftVolume;
    int32_t rightVolume;
};


BaseMusicService* BaseMusicService_new(void);
IBinder* BaseMusicService_onBind(BaseMusicService* this, Intent* intent);
void BaseMusicService_onCreate(BaseMusicService* this);
void BaseMusicService_onDestroy(BaseMusicService* this);
void BaseMusicService_pause(BaseMusicService* this);
void BaseMusicService_resume(BaseMusicService* this);
void BaseMusicService_start(BaseMusicService* this);
void BaseMusicService_onStart(BaseMusicService* this, Intent* intent, int32_t startid);
int32_t BaseMusicService_onStartCommand(BaseMusicService* this, Intent* intent, int32_t flags, int32_t startId);
void BaseMusicService_onStartCommandIntent(BaseMusicService* this, Intent* intent);

static void BaseMusicService_initFields(BaseMusicService* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->commonStateStrings = CommonStateStrings_getInstance();
    this->ALREADY_PLAYING = "This is one song per music service";
    this->WAITING_FOR_MUSIC_TO_END = "Waiting for music to end";
    this->player = NullAndroidCanvas_NULL_MEDIA_PLAYER;
    this->songId = -1;
    this->leftVolume = -1;
    this->rightVolume = -1;
}

void BaseMusicService_init(BaseMusicService* this) {
    Service_init(&this->base);
    BaseMusicService_initFields(this);
}

BaseMusicService* BaseMusicService_new(void) {
    BaseMusicService* this = calloc(1, sizeof(BaseMusicService));
    BaseMusicService_init(this);
    return this;
}


IBinder* BaseMusicService_onBind(BaseMusicService* this, Intent* intent) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStateStrings->BIND);
        return nullptr;
}


void BaseMusicService_onCreate(BaseMusicService* this) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStateStrings->CREATE);
}


void BaseMusicService_onDestroy(BaseMusicService* this) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStateStrings->DESTROY);
        if (this->player != NullAndroidCanvas_NULL_MEDIA_PLAYER) {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStateStrings->PAUSE);
            MediaPlayer_stop(this->player);
            MediaPlayer_reset(this->player);
            MediaPlayer_release(this->player);
        }
}


void BaseMusicService_pause(BaseMusicService* this) {
        if (this->player != NullAndroidCanvas_NULL_MEDIA_PLAYER) {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStateStrings->PAUSE);
            MediaPlayer_pause(this->player);
        }
}


void BaseMusicService_resume(BaseMusicService* this) {
        if (this->player != NullAndroidCanvas_NULL_MEDIA_PLAYER && !MediaPlayer_isPlaying(this->player)) {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStateStrings->RESUME);
            MediaPlayer_start(this->player);
        }
}


void BaseMusicService_start(BaseMusicService* this) {
        this->player = MediaPlayer_create(this, this->songId);
        MediaPlayer_setVolume(this->player, (((float) this->leftVolume)) / 100.0f, (((float) this->rightVolume)) / 100.0f);
        MediaPlayer_setLooping(this->player, false);
        MediaPlayer_start(this->player);
}


void BaseMusicService_onStart(BaseMusicService* this, Intent* intent, int32_t startid) {
        BaseMusicService_onStartCommandIntent(this, intent);
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStateStrings->START);
}


int32_t BaseMusicService_onStartCommand(BaseMusicService* this, Intent* intent, int32_t flags, int32_t startId) {
        BaseMusicService_onStartCommandIntent(this, intent);
        return Service_START_STICKY;
}


void BaseMusicService_onStartCommandIntent(BaseMusicService* this, Intent* intent) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStateStrings->ON_START_COMMAND);
        MusicStrings* musicStrings = MusicStrings_getInstance();
        if (intent != nullptr) {
            int32_t command = Intent_getIntExtra(intent, this->commonStateStrings->ON_START_COMMAND, -1);
            LogUtil_putF(this->logUtil, CommonLabels_getInstance()->COMMAND_LABEL + command, this, this->commonStateStrings->ON_START_COMMAND);
            if (command == 1) {
                BaseMusicService_pause(this);
                return;
            } else if (command == 2) {
                BaseMusicService_resume(this);
                return;
            } else {
                this->songId = Intent_getIntExtra(intent, musicStrings->SONG_EXTRA, -1);
                this->leftVolume = Intent_getIntExtra(intent, musicStrings->LEFT_VOLUME, -1);
                this->rightVolume = Intent_getIntExtra(intent, musicStrings->RIGHT_VOLUME, -1);
            }
        } else {
            java_throw(java_exception_new("RuntimeException", "Started service without intent"));
        }
        if (this->songId != -1) {
            ((void) 0);
            if (this->player != NullAndroidCanvas_NULL_MEDIA_PLAYER && MediaPlayer_isPlaying(this->player)) {
                MediaPlayer* player = this->player;
                LogUtil_putF(this->logUtil, this->ALREADY_PLAYING, this, this->commonStateStrings->ON_START_COMMAND);
                #if 0 /* Java local class: move it to file scope */
typedef struct MusicRunnable MusicRunnable;
struct MusicRunnable {
    ARunnable base;
    BaseMusicService* baseMusicService;
};


MusicRunnable* MusicRunnable_new(BaseMusicService* baseMusicService);
                
                void BaseMusicService_init(BaseMusicService* this, BaseMusicService* baseMusicService);
                void BaseMusicService_run(BaseMusicService* this);

static void MusicRunnable_initFields(MusicRunnable* this) {
                    
}
                

                void BaseMusicService_init(BaseMusicService* this, BaseMusicService* baseMusicService) {
    ARunnable_init(&this->base);
                    BaseMusicService_initFields(this);
                        this->baseMusicService = baseMusicService;
                }

                BaseMusicService* BaseMusicService_new(BaseMusicService* baseMusicService) {
                    BaseMusicService* this = calloc(1, sizeof(BaseMusicService));
                    BaseMusicService_init(this, baseMusicService);
                    return this;
                }
                

                void BaseMusicService_run(BaseMusicService* this) {
                        LogUtil* logUtil = LogUtil_getInstance();
                        CommonStrings* commonStrings = CommonStrings_getInstance();
                        CommonStateStrings* commonStateStrings = CommonStateStrings_getInstance();
                        JAVA_TRY {
                            while (MediaPlayer_isPlaying(this->player)) {
                                LogUtil_putF(logUtil, this->baseMusicService->WAITING_FOR_MUSIC_TO_END, this, commonStateStrings->ON_START_COMMAND);
                                java_sleep(1200);
                            }
                            BaseMusicService_onStartCommandIntent(this->baseMusicService, this->base.intent);
                        } JAVA_CATCH(Exception, e) {
                            LogUtil_put(logUtil, commonStrings->EXCEPTION, this, commonStateStrings->ON_START_COMMAND, e);
                        } JAVA_END_TRY;
                }
#endif
                Runnable* runnable = MusicRunnable_new(this);
                Thread* thread = Thread_new(runnable);
                Thread_start(thread);
                return;
            }
            BaseMusicService_start(this);
        }
}

