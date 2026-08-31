
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
        

    public static pause(Activity activity, Function musicServiceClass);

    public static resume(Activity activity, Function musicServiceClass);

    private: const PLAY: string = "Play ";

    private: const FOR: string = " for: ";

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const musicStrings: MusicStrings = MusicStrings.getInstance()!;

    private: const commonStateStrings: CommonStateStrings = CommonStateStrings.getInstance()!;

    private: const basicArrayListUtil: BasicArrayListUtil = BasicArrayListUtil.getInstance()!;

    private: const resourceUtil: ResourceUtil = ResourceUtil.getInstance()!;

    private: const androidServicesUtil: AndroidServicesUtil = AndroidServicesUtil.getInstance()!;

    private: const gameTickTimeDelayHelper: GameTickTimeDelayHelper = GameTickTimeDelayHelperFactory.getInstance()!;

    private: const timeDelayHelper: TimeDelayHelper = new TimeDelayHelper(0);

    private: const timeDelayHelper2: TimeDelayHelper = new TimeDelayHelper(1200);

    private: const songList: BasicArrayList;

    private: currentSongSound: Sound = NoSound.getInstance()!;

    private: nextSongSound: Sound = NoSound.getInstance()!;

    private: leftVolume: int32_t = 100;

    private: rightVolume: int32_t = 100;

    private: const musicServiceClass: Function;

    private: const currentIntent: Intent;

public constructor (Function musicServiceClass, BasicArrayList songList);

    public nextSong(Sound nextSongSound, int32_t leftVolume, int32_t rightVolume);

    public reset();

    public process();

    public show();

    public startNewSong();

                //@Throws(Exception.constructor)
            
    public stop();

};

            


        #endif //ORG_ALLBINARY_MEDIA_AUDIO_MUSIC_MUSICMANAGER_H
