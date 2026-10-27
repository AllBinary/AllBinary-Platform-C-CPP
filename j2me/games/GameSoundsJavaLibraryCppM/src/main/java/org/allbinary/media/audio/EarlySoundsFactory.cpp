
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
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_EARLYSOUNDSFACTORY_CPP
        #define ORG_ALLBINARY_MEDIA_AUDIO_EARLYSOUNDSFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/audio/EarlySoundsFactory.h"
        

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


EarlySoundsFactory::EarlySoundsFactory() {
        }
        auto EarlySoundsFactory::instance_owner() -> EarlySoundsFactory* { static std::unique_ptr<EarlySoundsFactory> value(new EarlySoundsFactory()); return value.get(); }
EarlySoundsFactory* EarlySoundsFactory::instance = EarlySoundsFactory::instance_owner();

                //@Throws(Exception.constructor)
            
    auto EarlySoundsFactory::getSoundInterfaceArray() -> std::vector<Sound*>{

    std::vector<Sound*> soundInterfaceArray = std::vector<Sound*>(2);;
    

    int32_t index = 0;;
    
soundInterfaceArray[index++]= SelectSound::getInstance();
    
soundInterfaceArray[index++]= ErrorSound::getInstance();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return soundInterfaceArray;
    
}


    auto EarlySoundsFactory::getInstance() -> EarlySoundsFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return EarlySoundsFactory::instance;
    
}




        #endif //ORG_ALLBINARY_MEDIA_AUDIO_EARLYSOUNDSFACTORY_CPP
