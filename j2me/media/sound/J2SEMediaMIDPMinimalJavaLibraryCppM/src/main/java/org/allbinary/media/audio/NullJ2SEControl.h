
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_NULLJ2SECONTROL_H
        #define ORG_ALLBINARY_MEDIA_AUDIO_NULLJ2SECONTROL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/sound/sampled/Control.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class Type;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NullJ2SEControl: public Control {

public: NullJ2SEControl(Type* type);

};

            


        #endif //ORG_ALLBINARY_MEDIA_AUDIO_NULLJ2SECONTROL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_AUDIO_NULLJ2SECONTROL_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_AUDIO_NULLJ2SECONTROL_H_COMPLETE
        #if __has_include(<javax/sound/sampled/Control.h>)
#include <javax/sound/sampled/Control.h>
#endif
#if __has_include("org/allbinary/media/audio/Type.h")
#include "org/allbinary/media/audio/Type.h"
#endif

        #endif
    
