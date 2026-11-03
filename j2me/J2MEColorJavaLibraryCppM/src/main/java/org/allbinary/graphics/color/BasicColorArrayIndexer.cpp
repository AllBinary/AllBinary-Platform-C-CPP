
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORARRAYINDEXER_CPP
        #define ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORARRAYINDEXER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/color/BasicColorArrayIndexer.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/color/BasicColor.h"


BasicColorArrayIndexer::BasicColorArrayIndexer(std::vector<BasicColor*> basicColorArray){
this->basicColorArray= basicColorArray;
    
this->circularIndexUtil= CircularIndexUtil::createInstance(this->basicColorArray.size());
    
}


    auto BasicColorArrayIndexer::next() -> void{
this->circularIndexUtil->next();
    
}


    auto BasicColorArrayIndexer::get() -> BasicColor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->basicColorArray[this->circularIndexUtil->getIndex()];
    
}


    auto BasicColorArrayIndexer::getBasicColorArray() -> std::vector<BasicColor*>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->basicColorArray;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORARRAYINDEXER_CPP
