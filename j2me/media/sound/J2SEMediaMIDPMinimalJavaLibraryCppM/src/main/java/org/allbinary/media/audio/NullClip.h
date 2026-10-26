
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_NULLCLIP_H
        #define ORG_ALLBINARY_MEDIA_AUDIO_NULLCLIP_H

            #include <vector>
        
            #include "java/lang/Object.h"
        
#include <java/io/IOException.h>

      
#include <javax/sound/sampled/AudioFormat.h>

      
#include <javax/sound/sampled/AudioInputStream.h>

      
#include <javax/sound/sampled/BooleanControl.h>

      
#include <javax/sound/sampled/Clip.h>

      
#include <javax/sound/sampled/Control.h>

      
#include <javax/sound/sampled/Control/Type.h>

      
#include <javax/sound/sampled/Line/Info.h>

      
#include <javax/sound/sampled/LineListener.h>

      
#include <javax/sound/sampled/LineUnavailableException.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "NullJ2SEControl.h"
#include "NullAudioFormat.h"

class NullClip
            : public Object
        : public Clip {

    public: static const NullJ2SEControl NULL_CONTROL = NullJ2SEControl(BooleanControl::Type.MUTE);

                //@Throws(LineUnavailableException.constructor)
            
    public: void open(AudioFormat format, std::vector<int8_t> data, int32_t offset, int32_t bufferSize);

                //@Throws(LineUnavailableException.constructor, IOException.constructor)
            
    public: void open(AudioInputStream stream);

    public: int32_t getFrameLength();

    public: int64_t getMicrosecondLength();

    public: void setFramePosition(int32_t frames);

    public: void setMicrosecondPosition(int64_t microseconds);

    public: void setLoopPoints(int32_t start, int32_t end);

    public: void loop(int32_t count);

    public: void drain();

    public: void flush();

    public: void start();

    public: void stop();

    public: bool isRunning();

    public: bool isActive();

    public: AudioFormat getFormat();

    public: int32_t getBufferSize();

    public: int32_t available();

    public: int32_t getFramePosition();

    public: int64_t getLongFramePosition();

    public: int64_t getMicrosecondPosition();

    public: float getLevel();

    public: Info getLineInfo();

                //@Throws(LineUnavailableException.constructor)
            
    public: void open();

    public: void close();

    public: bool isOpen();

    public: std::vector<Control> getControls();

    public: bool isControlSupported(Type control);

    public: Control getControl(Type control);

    public: void addLineListener(LineListener listener);

    public: void removeLineListener(LineListener listener);

};

            


        #endif //ORG_ALLBINARY_MEDIA_AUDIO_NULLCLIP_H
