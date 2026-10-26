
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
            
    public: void open(AudioFormat format, std::vector<int8_t> data, int32_t offset, int32_t bufferSize){
}


                //@Throws(LineUnavailableException.constructor, IOException.constructor)
            
    public: void open(AudioInputStream stream){
}


    public: int32_t getFrameLength(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    public: int64_t getMicrosecondLength(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    public: void setFramePosition(int32_t frames){
}


    public: void setMicrosecondPosition(int64_t microseconds){
}


    public: void setLoopPoints(int32_t start, int32_t end){
}


    public: void loop(int32_t count){
}


    public: void drain(){
}


    public: void flush(){
}


    public: void start(){
}


    public: void stop(){
}


    public: bool isRunning(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: bool isActive(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: AudioFormat getFormat(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullAudioFormat::NULL_AUDIO_FORMAT;
    
}


    public: int32_t getBufferSize(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    public: int32_t available(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    public: int32_t getFramePosition(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    public: int64_t getLongFramePosition(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    public: int64_t getMicrosecondPosition(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    public: float getLevel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0.0;
    
}


    public: Info getLineInfo(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Info(this->getClass(), NullAudioFormat::NULL_AUDIO_FORMAT);
    
}


                //@Throws(LineUnavailableException.constructor)
            
    public: void open(){
}


    public: void close(){
}


    public: bool isOpen(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: std::vector<Control> getControls(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return {};
    
}


    public: bool isControlSupported(Type control){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: Control getControl(Type control){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullClip::NULL_CONTROL;
    
}


    public: void addLineListener(LineListener listener){
}


    public: void removeLineListener(LineListener listener){
}


};

            

