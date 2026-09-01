
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

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const CommonSeps commonSeps = CommonSeps::getInstance();

    private: const BasicArrayListUtil basicArrayListUtil = BasicArrayListUtil::getInstance();

    private: const GameTickTimeDelayHelper gameTickTimeDelayHelper = GameTickTimeDelayHelperFactory::getInstance();

    private: const PlayerStateUtil playerStateUtil = PlayerStateUtil::getInstance();

    private: const TimeDelayHelper timeDelayHelper = TimeDelayHelper(0);

    private: const PlayerListener playerListener = class extends PlayerListener
                                {
                                
    public: void playerUpdate(Player player, std::string event, Object* eventData);
                                }
                            ;

    private: const std::string PLAY = "Play ";

    private: const std::string SONG = " for: ";

    private: const std::string NEXT_SONG = "Next Song: ";

    private: const std::string STOPPING = "Stopping Current Song: ";

    private: const std::string ENDING = "Ending Current Song: ";

    private: const std::string WAITING_FOR_MEDIA_TO_END = "Waiting for media to end";

    private: const std::string ALREADY_PLAYING = "Already Playing: ";

    private: const std::string ALREADY_ENDED = "Last Song already ended: ";

    private: BasicArrayList songList;

    private: Sound currentSongSound = NoSound::getInstance();

    private: Sound nextSongSound = NoSound::getInstance();

    private: bool reset= false;

    private: bool noDuration= false;

    private: bool stopped = true;

public: MusicManager(Function musicServiceClass, BasicArrayList songList);

    public: void startNewSong();

    public: void nextSong(Sound nextSongSound, int32_t leftVolume, int32_t rightVolume);

    public: void reset();

    public: void process();

                //@Throws(Exception.constructor)
            
    private: void waitForStateChange(Sound endingCurrentSongSound, Sound startingCurrentSongSound);

                //@Throws(Exception.constructor)
            
    public: void stop();

};

            


        #endif //ORG_ALLBINARY_MEDIA_AUDIO_MUSIC_MUSICMANAGER_H
