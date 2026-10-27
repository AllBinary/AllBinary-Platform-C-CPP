
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
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_MUSIC_MUSICMANAGERFACTORY_H
        #define ORG_ALLBINARY_MEDIA_AUDIO_MUSIC_MUSICMANAGERFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class BasicArrayList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class MusicManager;
class MusicService;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MusicManagerFactory
            : public virtual Object
         {

    public: static MusicManager* createMusicManager(BasicArrayList* soundList);


            
    public: MusicManagerFactory();
        
};

            


        #endif //ORG_ALLBINARY_MEDIA_AUDIO_MUSIC_MUSICMANAGERFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_AUDIO_MUSIC_MUSICMANAGERFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_AUDIO_MUSIC_MUSICMANAGERFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include("org/allbinary/media/audio/music/MusicManager.h")
#include "org/allbinary/media/audio/music/MusicManager.h"
#endif
#if __has_include("org/allbinary/media/audio/music/MusicService.h")
#include "org/allbinary/media/audio/music/MusicService.h"
#endif

        #endif
    
