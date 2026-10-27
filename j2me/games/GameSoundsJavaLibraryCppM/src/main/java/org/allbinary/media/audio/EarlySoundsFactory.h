
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
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_EARLYSOUNDSFACTORY_H
        #define ORG_ALLBINARY_MEDIA_AUDIO_EARLYSOUNDSFACTORY_H

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/audio/BaseSoundsFactory.h"
#include "org/allbinary/media/audio/Sound.h"
#include "org/allbinary/media/audio/SelectSound.h"
#include "org/allbinary/media/audio/ErrorSound.h"

class EarlySoundsFactory: public BaseSoundsFactory {

    private: static EarlySoundsFactory* instance() { static std::unique_ptr<EarlySoundsFactory> value(new EarlySoundsFactory()); return value.get(); }

    public: static EarlySoundsFactory* getInstance();

                //@Throws(Exception.constructor)
            
    public: std::vector<Sound*> getSoundInterfaceArray();

};

            


        #endif //ORG_ALLBINARY_MEDIA_AUDIO_EARLYSOUNDSFACTORY_H
