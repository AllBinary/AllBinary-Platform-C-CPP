
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
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_BASICPLAYER_CPP
        #define ORG_ALLBINARY_MEDIA_AUDIO_BASICPLAYER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/audio/BasicPlayer.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/media/Control.h>

      
#include <javax/microedition/media/MediaException.h>

      
#include <javax/microedition/media/Player.h>

      
#include <javax/microedition/media/PlayerListener.h>

      
#include <javax/microedition/media/TimeBase.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/audio/TimeBaseInterface.h"
#include "org/allbinary/media/audio/Controllable2.h"
#include "org/allbinary/media/audio/NullControl.h"
//BasicPlayerMIDP2JavaLibrary

BasicPlayer::BasicPlayer() : listenersList(new BasicArrayListD()){
this->setLoopCount(0);
    
this->setState(Player::UNREALIZED);
    
}


    auto BasicPlayer::getContentType() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil::getInstance()->EMPTY_STRING;
    
}


    auto BasicPlayer::getControl(std::string controlType) -> Control*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new NullControl();
    
}


    auto BasicPlayer::getControls() -> std::vector<Control*>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return {};
    
}


    auto BasicPlayer::close() -> void{
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto BasicPlayer::addPlayerListener(PlayerListener* playerListener) -> void{

                        if(!this->listenersList->contains(playerListener))
                        
                                    {
                                    this->listenersList->add(playerListener);
    

                                    }
                                
}


    auto BasicPlayer::removePlayerListener(PlayerListener* playerListener) -> void{
this->listenersList->remove(playerListener);
    
}


    auto BasicPlayer::getState() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->stateP;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto BasicPlayer::setState(int32_t state) -> void{
this->stateP= state;
    
}


    auto BasicPlayer::getDuration() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    auto BasicPlayer::getMediaTime() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    auto BasicPlayer::getTimeBase() -> TimeBase*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->timeBase;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto BasicPlayer::setTimeBase(TimeBase* timeBase) -> void{
this->timeBase= timeBase;
    
}


    auto BasicPlayer::deallocate() -> void{
}


                //@Throws(MediaException.constructor)
            
    auto BasicPlayer::prefetch() -> void{
}


                //@Throws(MediaException.constructor)
            
    auto BasicPlayer::realize() -> void{
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto BasicPlayer::setLoopCount(int32_t count) -> void{
this->loopCountP= count;
    
}


    auto BasicPlayer::getLoopCount() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->loopCountP;
    
}


                //@Throws(MediaException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto BasicPlayer::setMediaTime(int64_t now) -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


                //@Throws(MediaException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto BasicPlayer::start() -> void{
this->setState(Player::STARTED);
    
}


                //@Throws(MediaException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto BasicPlayer::stop() -> void{
this->setState(Player::PREFETCHED);
    
}


    auto BasicPlayer::setVolume(int32_t leftVolume, int32_t rightVolume) -> void{
}




        #endif //ORG_ALLBINARY_MEDIA_AUDIO_BASICPLAYER_CPP
