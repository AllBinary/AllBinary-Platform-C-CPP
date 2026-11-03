
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
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_PLAYERCOMPOSITE_CPP
        #define ORG_ALLBINARY_MEDIA_AUDIO_PLAYERCOMPOSITE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/audio/PlayerComposite.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <javax/microedition/media/Control.h>

      
#include <javax/microedition/media/Controllable.h>

      
#include <javax/microedition/media/MediaException.h>

      
#include <javax/microedition/media/Player.h>

      
#include <javax/microedition/media/PlayerListener.h>

      
#include <javax/microedition/media/TimeBase.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelper.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/audio/TimeBaseInterface.h"
#include "org/allbinary/media/audio/Controllable2.h"
//BasicPlayerMIDP2

PlayerComposite::PlayerComposite(Player* player, int32_t repeatTime) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), timeElapsedHelper(new TimeDelayHelper(0)), gameTickTimeDelayHelper(GameTickTimeDelayHelperFactory::getInstance()){
this->player= player;
    
this->timeElapsedHelper->delay= repeatTime;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto PlayerComposite::addPlayerListener(PlayerListener* playerListener) -> void{
this->player->addPlayerListener(playerListener);
    
}


    auto PlayerComposite::removePlayerListener(PlayerListener* playerListener) -> void{
this->player->removePlayerListener(playerListener);
    
}


    auto PlayerComposite::close() -> void{
this->player->close();
    
}


    auto PlayerComposite::deallocate() -> void{
this->player->deallocate();
    
}


    auto PlayerComposite::getContentType() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->player->getContentType();;
    
}


    auto PlayerComposite::getDuration() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->player->getDuration();;
    
}


    auto PlayerComposite::getMediaTime() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->player->getMediaTime();;
    
}


    auto PlayerComposite::getTimeBase() -> TimeBase*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return (player)).getTimeBase();;
    
}


                //@Throws(MediaException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto PlayerComposite::setTimeBase(TimeBase* timeBase) -> void{
player = dynamic_cast<TimeBaseInterface*>(this->playerplayer)
player.
                    setTimeBase(timeBase);
    
}


    auto PlayerComposite::prefetch() -> void{

        try {
            this->player->prefetch();
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "prefetch", &e);
    
}

}


    auto PlayerComposite::realize() -> void{

        try {
            this->player->realize();
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "realize", &e);
    
}

}


    auto PlayerComposite::getState() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->player->getState();;
    
}


    auto PlayerComposite::setLoopCount(int32_t count) -> void{
this->player->setLoopCount(count);
    
}


    auto PlayerComposite::setMediaTime(int64_t now) -> int64_t{

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->player->setMediaTime(now);;
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "setMediaTime", &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}

}


    auto PlayerComposite::start() -> void{

        try {
            
                        if(this->timeElapsedHelper->isTime(this->gameTickTimeDelayHelper->startTime))
                        
                                    {
                                    this->player->start();
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->START_METHOD_NAME, &e);
    
}

}


    auto PlayerComposite::stop() -> void{

        try {
            this->player->stop();
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "stop", &e);
    
}

}


    auto PlayerComposite::getControl(std::string controlType) -> Control*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->player->getControl(controlType);;
    
}


    auto PlayerComposite::getControls() -> std::vector<Control*>{



                            throw RuntimeException();
                    
}


    auto PlayerComposite::setVolume(int32_t leftVolume, int32_t rightVolume) -> void{

    Controllable2* controllable2 = (dynamic_cast<Controllable2*>(this->player));;
    
controllable2->setVolume(leftVolume, rightVolume);
    
}


    auto PlayerComposite::getPlayerP() -> Player*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->player;
    
}




        #endif //ORG_ALLBINARY_MEDIA_AUDIO_PLAYERCOMPOSITE_CPP
