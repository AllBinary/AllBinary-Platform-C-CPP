
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
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_MUSIC_MUSICSTRINGS_CPP
        #define ORG_ALLBINARY_MEDIA_AUDIO_MUSIC_MUSICSTRINGS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/audio/music/MusicStrings.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

MusicStrings::MusicStrings() {
        }
        auto MusicStrings::instance_owner() -> MusicStrings* { static std::unique_ptr<MusicStrings> value(new MusicStrings()); return value.get(); }
MusicStrings* MusicStrings::instance = MusicStrings::instance_owner();

    auto MusicStrings::getInstance() -> MusicStrings*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return MusicStrings::instance;
    
}




        #endif //ORG_ALLBINARY_MEDIA_AUDIO_MUSIC_MUSICSTRINGS_CPP
