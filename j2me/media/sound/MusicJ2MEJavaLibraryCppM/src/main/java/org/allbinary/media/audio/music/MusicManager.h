
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
        
            #include "java/lang/Thread.h"
        

class Player;
#include <javax/microedition/media/PlayerListener.h>
class AvianUtil;
class PreLogUtil;
class StringMaker;
class StringUtil;
class NoSound;
class PlayerStateUtil;
class Sound;
class CommonLabels;
class CommonSeps;
class CommonStrings;
class GameTickTimeDelayHelper;
class GameTickTimeDelayHelperFactory;
class TimeDelayHelper;
class BasicArrayList;
class BasicArrayListUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //class MusicManagerPlayerListener;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MusicManager
            : public virtual Object
         {
private: class MusicManagerPlayerListener;

    private: CommonStrings* commonStrings;

    private: CommonSeps* commonSeps;

    private: BasicArrayListUtil* basicArrayListUtil;

    private: GameTickTimeDelayHelper* gameTickTimeDelayHelper;

    private: PlayerStateUtil* playerStateUtil;

    private: TimeDelayHelper* timeDelayHelper;
//Handle Media ending for Avian
//inner= member=true isStatic=
private: class MusicManagerPlayerListener
            : public virtual Object
        , public PlayerListener {

    public: MusicManager* outer = nullptr;


            
    public: MusicManagerPlayerListener();
        
    public: void playerUpdate(Player* player, std::string event, Object* eventData);
    public: void playerUpdate(Player* player, std::string event, const std::string& eventData) { return playerUpdate(player, event, JavaString::box(eventData)); }

};

            
    private: PlayerListener* playerListener;

    private: const std::string PLAY = "Play ";

    private: const std::string SONG = " for: ";

    private: const std::string NEXT_SONG;

    private: const std::string STOPPING = "Stopping Current Song: ";

    private: const std::string ENDING = "Ending Current Song: ";

    private: const std::string WAITING_FOR_MEDIA_TO_END = "Waiting for media to end";

    private: const std::string ALREADY_PLAYING = "Already Playing: ";

    private: const std::string ALREADY_ENDED = "Last Song already ended: ";

    private: BasicArrayList* songList;

    private: Sound* currentSongSound;

    private: Sound* nextSongSound;

    private: bool reset_= false;

    private: bool noDuration= false;

    private: bool stopped = true;

public: MusicManager(Class* musicServiceClass, BasicArrayList* songList);

    public: void startNewSong();

    public: void nextSong(Sound* nextSongSound, int32_t leftVolume, int32_t rightVolume);

    public: void reset();

    public: void process();

                //@Throws(Exception.constructor)
            
    private: void waitForStateChange(Sound* endingCurrentSongSound, Sound* startingCurrentSongSound);

                //@Throws(Exception.constructor)
            
    public: void stop();

};

            


        #endif //ORG_ALLBINARY_MEDIA_AUDIO_MUSIC_MUSICMANAGER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_AUDIO_MUSIC_MUSICMANAGER_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_AUDIO_MUSIC_MUSICMANAGER_H_COMPLETE
        
#if __has_include(<javax/microedition/media/Player.h>)
#include <javax/microedition/media/Player.h>
#endif
#if __has_include(<javax/microedition/media/PlayerListener.h>)
#include <javax/microedition/media/PlayerListener.h>
#endif
#if __has_include(<org/allbinary/AvianUtil.h>)
#include <org/allbinary/AvianUtil.h>
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
#if __has_include(<org/allbinary/media/audio/PlayerStateUtil.h>)
#include <org/allbinary/media/audio/PlayerStateUtil.h>
#endif
#if __has_include(<org/allbinary/media/audio/Sound.h>)
#include <org/allbinary/media/audio/Sound.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
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

        #endif
    
