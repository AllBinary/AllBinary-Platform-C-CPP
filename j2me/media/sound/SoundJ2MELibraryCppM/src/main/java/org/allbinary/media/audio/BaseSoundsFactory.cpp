
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
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_BASESOUNDSFACTORY_CPP
        #define ORG_ALLBINARY_MEDIA_AUDIO_BASESOUNDSFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/audio/BaseSoundsFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/audio/SoundsFactoryInterface.h"
#include "org/allbinary/media/audio/Sound.h"


BaseSoundsFactory::BaseSoundsFactory() {
        }
        
    auto BaseSoundsFactory::init() -> void{
}


                //@Throws(Exception.constructor)
            
    auto BaseSoundsFactory::getSoundInterfaceArray() -> std::vector<Sound*>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return {};
    
}


    auto BaseSoundsFactory::setInitialized(bool initialized) -> void{
this->initialized= initialized;
    
}


    auto BaseSoundsFactory::isInitialized() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->initialized;
    
}




        #endif //ORG_ALLBINARY_MEDIA_AUDIO_BASESOUNDSFACTORY_CPP
