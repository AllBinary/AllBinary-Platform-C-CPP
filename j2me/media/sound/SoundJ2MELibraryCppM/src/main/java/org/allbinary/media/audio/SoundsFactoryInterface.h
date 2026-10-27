
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class Sound;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SoundsFactoryInterface
            : public virtual Object
         {

    public: virtual void init() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual std::vector<Sound*> getSoundInterfaceArray() = 0;

    public: virtual void setInitialized(bool initialized) = 0;

    public: virtual bool isInitialized() = 0;

};

            


        #endif //ORG_ALLBINARY_MEDIA_AUDIO_SOUNDSFACTORYINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_AUDIO_SOUNDSFACTORYINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_AUDIO_SOUNDSFACTORYINTERFACE_H_COMPLETE
        #if __has_include("org/allbinary/media/audio/Sound.h")
#include "org/allbinary/media/audio/Sound.h"
#endif

        #endif
    
