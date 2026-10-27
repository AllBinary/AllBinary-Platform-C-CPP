
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
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_MUSIC_MUSICMANAGERFACTORY_CPP
        #define ORG_ALLBINARY_MEDIA_AUDIO_MUSIC_MUSICMANAGERFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/audio/music/MusicManagerFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/audio/music/MusicManager.h"
#include "org/allbinary/media/audio/music/MusicService.h"


MusicManagerFactory::MusicManagerFactory() {
        }
        
    auto MusicManagerFactory::createMusicManager(BasicArrayList* soundList) -> MusicManager*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new MusicManager(
                            Class::forType(typeid(MusicService)), soundList);
    
}




        #endif //ORG_ALLBINARY_MEDIA_AUDIO_MUSIC_MUSICMANAGERFACTORY_CPP
