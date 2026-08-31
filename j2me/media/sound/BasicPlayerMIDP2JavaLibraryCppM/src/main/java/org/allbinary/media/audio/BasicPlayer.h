
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

            #include "../../../../java/lang/Object.h"
        
#include <javax/microedition/media/Control.h>

      
#include <javax/microedition/media/MediaException.h>

      
#include <javax/microedition/media/Player.h>

      
#include <javax/microedition/media/PlayerListener.h>

      
#include <javax/microedition/media/TimeBase.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TimeBaseInterface.h"
#include "Controllable2.h"
#include "NullControl.h"
//BasicPlayerMIDP2JavaLibrary
class BasicPlayer
            : public Object
        : public Player, public TimeBaseInterface, public Controllable2 {
        

    public static CONTROL_TYPE: string = "ToneControl";

    const listenersList: BasicArrayList = new BasicArrayListD();

    private: timeBase: TimeBase;

    stateP: int32_t= 0;

    loopCountP: int32_t= 0;

public constructor ();

    public string getContentType();

    public Control getControl(string controlType);

    public std::vector<Control> getControls();

    public close();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public addPlayerListener(PlayerListener playerListener);

    public removePlayerListener(PlayerListener playerListener);

    public int32_t getState();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public setState(int32_t state);

    public int64_t getDuration();

    public int64_t getMediaTime();

    public TimeBase getTimeBase();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public setTimeBase(TimeBase timeBase);

    public deallocate();

                //@Throws(MediaException.constructor)
            
    public prefetch();

                //@Throws(MediaException.constructor)
            
    public realize();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public setLoopCount(int32_t count);

    int32_t getLoopCount();

                //@Throws(MediaException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public int64_t setMediaTime(int64_t now);

                //@Throws(MediaException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public start();

                //@Throws(MediaException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public stop();

    public setVolume(int32_t leftVolume, int32_t rightVolume);

};

            


        #endif //ORG_ALLBINARY_MEDIA_AUDIO_BASICPLAYER_H
