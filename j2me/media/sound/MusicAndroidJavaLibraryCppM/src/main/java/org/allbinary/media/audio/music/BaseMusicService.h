
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_MUSIC_BASEMUSICSERVICE_H
        #define ORG_ALLBINARY_MEDIA_AUDIO_MUSIC_BASEMUSICSERVICE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
            #include "java/lang/System.h"
        
            #include "java/lang/Thread.h"
        
            #include "java/lang/Runnable.h"
        
#include <android/app/Service.h>
class Intent;
class MediaPlayer;
class IBinder;
class NullAndroidCanvas;
class LogUtil;
class CommonLabels;
class CommonStateStrings;
class CommonStrings;
#include <org/allbinary/thread/ARunnable.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class MusicStrings;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BaseMusicService: public Service {


            
    public: BaseMusicService();
        
    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    private: CommonStateStrings* commonStateStrings;

    private: const std::string ALREADY_PLAYING = "This is one song per music service";

    private: const std::string WAITING_FOR_MUSIC_TO_END = "Waiting for music to end";

    private: MediaPlayer* player;

    private: int32_t songId =  -1;

    private: int32_t leftVolume =  -1;

    private: int32_t rightVolume =  -1;

    public: IBinder* onBind(Intent* intent);

    public: void onCreate();

    public: void onDestroy();

    public: void pause();

    public: void resume();

    public: void start();

    public: void onStart(Intent* intent, int32_t startid);

    public: int32_t onStartCommand(Intent* intent, int32_t flags, int32_t startId);

    public: void onStartCommandIntent(Intent* intent);

};

            


        #endif //ORG_ALLBINARY_MEDIA_AUDIO_MUSIC_BASEMUSICSERVICE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_AUDIO_MUSIC_BASEMUSICSERVICE_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_AUDIO_MUSIC_BASEMUSICSERVICE_H_COMPLETE
        #if __has_include(<android/app/Service.h>)
#include <android/app/Service.h>
#endif
#if __has_include(<android/content/Intent.h>)
#include <android/content/Intent.h>
#endif
#if __has_include(<android/media/MediaPlayer.h>)
#include <android/media/MediaPlayer.h>
#endif
#if __has_include(<android/os/IBinder.h>)
#include <android/os/IBinder.h>
#endif
#if __has_include(<org/allbinary/android/NullAndroidCanvas.h>)
#include <org/allbinary/android/NullAndroidCanvas.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif
#if __has_include(<org/allbinary/string/CommonStateStrings.h>)
#include <org/allbinary/string/CommonStateStrings.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/thread/ARunnable.h>)
#include <org/allbinary/thread/ARunnable.h>
#endif
#if __has_include("org/allbinary/media/audio/music/MusicStrings.h")
#include "org/allbinary/media/audio/music/MusicStrings.h"
#endif

        #endif
    
