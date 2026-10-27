
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
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_PLAYERSTATEUTIL_H
        #define ORG_ALLBINARY_MEDIA_AUDIO_PLAYERSTATEUTIL_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/media/Player.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PlayerStateUtil
            : public Object
         {

    private: static PlayerStateUtil* instance() { static std::unique_ptr<PlayerStateUtil> value(new PlayerStateUtil()); return value.get(); }

    public: static PlayerStateUtil* getInstance();

    private: CommonStrings* commonStrings = CommonStrings::getInstance();

    public: const std::string UNREALIZED = "UNREALIZED";

    public: const std::string REALIZED = "REALIZED";

    public: const std::string PREFETCHED = "PREFETCHED";

    public: const std::string STARTED = "STARTED";

    public: const std::string CLOSED = "CLOSED";

    public: std::string convert(int32_t state);

};

            


        #endif //ORG_ALLBINARY_MEDIA_AUDIO_PLAYERSTATEUTIL_H
