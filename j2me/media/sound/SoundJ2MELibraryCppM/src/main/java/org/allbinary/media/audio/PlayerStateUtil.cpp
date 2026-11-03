
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_PLAYERSTATEUTIL_CPP
        #define ORG_ALLBINARY_MEDIA_AUDIO_PLAYERSTATEUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/audio/PlayerStateUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/media/Player.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

PlayerStateUtil::PlayerStateUtil() : commonStrings(CommonStrings::getInstance()) {
        }
        auto PlayerStateUtil::instance_owner() -> PlayerStateUtil* { static std::unique_ptr<PlayerStateUtil> value(new PlayerStateUtil()); return value.get(); }
PlayerStateUtil* PlayerStateUtil::instance = PlayerStateUtil::instance_owner();

    auto PlayerStateUtil::getInstance() -> PlayerStateUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return PlayerStateUtil::instance;
    
}


    auto PlayerStateUtil::convert(int32_t state) -> std::string{

                        if(state == Player::UNREALIZED)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->UNREALIZED;
    

                                    }
                                
                             else 
                        if(state == Player::REALIZED)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->REALIZED;
    

                                    }
                                
                             else 
                        if(state == Player::PREFETCHED)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->PREFETCHED;
    

                                    }
                                
                             else 
                        if(state == Player::STARTED)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->STARTED;
    

                                    }
                                
                             else 
                        if(state == Player::CLOSED)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->CLOSED;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->commonStrings->UNKNOWN;
    
}




        #endif //ORG_ALLBINARY_MEDIA_AUDIO_PLAYERSTATEUTIL_CPP
