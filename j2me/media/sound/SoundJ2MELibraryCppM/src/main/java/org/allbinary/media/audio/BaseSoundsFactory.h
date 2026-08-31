
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
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_BASESOUNDSFACTORY_H
        #define ORG_ALLBINARY_MEDIA_AUDIO_BASESOUNDSFACTORY_H

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SoundsFactoryInterface.h"
#include "Sound.h"

class BaseSoundsFactory
            : public Object
        : public SoundsFactoryInterface {
        

    private: initialized: bool= false;

    public init();

                //@Throws(Exception.constructor)
            
    public std::vector<Sound> getSoundInterfaceArray();

    public setInitialized(bool initialized);

    public bool isInitialized();

};

            


        #endif //ORG_ALLBINARY_MEDIA_AUDIO_BASESOUNDSFACTORY_H
