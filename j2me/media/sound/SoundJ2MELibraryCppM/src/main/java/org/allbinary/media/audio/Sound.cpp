
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
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_SOUND_CPP
        #define ORG_ALLBINARY_MEDIA_AUDIO_SOUND_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/audio/Sound.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Runnable.h"
        
#include <javax/microedition/media/Player.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/audio/SoundInterface.h"
#include "org/allbinary/media/audio/NoPlayer.h"


Sound::Sound(std::string resource) : player(NoPlayer::NO_PLAYER){
this->resource= resource;
    
}


    auto Sound::getResource() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->resource;
    
}


    auto Sound::getPlayerP() -> Player*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->player;
    
}


    auto Sound::setPlayerP(Player* player) -> void{
this->player= player;
    
}


                //@Throws(Exception.constructor)
            
    auto Sound::init() -> void{
}


    auto Sound::getDuration() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return  -1;
    
}


    auto Sound::run() -> void{

        try {
            this->player->start();
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
PreLogUtil::put(commonStrings->EXCEPTION, this, commonStrings->RUN);
    
}

}




        #endif //ORG_ALLBINARY_MEDIA_AUDIO_SOUND_CPP
