
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_MUSIC_MUSICMANAGER_H
        #define ORG_ALLBINARY_MEDIA_AUDIO_MUSIC_MUSICMANAGER_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Class.h"
        
            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/Thread.h"
        
#include <org/allbinary/thread/ARunnable.h>

      
#include <javax/microedition/media/Player.h>

      
#include <javax/microedition/media/PlayerListener.h>

      
#include <org/allbinary/AvianUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/media/audio/NoSound.h>

      
#include <org/allbinary/media/audio/PlayerStateUtil.h>

      
#include <org/allbinary/media/audio/Sound.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelper.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class MusicManager
            : public Object
         {
        

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const commonSeps: CommonSeps = CommonSeps.getInstance()!;

    private: const basicArrayListUtil: BasicArrayListUtil = BasicArrayListUtil.getInstance()!;

    private: const gameTickTimeDelayHelper: GameTickTimeDelayHelper = GameTickTimeDelayHelperFactory.getInstance()!;

    private: const playerStateUtil: PlayerStateUtil = PlayerStateUtil.getInstance()!;

    private: const timeDelayHelper: TimeDelayHelper = new TimeDelayHelper(0);

    private: const playerListener: PlayerListener = new class extends PlayerListener
                                {
                                
    public playerUpdate(Player player, string event, any = {} eventData);
                                }
                            ;

    private: const PLAY: string = "Play ";

    private: const SONG: string = " for: ";

    private: const NEXT_SONG: string = "Next Song: ";

    private: const STOPPING: string = "Stopping Current Song: ";

    private: const ENDING: string = "Ending Current Song: ";

    private: const WAITING_FOR_MEDIA_TO_END: string = "Waiting for media to end";

    private: const ALREADY_PLAYING: string = "Already Playing: ";

    private: const ALREADY_ENDED: string = "Last Song already ended: ";

    private: const songList: BasicArrayList;

    private: currentSongSound: Sound = NoSound.getInstance()!;

    private: nextSongSound: Sound = NoSound.getInstance()!;

    private: reset: bool= false;

    private: noDuration: bool= false;

    private: stopped: bool = true;

public constructor (Function musicServiceClass, BasicArrayList songList);

    public startNewSong();

    public nextSong(Sound nextSongSound, int32_t leftVolume, int32_t rightVolume);

    public reset();

    public process();

                //@Throws(Exception.constructor)
            
    waitForStateChange(Sound endingCurrentSongSound, Sound startingCurrentSongSound);

                //@Throws(Exception.constructor)
            
    public stop();

};

            


        #endif //ORG_ALLBINARY_MEDIA_AUDIO_MUSIC_MUSICMANAGER_H
