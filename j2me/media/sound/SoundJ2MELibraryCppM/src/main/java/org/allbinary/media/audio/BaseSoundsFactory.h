
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/audio/SoundsFactoryInterface.h"
class Sound;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BaseSoundsFactory
            : public virtual Object
        , public virtual SoundsFactoryInterface {


            
    public: BaseSoundsFactory();
        
    private: bool initialized= false;

    public: void init();

                //@Throws(Exception.constructor)
            
    public: std::vector<Sound*> getSoundInterfaceArray();

    public: void setInitialized(bool initialized);

    public: bool isInitialized();

};

            


        #endif //ORG_ALLBINARY_MEDIA_AUDIO_BASESOUNDSFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_AUDIO_BASESOUNDSFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_AUDIO_BASESOUNDSFACTORY_H_COMPLETE
        #if __has_include("org/allbinary/media/audio/SoundsFactoryInterface.h")
#include "org/allbinary/media/audio/SoundsFactoryInterface.h"
#endif
#if __has_include("org/allbinary/media/audio/Sound.h")
#include "org/allbinary/media/audio/Sound.h"
#endif

        #endif
    
