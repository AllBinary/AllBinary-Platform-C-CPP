
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
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_NOSOUND_H
        #define ORG_ALLBINARY_MEDIA_AUDIO_NOSOUND_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class StringUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/audio/Sound.h"
class NoPlayer;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NoSound: public Sound {

    public: static NoSound* getInstance();

    private: static NoSound* instance_owner();
    private: static NoSound* instance;

private: NoSound();

};

            


        #endif //ORG_ALLBINARY_MEDIA_AUDIO_NOSOUND_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_AUDIO_NOSOUND_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_AUDIO_NOSOUND_H_COMPLETE
        #if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include("org/allbinary/media/audio/Sound.h")
#include "org/allbinary/media/audio/Sound.h"
#endif
#if __has_include("org/allbinary/media/audio/NoPlayer.h")
#include "org/allbinary/media/audio/NoPlayer.h"
#endif

        #endif
    
