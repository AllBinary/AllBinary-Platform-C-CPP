
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

            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/RuntimeException.h"
        
#include <javax/microedition/media/MediaException.h>

      
#include <javax/microedition/media/Player.h>

      
#include <javax/microedition/media/PlayerListener.h>

      
#include <android/media/MediaPlayer.h>

      
#include <org/allbinary/android/NullAndroidCanvas.h>

      
#include <org/allbinary/data/resource/ResourceUtil.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicPlayer.h"

class AndroidMediaPlayerWrapper: public BasicPlayer {
        

    public static AndroidMediaPlayerWrapper createPlayerWrapper();

    public static const NULL_ANDROID_MEDIA_PLAYER_WRAPPER: AndroidMediaPlayerWrapper = AndroidMediaPlayerWrapper.createPlayerWrapper()!;

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: mediaPlayer: MediaPlayer = NullAndroidCanvas.NULL_MEDIA_PLAYER;

public constructor (string resource);

    public setLoopCount(int32_t count);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public addPlayerListener(PlayerListener playerListener);

    public removePlayerListener(PlayerListener playerListener);

    public int32_t getState();

    public close();

                //@Throws(MediaException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public start();

                //@Throws(MediaException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public stop();

    public update(string event);

    public setVolume(int32_t leftVolume, int32_t rightVolume);

    public int64_t getDuration();

    public setMediaPlayer(MediaPlayer mediaPlayer);

    public MediaPlayer getMediaPlayer();

};

            


        #endif //ORG_ALLBINARY_MEDIA_AUDIO_ANDROIDMEDIAPLAYERWRAPPER_H
