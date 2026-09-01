
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
        



        #ifndef ORG_ALLBINARY_VIEW_CENTERSTATICVIEWPOSITIONFACTORY_H
        #define ORG_ALLBINARY_VIEW_CENTERSTATICVIEWPOSITIONFACTORY_H

            #include "../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "StaticViewPosition.h"
#include "ViewPositionBase.h"

class CenterStaticViewPositionFactory
            : public Object
         {

public: CenterStaticViewPositionFactory();

    public: ViewPositionBase getInstance(int32_t z);

};

            


        #endif //ORG_ALLBINARY_VIEW_CENTERSTATICVIEWPOSITIONFACTORY_H
