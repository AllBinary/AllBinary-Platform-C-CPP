
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_PLAYERCOMPOSITE_H
        #define ORG_ALLBINARY_MEDIA_AUDIO_PLAYERCOMPOSITE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
class Control;
#include <javax/microedition/media/Controllable.h>
#include <javax/microedition/media/Player.h>
class PlayerListener;
class LogUtil;
class CommonStrings;
class GameTickTimeDelayHelper;
class GameTickTimeDelayHelperFactory;
class TimeDelayHelper;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class Controllable2;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //BasicPlayer
class PlayerComposite
            : public virtual Object
        , public Controllable, public Player {

    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    private: Player* player;

    private: TimeDelayHelper* timeElapsedHelper;

public: PlayerComposite(Player* player, int32_t repeatTime);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void addPlayerListener(PlayerListener* playerListener);

    public: void removePlayerListener(PlayerListener* playerListener);

    public: void close();

    public: void deallocate();

    public: std::string getContentType();

    public: int64_t getDuration();

    public: int64_t getMediaTime();

    public: void prefetch();

    public: void realize();

    public: int32_t getState();

    public: void setLoopCount(int32_t count);

    public: int64_t setMediaTime(int64_t now);

    private: GameTickTimeDelayHelper* gameTickTimeDelayHelper;

    public: void start();

    public: void stop();

    public: Control* getControl(std::string controlType);

    public: std::vector<Control*> getControls();

    public: void setVolume(int32_t leftVolume, int32_t rightVolume);

    public: Player* getPlayerP();

};

            


        #endif //ORG_ALLBINARY_MEDIA_AUDIO_PLAYERCOMPOSITE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_AUDIO_PLAYERCOMPOSITE_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_AUDIO_PLAYERCOMPOSITE_H_COMPLETE
        #if __has_include(<javax/microedition/media/Control.h>)
#include <javax/microedition/media/Control.h>
#endif
#if __has_include(<javax/microedition/media/Controllable.h>)
#include <javax/microedition/media/Controllable.h>
#endif
#if __has_include(<javax/microedition/media/Player.h>)
#include <javax/microedition/media/Player.h>
#endif
#if __has_include(<javax/microedition/media/PlayerListener.h>)
#include <javax/microedition/media/PlayerListener.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
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
#if __has_include("org/allbinary/media/audio/Controllable2.h")
#include "org/allbinary/media/audio/Controllable2.h"
#endif

        #endif
    
