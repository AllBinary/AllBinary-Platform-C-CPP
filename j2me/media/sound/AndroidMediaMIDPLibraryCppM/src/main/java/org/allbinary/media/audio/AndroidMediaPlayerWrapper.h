
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
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_ANDROIDMEDIAPLAYERWRAPPER_H
        #define ORG_ALLBINARY_MEDIA_AUDIO_ANDROIDMEDIAPLAYERWRAPPER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
class MediaException;
class Player;
class PlayerListener;
class MediaPlayer;
class NullAndroidCanvas;
class ResourceUtil;
class NullUtil;
class LogUtil;
class StringMaker;
class StringUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/audio/BasicPlayer.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AndroidMediaPlayerWrapper: public BasicPlayer {

    public: static AndroidMediaPlayerWrapper* createPlayerWrapper();

    public: static AndroidMediaPlayerWrapper* NULL_ANDROID_MEDIA_PLAYER_WRAPPER;

    /*protected*/ public: LogUtil* logUtil;

    private: MediaPlayer* mediaPlayer;

public: AndroidMediaPlayerWrapper(std::string resource);

    public: void setLoopCount(int32_t count);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void addPlayerListener(PlayerListener* playerListener);

    public: void removePlayerListener(PlayerListener* playerListener);

    public: int32_t getState();

    public: void close();

                //@Throws(MediaException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void start();

                //@Throws(MediaException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void stop();

    public: void update(std::string event);

    public: void setVolume(int32_t leftVolume, int32_t rightVolume);

    public: int64_t getDuration();

    public: void setMediaPlayer(MediaPlayer* mediaPlayer);

    public: MediaPlayer* getMediaPlayer();

};

            


        #endif //ORG_ALLBINARY_MEDIA_AUDIO_ANDROIDMEDIAPLAYERWRAPPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_AUDIO_ANDROIDMEDIAPLAYERWRAPPER_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_AUDIO_ANDROIDMEDIAPLAYERWRAPPER_H_COMPLETE
        #if __has_include(<javax/microedition/media/MediaException.h>)
#include <javax/microedition/media/MediaException.h>
#endif
#if __has_include(<javax/microedition/media/Player.h>)
#include <javax/microedition/media/Player.h>
#endif
#if __has_include(<javax/microedition/media/PlayerListener.h>)
#include <javax/microedition/media/PlayerListener.h>
#endif
#if __has_include(<android/media/MediaPlayer.h>)
#include <android/media/MediaPlayer.h>
#endif
#if __has_include(<org/allbinary/android/NullAndroidCanvas.h>)
#include <org/allbinary/android/NullAndroidCanvas.h>
#endif
#if __has_include(<org/allbinary/data/resource/ResourceUtil.h>)
#include <org/allbinary/data/resource/ResourceUtil.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include("org/allbinary/media/audio/BasicPlayer.h")
#include "org/allbinary/media/audio/BasicPlayer.h"
#endif

        #endif
    
