
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
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_PRIMARYPLAYERQUEUEFACTORY_H
        #define ORG_ALLBINARY_MEDIA_AUDIO_PRIMARYPLAYERQUEUEFACTORY_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/audio/PlayerQueue.h"

class PrimaryPlayerQueueFactory
            : public Object
         {

    private: static PlayerQueue* SINGLETON() { static std::unique_ptr<PlayerQueue> value(new PlayerQueue(4)); return value.get(); }

    public: static PlayerQueue* getInstance();

};

            


        #endif //ORG_ALLBINARY_MEDIA_AUDIO_PRIMARYPLAYERQUEUEFACTORY_H
