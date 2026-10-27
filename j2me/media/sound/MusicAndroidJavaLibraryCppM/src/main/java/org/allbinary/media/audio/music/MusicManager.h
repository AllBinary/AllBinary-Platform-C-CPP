
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_MUSIC_MUSICMANAGER_H
        #define ORG_ALLBINARY_MEDIA_AUDIO_MUSIC_MUSICMANAGER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
            #include "java/lang/Exception.h"
        
class Activity;
class Context;
class Intent;
class AndroidServicesUtil;
class ResourceUtil;
class PreLogUtil;
class StringMaker;
class StringUtil;
class NoSound;
class Sound;
class CommonStateStrings;
class CommonStrings;
class GameTickTimeDelayHelper;
class GameTickTimeDelayHelperFactory;
class TimeDelayHelper;
class BasicArrayList;
class BasicArrayListUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class MusicStrings;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MusicManager
            : public virtual Object
         {

    public: static void pause(Activity* activity, Class* musicServiceClass);

    public: static void resume(Activity* activity, Class* musicServiceClass);

    private: const std::string PLAY = "Play ";

    private: const std::string FOR = " for: ";

    private: CommonStrings* commonStrings;

    private: MusicStrings* musicStrings;

    private: CommonStateStrings* commonStateStrings;

    private: BasicArrayListUtil* basicArrayListUtil;

    private: ResourceUtil* resourceUtil;

    private: AndroidServicesUtil* androidServicesUtil;

    private: GameTickTimeDelayHelper* gameTickTimeDelayHelper;

    private: TimeDelayHelper* timeDelayHelper;

    private: TimeDelayHelper* timeDelayHelper2;

    private: BasicArrayList* songList;

    private: Sound* currentSongSound;

    private: Sound* nextSongSound;

    private: int32_t leftVolume = 100;

    private: int32_t rightVolume = 100;

    private: Class* musicServiceClass;

    private: Intent* currentIntent;

public: MusicManager(Class* musicServiceClass, BasicArrayList* songList);

    public: void nextSong(Sound* nextSongSound, int32_t leftVolume, int32_t rightVolume);

    public: void reset();

    public: void process();

    public: void show();

    public: void startNewSong();

                //@Throws(Exception.constructor)
            
    public: void stop();

};

            


        #endif //ORG_ALLBINARY_MEDIA_AUDIO_MUSIC_MUSICMANAGER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_AUDIO_MUSIC_MUSICMANAGER_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_AUDIO_MUSIC_MUSICMANAGER_H_COMPLETE
        #if __has_include(<android/app/Activity.h>)
#include <android/app/Activity.h>
#endif
#if __has_include(<android/content/Context.h>)
#include <android/content/Context.h>
#endif
#if __has_include(<android/content/Intent.h>)
#include <android/content/Intent.h>
#endif
#if __has_include(<org/allbinary/android/AndroidServicesUtil.h>)
#include <org/allbinary/android/AndroidServicesUtil.h>
#endif
#if __has_include(<org/allbinary/data/resource/ResourceUtil.h>)
#include <org/allbinary/data/resource/ResourceUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/PreLogUtil.h>)
#include <org/allbinary/logic/communication/log/PreLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/media/audio/NoSound.h>)
#include <org/allbinary/media/audio/NoSound.h>
#endif
#if __has_include(<org/allbinary/media/audio/Sound.h>)
#include <org/allbinary/media/audio/Sound.h>
#endif
#if __has_include(<org/allbinary/string/CommonStateStrings.h>)
#include <org/allbinary/string/CommonStateStrings.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/time/GameTickTimeDelayHelper.h>)
#include <org/allbinary/time/GameTickTimeDelayHelper.h>
#endif
#if __has_include(<org/allbinary/time/GameTickTimeDelayHelperFactory.h>)
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>
#endif
#if __has_include(<org/allbinary/time/TimeDelayHelper.h>)
#include <org/allbinary/time/TimeDelayHelper.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListUtil.h>)
#include <org/allbinary/util/BasicArrayListUtil.h>
#endif
#if __has_include("org/allbinary/media/audio/music/MusicStrings.h")
#include "org/allbinary/media/audio/music/MusicStrings.h"
#endif

        #endif
    
