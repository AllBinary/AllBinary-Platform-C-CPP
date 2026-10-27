
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
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_PCCLIPWAVPLAYER_CPP
        #define ORG_ALLBINARY_MEDIA_AUDIO_PCCLIPWAVPLAYER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/audio/PCClipWavPlayer.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
            #include "java/lang/IllegalArgumentException.h"
        
            #include "java/lang/Math.h"
        
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
        #include "org/allbinary/media/audio/BasicPlayer.h"
#include "org/allbinary/media/audio/NullAudioFormat.h"
#include "org/allbinary/media/audio/NullClip.h"
#include "org/allbinary/media/audio/NullControl.h"


PCClipWavPlayer::PCClipWavPlayer(InputStream* inputStream) : logUtil(LogUtil::getInstance()){

    AudioInputStream* audioInputStream = new AudioInputStream(new ByteArrayInputStream(NullUtil::getInstance()->NULL_BYTE_ARRAY), NullAudioFormat::NULL_AUDIO_FORMAT, 0);;
    

    Clip* clip = new NullClip();;
    

        try {
            audioInputStream= AudioSystem::getAudioInputStream(inputStream);
    
clip= this->create(audioInputStream);
    

                        if(clip == 
                                    nullptr
                                )
                        
                                    {
                                    this->logUtil->put("Clip was null", this, this->commonStrings->CONSTRUCTOR, new Exception());
    



                            throw RuntimeException();
                    

                                    }
                                

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->CONSTRUCTOR, &e);
    
}

this->audioInputStream= audioInputStream;
    
this->clip= clip;
    
}


    auto PCClipWavPlayer::close() -> void{
MusicThreadPool::getInstance()->runTask(class extends ARunnable
                                {
                                
    public: void run(){

        try {
            close2();
    

                //: 
} catch(Exception& e) 
            {
PreLogUtil::putOE(commonStrings.EXCEPTION, this, commonStrings.PROCESS, &e);
    
}

}

                                }
                            );
    
}


                //@Throws(Exception.constructor)
            
    auto PCClipWavPlayer::close2() -> void{
this->clip->drain();
    
this->clip->flush();
    
this->clip->close();
    
}


    auto PCClipWavPlayer::getContentType() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil::getInstance()->EMPTY_STRING;
    
}


                //@Throws(MediaException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto PCClipWavPlayer::start() -> void{
MusicThreadPool::getInstance()->runTask(class extends ARunnable
                                {
                                
    public: void run(){

        try {
            start2();
    

                //: 
} catch(Exception& e) 
            {
PreLogUtil::putOE(commonStrings.EXCEPTION, this, commonStrings.PROCESS, &e);
    
}

}

                                }
                            );
    
}


                //@Throws(Exception.constructor)
            
    auto PCClipWavPlayer::start2() -> void{
this->clip->setFramePosition(0);
    
this->clip->loop(this->getLoopCount());
    
this->clip->start();
    
BasicPlayer::start();
    
}


                //@Throws(Exception.constructor)
            
    auto PCClipWavPlayer::create(AudioInputStream* audioInputStream) -> Clip*{

    Clip* clip = AudioSystem::getClip();;
    
clip->addLineListener(this);
    
clip->open(audioInputStream);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return clip;
    
}


                //@Throws(MediaException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto PCClipWavPlayer::stop() -> void{
MusicThreadPool::getInstance()->runTask(class extends ARunnable
                                {
                                
    public: void run(){

        try {
            stop2();
    

                //: 
} catch(Exception& e) 
            {
PreLogUtil::putOE(commonStrings.EXCEPTION, this, commonStrings.PROCESS, &e);
    
}

}

                                }
                            );
    
}


                //@Throws(Exception.constructor)
            
    auto PCClipWavPlayer::stop2() -> void{
this->clip->stop();
    
BasicPlayer::stop();
    
}


    auto PCClipWavPlayer::getControl(std::string controlType) -> Control*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new NullControl();
    
}


    auto PCClipWavPlayer::getControls() -> std::vector<Control*>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return {};
    
}


    auto PCClipWavPlayer::setVolume(int32_t leftVolume, int32_t rightVolume) -> void{
this->setVolumeF((leftVolume) /100.0);
    
}


    auto PCClipWavPlayer::getVolume() -> float{

    FloatControl* masterGainFloatControl = dynamic_cast<FloatControl*>(clip->getControl(FloatControl::Type->MASTER_GAIN));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Math::pow(10, masterGainFloatControl->getValue() /20);
    
}


    auto PCClipWavPlayer::setVolumeF(float volume) -> void{

                        if(volume < 0 || volume > 1)
                        
                                    {
                                    


                            throw IllegalArgumentException(JavaString::valueOf("Volume: ") +JavaString::valueOf(volume));
                    

                                    }
                                

    FloatControl* masterGainFloatControl = dynamic_cast<FloatControl*>(this->clip->getControl(FloatControl::Type->MASTER_GAIN));;
    
masterGainFloatControl->setValue(20 *Math::log10(volume));
    
}


    auto PCClipWavPlayer::getDuration() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->clip->getMicrosecondLength() /1000;
    
}


    auto PCClipWavPlayer::update(LineEvent* event) -> void{

                        if(event->getType()->equals(LineEvent::Type->STOP))
                        
                                    {
                                    
    int32_t size = this->listenersList->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    PlayerListener* listener = dynamic_cast<PlayerListener*>(this->listenersList->get(size));;
    
listener->playerUpdate(this, PlayerListener::END_OF_MEDIA, 
                            nullptr);
    
}


                                    }
                                
}




        #endif //ORG_ALLBINARY_MEDIA_AUDIO_PCCLIPWAVPLAYER_CPP
