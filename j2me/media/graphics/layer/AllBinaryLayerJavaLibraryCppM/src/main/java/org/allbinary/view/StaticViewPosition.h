
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
        



        #ifndef ORG_ALLBINARY_VIEW_STATICVIEWPOSITION_H
        #define ORG_ALLBINARY_VIEW_STATICVIEWPOSITION_H

#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ViewPosition.h"

class StaticViewPosition: public ViewPosition {

public: StaticViewPosition(int32_t x, int32_t y, int32_t z);

    public: int32_t getX();

    public: int32_t getY();

    public: int32_t getZ();

};

            


        #endif //ORG_ALLBINARY_VIEW_STATICVIEWPOSITION_H
