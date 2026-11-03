
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
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_SECONDARYPLAYERQUEUEFACTORY_CPP
        #define ORG_ALLBINARY_MEDIA_AUDIO_SECONDARYPLAYERQUEUEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/audio/SecondaryPlayerQueueFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/audio/PlayerQueue.h"


SecondaryPlayerQueueFactory::SecondaryPlayerQueueFactory() {
        }
        auto SecondaryPlayerQueueFactory::SINGLETON_owner() -> PlayerQueue* { static std::unique_ptr<PlayerQueue> value(new PlayerQueue(4)); return value.get(); }
PlayerQueue* SecondaryPlayerQueueFactory::SINGLETON = SecondaryPlayerQueueFactory::SINGLETON_owner();

    auto SecondaryPlayerQueueFactory::getInstance() -> PlayerQueue*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return SecondaryPlayerQueueFactory::SINGLETON;
    
}




        #endif //ORG_ALLBINARY_MEDIA_AUDIO_SECONDARYPLAYERQUEUEFACTORY_CPP
