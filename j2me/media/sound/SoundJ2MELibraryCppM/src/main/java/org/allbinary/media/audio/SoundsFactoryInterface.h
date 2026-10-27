
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
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_SOUNDSFACTORYINTERFACE_H
        #define ORG_ALLBINARY_MEDIA_AUDIO_SOUNDSFACTORYINTERFACE_H

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/audio/Sound.h"

class SoundsFactoryInterface {

    public: virtual void init() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual std::vector<Sound*> getSoundInterfaceArray() = 0;

    public: virtual void setInitialized(bool initialized) = 0;

    public: virtual bool isInitialized() = 0;

};

            


        #endif //ORG_ALLBINARY_MEDIA_AUDIO_SOUNDSFACTORYINTERFACE_H
