
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_BASESCALABLE_H
        #define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_BASESCALABLE_H

            #include "../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ScalableListener.h"

class BaseScalable
            : public Object
        : public ScalableListener {
        

    public float getRatio(float ratio);

    public int32_t getLeft(int32_t xOffset);

    public int32_t getTop(int32_t yOffset);

    public scale(float ratio);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_BASESCALABLE_H
