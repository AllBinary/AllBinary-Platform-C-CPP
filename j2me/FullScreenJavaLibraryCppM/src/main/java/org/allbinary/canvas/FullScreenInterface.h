
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
        



        #ifndef ORG_ALLBINARY_CANVAS_FULLSCREENINTERFACE_H
        #define ORG_ALLBINARY_CANVAS_FULLSCREENINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class FullScreenInterface
            : public virtual Object
         {

    public: virtual bool isFullScreenMode() = 0;

    public: virtual void setFullScreenMode(bool mode) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void stopWaiting() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void waitOnNotify(int32_t wait) = 0;

};

            


        #endif //ORG_ALLBINARY_CANVAS_FULLSCREENINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_CANVAS_FULLSCREENINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_CANVAS_FULLSCREENINTERFACE_H_COMPLETE
        
        #endif
    
