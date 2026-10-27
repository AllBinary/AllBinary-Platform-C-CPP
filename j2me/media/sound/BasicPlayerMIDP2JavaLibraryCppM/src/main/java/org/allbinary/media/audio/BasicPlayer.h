
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
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_BASICPLAYER_H
        #define ORG_ALLBINARY_MEDIA_AUDIO_BASICPLAYER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class Control;
class MediaException;
#include <javax/microedition/media/Player.h>
class PlayerListener;
class TimeBase;
class StringUtil;
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/audio/TimeBaseInterface.h"
#include "org/allbinary/media/audio/Controllable2.h"
class NullControl;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //BasicPlayerMIDP2JavaLibrary
class BasicPlayer
            : public virtual Object
        , public Player, public TimeBaseInterface, public Controllable2 {

    public: static inline std::string CONTROL_TYPE = "ToneControl";

    /*protected*/ public: BasicArrayList* listenersList;

    private: TimeBase* timeBase;

    /*protected*/ public: int32_t stateP= 0;

    /*protected*/ public: int32_t loopCountP= 0;

public: BasicPlayer();

    public: std::string getContentType();

    public: Control* getControl(std::string controlType);

    public: std::vector<Control*> getControls();

    public: void close();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void addPlayerListener(PlayerListener* playerListener);

    public: void removePlayerListener(PlayerListener* playerListener);

    public: int32_t getState();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void setState(int32_t state);

    public: int64_t getDuration();

    public: int64_t getMediaTime();

    public: TimeBase* getTimeBase();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void setTimeBase(TimeBase* timeBase);

    public: void deallocate();

                //@Throws(MediaException.constructor)
            
    public: void prefetch();

                //@Throws(MediaException.constructor)
            
    public: void realize();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void setLoopCount(int32_t count);

    /*protected*/ public: int32_t getLoopCount();

                //@Throws(MediaException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: int64_t setMediaTime(int64_t now);

                //@Throws(MediaException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void start();

                //@Throws(MediaException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void stop();

    public: void setVolume(int32_t leftVolume, int32_t rightVolume);

};

            


        #endif //ORG_ALLBINARY_MEDIA_AUDIO_BASICPLAYER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_AUDIO_BASICPLAYER_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_AUDIO_BASICPLAYER_H_COMPLETE
        #if __has_include(<javax/microedition/media/Control.h>)
#include <javax/microedition/media/Control.h>
#endif
#if __has_include(<javax/microedition/media/MediaException.h>)
#include <javax/microedition/media/MediaException.h>
#endif
#if __has_include(<javax/microedition/media/Player.h>)
#include <javax/microedition/media/Player.h>
#endif
#if __has_include(<javax/microedition/media/PlayerListener.h>)
#include <javax/microedition/media/PlayerListener.h>
#endif
#if __has_include(<javax/microedition/media/TimeBase.h>)
#include <javax/microedition/media/TimeBase.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include("org/allbinary/media/audio/TimeBaseInterface.h")
#include "org/allbinary/media/audio/TimeBaseInterface.h"
#endif
#if __has_include("org/allbinary/media/audio/Controllable2.h")
#include "org/allbinary/media/audio/Controllable2.h"
#endif
#if __has_include("org/allbinary/media/audio/NullControl.h")
#include "org/allbinary/media/audio/NullControl.h"
#endif

        #endif
    
