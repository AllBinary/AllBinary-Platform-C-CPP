
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
        



            #include <vector>
        
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
        #include "BasicPlayer.h"
#include "NullAudioFormat.h"
#include "NullClip.h"
#include "NullControl.h"

class PCClipWavPlayer: public BasicPlayer, public LineListener {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: AudioInputStream audioInputStream;

    private: Clip clip;

public: PCClipWavPlayer(InputStream inputStream){

    AudioInputStream audioInputStream = AudioInputStream(ByteArrayInputStream(NullUtil::getInstance().NULL_BYTE_ARRAY), NullAudioFormat::NULL_AUDIO_FORMAT, 0);;
    

    Clip clip = NullClip();;
    

        try {
            audioInputStream= AudioSystem::getAudioInputStream(inputStream);
    
clip= this->create(audioInputStream);
    

                        if(clip == 
                                    nullptr
                                )
                        
                                    {
                                    this->logUtil.put("Clip was null", this, this->commonStrings.CONSTRUCTOR, Exception());
    



                            throw RuntimeException();
                    

                                    }
                                

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->commonStrings.CONSTRUCTOR, e);
    
}

this->audioInputStream= audioInputStream;
    
this->clip= clip;
    
}


    public: void close(){
MusicThreadPool::getInstance().runTask(class extends ARunnable
                                {
                                
    public: void run(){

        try {
            close2();
    

                //: 
} catch(e) 
            {
PreLogUtil::putOE(commonStrings.EXCEPTION, this, commonStrings.PROCESS, e);
    
}

}

                                }
                            );
    
}


                //@Throws(Exception.constructor)
            
    private: void close2(){
this->clip.drain();
    
this->clip.flush();
    
this->clip.close();
    
}


    public: std::string getContentType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil::getInstance().EMPTY_STRING;
    
}


                //@Throws(MediaException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void start(){
MusicThreadPool::getInstance().runTask(class extends ARunnable
                                {
                                
    public: void run(){

        try {
            start2();
    

                //: 
} catch(e) 
            {
PreLogUtil::putOE(commonStrings.EXCEPTION, this, commonStrings.PROCESS, e);
    
}

}

                                }
                            );
    
}


                //@Throws(Exception.constructor)
            
    private: void start2(){
this->clip.setFramePosition(0);
    
this->clip.loop(this->getLoopCount());
    
this->clip.start();
    
super.start();
    
}


                //@Throws(Exception.constructor)
            
    private: Clip create(AudioInputStream audioInputStream){

    Clip clip = AudioSystem::getClip();;
    
clip.addLineListener(this);
    
clip.open(audioInputStream);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return clip;
    
}


                //@Throws(MediaException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void stop(){
MusicThreadPool::getInstance().runTask(class extends ARunnable
                                {
                                
    public: void run(){

        try {
            stop2();
    

                //: 
} catch(e) 
            {
PreLogUtil::putOE(commonStrings.EXCEPTION, this, commonStrings.PROCESS, e);
    
}

}

                                }
                            );
    
}


                //@Throws(Exception.constructor)
            
    private: void stop2(){
this->clip.stop();
    
super.stop();
    
}


    public: Control getControl(std::string controlType){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullControl();
    
}


    public: std::vector<Control> getControls(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return {};
    
}


    public: void setVolume(int32_t leftVolume, int32_t rightVolume){
this->setVolumeF((leftVolume) /100.0);
    
}


    private: float getVolume(){

    FloatControl masterGainFloatControl = clip.getControl(FloatControl::Type.MASTER_GAIN);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Math::pow(10, masterGainFloatControl.getValue() /20);
    
}


    private: void setVolumeF(float volume){

                        if(volume < 0 || volume > 1)
                        
                                    {
                                    


                            throw IllegalArgumentException("Volume: " +volume);
                    

                                    }
                                

    FloatControl masterGainFloatControl = this->clip.getControl(FloatControl::Type.MASTER_GAIN);;
    
masterGainFloatControl.setValue(20 *Math::log10(volume));
    
}


    public: int64_t getDuration(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->clip.getMicrosecondLength() /1000;
    
}


    public: void update(LineEvent event){

                        if(event.getType() === LineEvent::Type.STOP)
                        
                                    {
                                    
    int32_t size = this->listenersList.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    PlayerListener listener = this->listenersList.get(size);;
    
listener.playerUpdate(this, PlayerListener::END_OF_MEDIA, 
                            nullptr);
    
}


                                    }
                                
}


};

            

