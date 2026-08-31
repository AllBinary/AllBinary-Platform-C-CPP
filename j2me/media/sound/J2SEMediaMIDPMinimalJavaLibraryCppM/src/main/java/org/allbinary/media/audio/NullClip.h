
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

            #include "../../../../java/lang/Object.h"
        
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
        

    public static const NULL_CONTROL: NullJ2SEControl = new NullJ2SEControl(BooleanControl.Type.MUTE);

                //@Throws(LineUnavailableException.constructor)
            
    public open(AudioFormat format, std::vector<int8_t> data, int32_t offset, int32_t bufferSize);

                //@Throws(LineUnavailableException.constructor, IOException.constructor)
            
    public open(AudioInputStream stream);

    public int32_t getFrameLength();

    public int64_t getMicrosecondLength();

    public setFramePosition(int32_t frames);

    public setMicrosecondPosition(int64_t microseconds);

    public setLoopPoints(int32_t start, int32_t end);

    public loop(int32_t count);

    public drain();

    public flush();

    public start();

    public stop();

    public bool isRunning();

    public bool isActive();

    public AudioFormat getFormat();

    public int32_t getBufferSize();

    public int32_t available();

    public int32_t getFramePosition();

    public int64_t getLongFramePosition();

    public int64_t getMicrosecondPosition();

    public float getLevel();

    public Info getLineInfo();

                //@Throws(LineUnavailableException.constructor)
            
    public open();

    public close();

    public bool isOpen();

    public std::vector<Control> getControls();

    public bool isControlSupported(Type control);

    public Control getControl(Type control);

    public addLineListener(LineListener listener);

    public removeLineListener(LineListener listener);

};

            


        #endif //ORG_ALLBINARY_MEDIA_AUDIO_NULLCLIP_H
