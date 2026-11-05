
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
        



        #ifndef ORG_ALLBINARY_VIEW_CENTERSTATICVIEWPOSITIONFACTORY_CPP
        #define ORG_ALLBINARY_VIEW_CENTERSTATICVIEWPOSITIONFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/view/CenterStaticViewPositionFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/view/StaticViewPosition.h"
#include "org/allbinary/view/ViewPositionBase.h"


CenterStaticViewPositionFactory::CenterStaticViewPositionFactory(){
}


    auto CenterStaticViewPositionFactory::getInstance(int32_t z) -> ViewPositionBase*{

    DisplayInfoSingleton* displayInfoSingleton = DisplayInfoSingleton::getInstance();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new StaticViewPosition((displayInfoSingleton->getLastWidth()>>1), (displayInfoSingleton->getLastHeight()>>1), z);
    
}




        #endif //ORG_ALLBINARY_VIEW_CENTERSTATICVIEWPOSITIONFACTORY_CPP
