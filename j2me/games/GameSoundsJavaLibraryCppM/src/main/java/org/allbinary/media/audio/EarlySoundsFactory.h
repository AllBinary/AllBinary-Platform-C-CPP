
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/audio/BaseSoundsFactory.h"
class Sound;
class SelectSound;
class ErrorSound;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class EarlySoundsFactory: public BaseSoundsFactory {

    private: static EarlySoundsFactory* instance_owner();
    private: static EarlySoundsFactory* instance;

    public: static EarlySoundsFactory* getInstance();


            
    public: EarlySoundsFactory();
        
                //@Throws(Exception.constructor)
            
    public: std::vector<Sound*> getSoundInterfaceArray();

};

            


        #endif //ORG_ALLBINARY_MEDIA_AUDIO_EARLYSOUNDSFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_AUDIO_EARLYSOUNDSFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_AUDIO_EARLYSOUNDSFACTORY_H_COMPLETE
        #if __has_include("org/allbinary/media/audio/BaseSoundsFactory.h")
#include "org/allbinary/media/audio/BaseSoundsFactory.h"
#endif
#if __has_include("org/allbinary/media/audio/Sound.h")
#include "org/allbinary/media/audio/Sound.h"
#endif
#if __has_include("org/allbinary/media/audio/SelectSound.h")
#include "org/allbinary/media/audio/SelectSound.h"
#endif
#if __has_include("org/allbinary/media/audio/ErrorSound.h")
#include "org/allbinary/media/audio/ErrorSound.h"
#endif

        #endif
    
