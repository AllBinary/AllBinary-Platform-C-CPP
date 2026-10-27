
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
            #include "java/lang/IllegalArgumentException.h"
        
            #include "java/lang/Math.h"
        
class ARunnable;
#include <java/io/ByteArrayInputStream.h>
#include <java/io/InputStream.h>
class Control;
class MediaException;
class PlayerListener;
class AudioInputStream;
class AudioSystem;
class Clip;
class FloatControl;
class LineEvent;
#include <javax/sound/sampled/LineListener.h>
class NullUtil;
class LogUtil;
class PreLogUtil;
class StringUtil;
class MusicThreadPool;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/audio/BasicPlayer.h"
class NullAudioFormat;
class NullClip;
class NullControl;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PCClipWavPlayer: public BasicPlayer, public LineListener {

    /*protected*/ public: LogUtil* logUtil;

    private: AudioInputStream* audioInputStream;

    private: Clip* clip;

public: PCClipWavPlayer(InputStream* inputStream);

    public: void close();

                //@Throws(Exception.constructor)
            
    private: void close2();

    public: std::string getContentType();

                //@Throws(MediaException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void start();

                //@Throws(Exception.constructor)
            
    private: void start2();

                //@Throws(Exception.constructor)
            
    private: Clip* create(AudioInputStream* audioInputStream);

                //@Throws(MediaException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void stop();

                //@Throws(Exception.constructor)
            
    private: void stop2();

    public: Control* getControl(std::string controlType);

    public: std::vector<Control*> getControls();

    public: void setVolume(int32_t leftVolume, int32_t rightVolume);

    private: float getVolume();

    private: void setVolumeF(float volume);

    public: int64_t getDuration();

    public: void update(LineEvent* event);

};

            


        #endif //ORG_ALLBINARY_MEDIA_AUDIO_PCCLIPWAVPLAYER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_AUDIO_PCCLIPWAVPLAYER_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_AUDIO_PCCLIPWAVPLAYER_H_COMPLETE
        #if __has_include(<org/allbinary/thread/ARunnable.h>)
#include <org/allbinary/thread/ARunnable.h>
#endif
#if __has_include(<java/io/ByteArrayInputStream.h>)
#include <java/io/ByteArrayInputStream.h>
#endif
#if __has_include(<java/io/InputStream.h>)
#include <java/io/InputStream.h>
#endif
#if __has_include(<javax/microedition/media/Control.h>)
#include <javax/microedition/media/Control.h>
#endif
#if __has_include(<javax/microedition/media/MediaException.h>)
#include <javax/microedition/media/MediaException.h>
#endif
#if __has_include(<javax/microedition/media/PlayerListener.h>)
#include <javax/microedition/media/PlayerListener.h>
#endif
#if __has_include(<javax/sound/sampled/AudioInputStream.h>)
#include <javax/sound/sampled/AudioInputStream.h>
#endif
#if __has_include(<javax/sound/sampled/AudioSystem.h>)
#include <javax/sound/sampled/AudioSystem.h>
#endif
#if __has_include(<javax/sound/sampled/Clip.h>)
#include <javax/sound/sampled/Clip.h>
#endif
#if __has_include(<javax/sound/sampled/FloatControl.h>)
#include <javax/sound/sampled/FloatControl.h>
#endif
#if __has_include(<javax/sound/sampled/LineEvent.h>)
#include <javax/sound/sampled/LineEvent.h>
#endif
#if __has_include(<javax/sound/sampled/LineListener.h>)
#include <javax/sound/sampled/LineListener.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/PreLogUtil.h>)
#include <org/allbinary/logic/communication/log/PreLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/thread/MusicThreadPool.h>)
#include <org/allbinary/thread/MusicThreadPool.h>
#endif
#if __has_include("org/allbinary/media/audio/BasicPlayer.h")
#include "org/allbinary/media/audio/BasicPlayer.h"
#endif
#if __has_include("org/allbinary/media/audio/NullAudioFormat.h")
#include "org/allbinary/media/audio/NullAudioFormat.h"
#endif
#if __has_include("org/allbinary/media/audio/NullClip.h")
#include "org/allbinary/media/audio/NullClip.h"
#endif
#if __has_include("org/allbinary/media/audio/NullControl.h")
#include "org/allbinary/media/audio/NullControl.h"
#endif

        #endif
    
