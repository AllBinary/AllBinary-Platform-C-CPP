
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class Player;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PlayerStateUtil
            : public virtual Object
         {

    private: static PlayerStateUtil* instance_owner();
    private: static PlayerStateUtil* instance;

    public: static PlayerStateUtil* getInstance();


            
    public: PlayerStateUtil();
        
    private: CommonStrings* commonStrings;

    public: const std::string UNREALIZED = "UNREALIZED";

    public: const std::string REALIZED = "REALIZED";

    public: const std::string PREFETCHED = "PREFETCHED";

    public: const std::string STARTED = "STARTED";

    public: const std::string CLOSED = "CLOSED";

    public: std::string convert(int32_t state);

};

            


        #endif //ORG_ALLBINARY_MEDIA_AUDIO_PLAYERSTATEUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_AUDIO_PLAYERSTATEUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_AUDIO_PLAYERSTATEUTIL_H_COMPLETE
        #if __has_include(<javax/microedition/media/Player.h>)
#include <javax/microedition/media/Player.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif

        #endif
    
