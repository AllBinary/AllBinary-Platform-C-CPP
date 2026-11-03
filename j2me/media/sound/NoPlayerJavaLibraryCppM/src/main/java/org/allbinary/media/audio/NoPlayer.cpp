
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
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_NOPLAYER_CPP
        #define ORG_ALLBINARY_MEDIA_AUDIO_NOPLAYER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/audio/NoPlayer.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/media/Control.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/audio/BasicPlayer.h"
#include "org/allbinary/media/audio/NullControl.h"

auto NoPlayer::NO_PLAYER_owner() -> NoPlayer* { static std::unique_ptr<NoPlayer> value(new NoPlayer()); return value.get(); }
NoPlayer* NoPlayer::NO_PLAYER = NoPlayer::NO_PLAYER_owner();

NoPlayer::NoPlayer(){
}


    auto NoPlayer::close() -> void{
}


    auto NoPlayer::getContentType() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return StringUtil::getInstance()->NULL_STRING;
    
}


    auto NoPlayer::getControl(std::string controlType) -> Control*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new NullControl();
    
}


    auto NoPlayer::getControls() -> std::vector<Control*>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return {};
    
}




        #endif //ORG_ALLBINARY_MEDIA_AUDIO_NOPLAYER_CPP
