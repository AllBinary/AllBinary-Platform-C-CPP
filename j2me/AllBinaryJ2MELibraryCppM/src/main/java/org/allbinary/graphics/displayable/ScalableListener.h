
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCALABLELISTENER_H
        #define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCALABLELISTENER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ScalableListener
            : public virtual Object
         {

    public: virtual float getRatio(float ratio) = 0;

    public: virtual int32_t getLeft(int32_t xOffset) = 0;

    public: virtual int32_t getTop(int32_t yOffset) = 0;

    public: virtual void scale(float ratio) = 0;

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCALABLELISTENER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCALABLELISTENER_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCALABLELISTENER_H_COMPLETE
        
        #endif
    
