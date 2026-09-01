
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_MUSIC_MUSICMANAGER_H
        #define ORG_ALLBINARY_MEDIA_AUDIO_MUSIC_MUSICMANAGER_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Class.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <android/app/Activity.h>

      
#include <android/content/Context.h>

      
#include <android/content/Intent.h>

      
#include <org/allbinary/android/AndroidServicesUtil.h>

      
#include <org/allbinary/data/resource/ResourceUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/media/audio/NoSound.h>

      
#include <org/allbinary/media/audio/Sound.h>

      
#include <org/allbinary/string/CommonStateStrings.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelper.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MusicStrings.h"

class MusicManager
            : public Object
         {

    public: static void pause(Activity activity, Function musicServiceClass);

    public: static void resume(Activity activity, Function musicServiceClass);

    private: const std::string PLAY = "Play ";

    private: const std::string FOR = " for: ";

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const MusicStrings musicStrings = MusicStrings::getInstance();

    private: const CommonStateStrings commonStateStrings = CommonStateStrings::getInstance();

    private: const BasicArrayListUtil basicArrayListUtil = BasicArrayListUtil::getInstance();

    private: const ResourceUtil resourceUtil = ResourceUtil::getInstance();

    private: const AndroidServicesUtil androidServicesUtil = AndroidServicesUtil::getInstance();

    private: const GameTickTimeDelayHelper gameTickTimeDelayHelper = GameTickTimeDelayHelperFactory::getInstance();

    private: const TimeDelayHelper timeDelayHelper = TimeDelayHelper(0);

    private: const TimeDelayHelper timeDelayHelper2 = TimeDelayHelper(1200);

    private: BasicArrayList songList;

    private: Sound currentSongSound = NoSound::getInstance();

    private: Sound nextSongSound = NoSound::getInstance();

    private: int32_t leftVolume = 100;

    private: int32_t rightVolume = 100;

    private: Function musicServiceClass;

    private: Intent currentIntent;

public: MusicManager(Function musicServiceClass, BasicArrayList songList);

    public: void nextSong(Sound nextSongSound, int32_t leftVolume, int32_t rightVolume);

    public: void reset();

    public: void process();

    public: void show();

    public: void startNewSong();

                //@Throws(Exception.constructor)
            
    public: void stop();

};

            


        #endif //ORG_ALLBINARY_MEDIA_AUDIO_MUSIC_MUSICMANAGER_H
