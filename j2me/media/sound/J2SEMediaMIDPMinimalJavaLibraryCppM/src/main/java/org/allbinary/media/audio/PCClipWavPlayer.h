
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
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_PCCLIPWAVPLAYER_H
        #define ORG_ALLBINARY_MEDIA_AUDIO_PCCLIPWAVPLAYER_H

            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/RuntimeException.h"
        
            #include "../../../../java/lang/IllegalArgumentException.h"
        
            #include "../../../../java/lang/Math.h"
        
#include <org/allbinary/thread/ARunnable.h>

      
#include <java/io/ByteArrayInputStream.h>

      
#include <java/io/InputStream.h>

      
#include <javax/microedition/media/Control.h>

      
#include <javax/microedition/media/MediaException.h>

      
#include <javax/microedition/media/PlayerListener.h>

      
#include <javax/sound/sampled/AudioInputStream.h>

      
#include <javax/sound/sampled/AudioSystem.h>

      
#include <javax/sound/sampled/Clip.h>

      
#include <javax/sound/sampled/FloatControl.h>

      
#include <javax/sound/sampled/LineEvent.h>

      
#include <javax/sound/sampled/LineListener.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/thread/MusicThreadPool.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicPlayer.h"
#include "NullAudioFormat.h"
#include "NullClip.h"
#include "NullControl.h"

class PCClipWavPlayer: public BasicPlayer: public LineListener {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const audioInputStream: AudioInputStream;

    private: const clip: Clip;

public constructor (InputStream inputStream);

    public close();

                //@Throws(Exception.constructor)
            
    close2();

    public string getContentType();

                //@Throws(MediaException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public start();

                //@Throws(Exception.constructor)
            
    start2();

                //@Throws(Exception.constructor)
            
    Clip create(AudioInputStream audioInputStream);

                //@Throws(MediaException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public stop();

                //@Throws(Exception.constructor)
            
    stop2();

    public Control getControl(string controlType);

    public std::vector<Control> getControls();

    public setVolume(int32_t leftVolume, int32_t rightVolume);

    float getVolume();

    setVolumeF(float volume);

    public int64_t getDuration();

    public update(LineEvent event);

};

            


        #endif //ORG_ALLBINARY_MEDIA_AUDIO_PCCLIPWAVPLAYER_H
