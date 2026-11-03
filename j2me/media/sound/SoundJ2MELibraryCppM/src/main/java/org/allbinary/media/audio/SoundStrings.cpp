
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_SOUNDSTRINGS_CPP
        #define ORG_ALLBINARY_MEDIA_AUDIO_SOUNDSTRINGS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/audio/SoundStrings.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

SoundStrings::SoundStrings() {
        }
        auto SoundStrings::instance_owner() -> SoundStrings* { static std::unique_ptr<SoundStrings> value(new SoundStrings()); return value.get(); }
SoundStrings* SoundStrings::instance = SoundStrings::instance_owner();

    auto SoundStrings::getInstance() -> SoundStrings*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return SoundStrings::instance;
    
}




        #endif //ORG_ALLBINARY_MEDIA_AUDIO_SOUNDSTRINGS_CPP
