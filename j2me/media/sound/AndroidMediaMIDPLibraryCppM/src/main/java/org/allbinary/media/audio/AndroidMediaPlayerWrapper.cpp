
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
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_ANDROIDMEDIAPLAYERWRAPPER_CPP
        #define ORG_ALLBINARY_MEDIA_AUDIO_ANDROIDMEDIAPLAYERWRAPPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/audio/AndroidMediaPlayerWrapper.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
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
        #include "org/allbinary/media/audio/BasicPlayer.h"


    auto AndroidMediaPlayerWrapper::createPlayerWrapper() -> AndroidMediaPlayerWrapper*{

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AndroidMediaPlayerWrapper(StringUtil::getInstance()->EMPTY_STRING);
    

                //: 
} catch(Exception& e) 
            {



                            throw RuntimeException();
                    
}

}

AndroidMediaPlayerWrapper* AndroidMediaPlayerWrapper::NULL_ANDROID_MEDIA_PLAYER_WRAPPER = AndroidMediaPlayerWrapper::createPlayerWrapper();

AndroidMediaPlayerWrapper::AndroidMediaPlayerWrapper(std::string resource) : logUtil(LogUtil::getInstance()), mediaPlayer(NullAndroidCanvas::NULL_MEDIA_PLAYER){

        try {
            
                        if(resource == StringUtil::getInstance()->EMPTY_STRING)
                        
                                    {
                                    
                                    }
                                
                        else {
                            
    ResourceUtil* resourceUtil = ResourceUtil::getInstance();;
    

    MediaPlayer* mediaPlayer = MediaPlayer::create(resourceUtil->getContext(), JavaBoxes::value<int32_t>(resourceUtil->getResourceId(resource)));;
    

                        if(mediaPlayer == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw Exception((new StringMaker())->append("Failed to create media player for: ")->append(resource)->append(" with id: ")->append(resourceUtil->getResourceId(resource)->toString())->toString());
                    

                                    }
                                
this->setMediaPlayer(mediaPlayer);
    
this->mediaPlayer->setLooping(false);
    

                        }
                            

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(JavaString::valueOf(this->commonStrings->EXCEPTION_LABEL) +JavaString::valueOf(resource), this, this->commonStrings->CONSTRUCTOR, &e);
    



                            throw e;
                    
}

}


    auto AndroidMediaPlayerWrapper::setLoopCount(int32_t count) -> void{
BasicPlayer::setLoopCount(count);
    

                        if(this->mediaPlayer != NullAndroidCanvas::NULL_MEDIA_PLAYER && this->mediaPlayer != 
                                    nullptr
                                )
                        
                                    {
                                    
                        if(count == 0)
                        
                                    {
                                    this->mediaPlayer->setLooping(false);
    

                                    }
                                
                        else {
                            
                        }
                            

                                    }
                                
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto AndroidMediaPlayerWrapper::addPlayerListener(PlayerListener* playerListener) -> void{
BasicPlayer::addPlayerListener(playerListener);
    
}


    auto AndroidMediaPlayerWrapper::removePlayerListener(PlayerListener* playerListener) -> void{
BasicPlayer::removePlayerListener(playerListener);
    
}


    auto AndroidMediaPlayerWrapper::getState() -> int32_t{

                        if(this->mediaPlayer->isPlaying())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Player::STARTED;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Player::PREFETCHED;
    

                        }
                            
}


    auto AndroidMediaPlayerWrapper::close() -> void{

        try {
            this->mediaPlayer->release();
    
this->mediaPlayer= NullAndroidCanvas::NULL_MEDIA_PLAYER;
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->CLOSE, &e);
    
}

}


                //@Throws(MediaException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto AndroidMediaPlayerWrapper::start() -> void{

        try {
            
                        if(this->mediaPlayer->isPlaying())
                        
                                    {
                                    this->mediaPlayer->pause();
    
this->mediaPlayer->seekTo(0);
    

                                    }
                                
this->mediaPlayer->start();
    
BasicPlayer::start();
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->START_METHOD_NAME, &e);
    
}

}


                //@Throws(MediaException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto AndroidMediaPlayerWrapper::stop() -> void{

        try {
            this->mediaPlayer->stop();
    
this->mediaPlayer->prepare();
    
BasicPlayer::stop();
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "stop", &e);
    
}

}


    auto AndroidMediaPlayerWrapper::update(std::string event) -> void{
this->logUtil->putF(JavaString::valueOf("LineEvent: ") +JavaString::valueOf(event), this, this->commonStrings->UPDATE);
    

    int32_t size = this->listenersList->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    PlayerListener* listener = dynamic_cast<PlayerListener*>(this->listenersList->objectArray[index]);;
    
listener->playerUpdate(this, event, NullUtil::getInstance()->NULL_OBJECT);
    
}

}


    auto AndroidMediaPlayerWrapper::setVolume(int32_t leftVolume, int32_t rightVolume) -> void{
this->mediaPlayer->setVolume((leftVolume) /100.0, (rightVolume) /100.0);
    
}


    auto AndroidMediaPlayerWrapper::getDuration() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->mediaPlayer->getDuration();
    
}


    auto AndroidMediaPlayerWrapper::setMediaPlayer(MediaPlayer* mediaPlayer) -> void{
this->mediaPlayer= mediaPlayer;
    
}


    auto AndroidMediaPlayerWrapper::getMediaPlayer() -> MediaPlayer*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->mediaPlayer;
    
}




        #endif //ORG_ALLBINARY_MEDIA_AUDIO_ANDROIDMEDIAPLAYERWRAPPER_CPP
