
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_MEDIA_AUDIO_TIMEBASEINTERFACE_H
        #define ORG_ALLBINARY_MEDIA_AUDIO_TIMEBASEINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class MediaException;
class TimeBase;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TimeBaseInterface
            : public virtual Object
         {

    public: virtual TimeBase* getTimeBase() = 0;

                //@Throws(MediaException.constructor)
            
    public: virtual void setTimeBase(TimeBase* timeBase) = 0;

};

            


        #endif //ORG_ALLBINARY_MEDIA_AUDIO_TIMEBASEINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_AUDIO_TIMEBASEINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_AUDIO_TIMEBASEINTERFACE_H_COMPLETE
        #if __has_include(<javax/microedition/media/MediaException.h>)
#include <javax/microedition/media/MediaException.h>
#endif
#if __has_include(<javax/microedition/media/TimeBase.h>)
#include <javax/microedition/media/TimeBase.h>
#endif

        #endif
    
