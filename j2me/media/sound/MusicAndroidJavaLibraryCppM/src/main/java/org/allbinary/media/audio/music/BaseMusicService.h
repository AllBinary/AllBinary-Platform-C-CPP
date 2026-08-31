
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_MUSIC_BASEMUSICSERVICE_H
        #define ORG_ALLBINARY_MEDIA_AUDIO_MUSIC_BASEMUSICSERVICE_H

            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/RuntimeException.h"
        
            #include "../../../../../java/lang/System.h"
        
            #include "../../../../../java/lang/Thread.h"
        
            #include "../../../../../java/lang/Runnable.h"
        
#include <android/app/Service.h>

      
#include <android/content/Intent.h>

      
#include <android/media/MediaPlayer.h>

      
#include <android/os/IBinder.h>

      
#include <org/allbinary/android/NullAndroidCanvas.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStateStrings.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/thread/ARunnable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MusicStrings.h"

class BaseMusicService: public Service {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const commonStateStrings: CommonStateStrings = CommonStateStrings.getInstance()!;

    private: const ALREADY_PLAYING: string = "This is one song per music service";

    private: const WAITING_FOR_MUSIC_TO_END: string = "Waiting for music to end";

    private: player: MediaPlayer = NullAndroidCanvas.NULL_MEDIA_PLAYER;

    private: songId: int32_t =  -1;

    private: leftVolume: int32_t =  -1;

    private: rightVolume: int32_t =  -1;

    public IBinder onBind(Intent intent);

    public onCreate();

    public onDestroy();

    public pause();

    public resume();

    public start();

    public onStart(Intent intent, int32_t startid);

    public int32_t onStartCommand(Intent intent, int32_t flags, int32_t startId);

    public onStartCommandIntent(Intent intent);

};

            


        #endif //ORG_ALLBINARY_MEDIA_AUDIO_MUSIC_BASEMUSICSERVICE_H
