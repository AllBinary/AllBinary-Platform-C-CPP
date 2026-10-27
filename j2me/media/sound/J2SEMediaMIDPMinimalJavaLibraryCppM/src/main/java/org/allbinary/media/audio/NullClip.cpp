
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
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_NULLCLIP_CPP
        #define ORG_ALLBINARY_MEDIA_AUDIO_NULLCLIP_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/audio/NullClip.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
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
        #include "org/allbinary/media/audio/NullJ2SEControl.h"
#include "org/allbinary/media/audio/NullAudioFormat.h"


NullClip::NullClip() {
        }
        auto NullClip::NULL_CONTROL_owner() -> NullJ2SEControl* { static std::unique_ptr<NullJ2SEControl> value(new NullJ2SEControl(BooleanControl::Type->MUTE)); return value.get(); }
NullJ2SEControl* NullClip::NULL_CONTROL = NullClip::NULL_CONTROL_owner();

                //@Throws(LineUnavailableException.constructor)
            
    auto NullClip::open(AudioFormat* format, std::vector<int8_t> data, int32_t offset, int32_t bufferSize) -> void{
}


                //@Throws(LineUnavailableException.constructor, IOException.constructor)
            
    auto NullClip::open(AudioInputStream* stream) -> void{
}


    auto NullClip::getFrameLength() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    auto NullClip::getMicrosecondLength() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    auto NullClip::setFramePosition(int32_t frames) -> void{
}


    auto NullClip::setMicrosecondPosition(int64_t microseconds) -> void{
}


    auto NullClip::setLoopPoints(int32_t start, int32_t end) -> void{
}


    auto NullClip::loop(int32_t count) -> void{
}


    auto NullClip::drain() -> void{
}


    auto NullClip::flush() -> void{
}


    auto NullClip::start() -> void{
}


    auto NullClip::stop() -> void{
}


    auto NullClip::isRunning() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto NullClip::isActive() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto NullClip::getFormat() -> AudioFormat*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullAudioFormat::NULL_AUDIO_FORMAT;
    
}


    auto NullClip::getBufferSize() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    auto NullClip::available() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    auto NullClip::getFramePosition() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    auto NullClip::getLongFramePosition() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    auto NullClip::getMicrosecondPosition() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    auto NullClip::getLevel() -> float{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0.0;
    
}


    auto NullClip::getLineInfo() -> Info*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new Info(this->getClass(), NullAudioFormat::NULL_AUDIO_FORMAT);
    
}


                //@Throws(LineUnavailableException.constructor)
            
    auto NullClip::open() -> void{
}


    auto NullClip::close() -> void{
}


    auto NullClip::isOpen() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto NullClip::getControls() -> std::vector<Control*>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return {};
    
}


    auto NullClip::isControlSupported(Type* control) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto NullClip::getControl(Type* control) -> Control*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullClip::NULL_CONTROL;
    
}


    auto NullClip::addLineListener(LineListener* listener) -> void{
}


    auto NullClip::removeLineListener(LineListener* listener) -> void{
}




        #endif //ORG_ALLBINARY_MEDIA_AUDIO_NULLCLIP_CPP
