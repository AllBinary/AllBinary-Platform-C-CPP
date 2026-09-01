
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

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const CommonStateStrings commonStateStrings = CommonStateStrings::getInstance();

    private: const std::string ALREADY_PLAYING = "This is one song per music service";

    private: const std::string WAITING_FOR_MUSIC_TO_END = "Waiting for music to end";

    private: MediaPlayer player = NullAndroidCanvas::NULL_MEDIA_PLAYER;

    private: int32_t songId =  -1;

    private: int32_t leftVolume =  -1;

    private: int32_t rightVolume =  -1;

    public: IBinder onBind(Intent intent);

    public: void onCreate();

    public: void onDestroy();

    public: void pause();

    public: void resume();

    public: void start();

    public: void onStart(Intent intent, int32_t startid);

    public: int32_t onStartCommand(Intent intent, int32_t flags, int32_t startId);

    public: void onStartCommandIntent(Intent intent);

};

            


        #endif //ORG_ALLBINARY_MEDIA_AUDIO_MUSIC_BASEMUSICSERVICE_H
