
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
        



        #ifndef ORG_ALLBINARY_VIEW_VIEWPOSITION_CPP
        #define ORG_ALLBINARY_VIEW_VIEWPOSITION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/view/ViewPosition.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/layer/AllBinaryLayer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/view/ViewPositionBase.h"


    auto ViewPosition::getInstanceD() -> ViewPosition*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new ViewPosition(0, 0, 0);
    
}


ViewPosition::ViewPosition(int32_t x, int32_t y, int32_t z) : ViewPositionBase(x, y, z), allbinaryLayer(AllBinaryLayer::NULL_ALLBINARY_LAYER){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto ViewPosition::getX() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->allbinaryLayer->getXP();;
    
}


    auto ViewPosition::getY() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->allbinaryLayer->getYP();;
    
}


    auto ViewPosition::getZ() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->allbinaryLayer->getZP();;
    
}


    auto ViewPosition::getX2() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getX() +this->allbinaryLayer->getWidth();
    
}


    auto ViewPosition::getY2() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getY() +this->allbinaryLayer->getHeight();
    
}


    auto ViewPosition::getZ2() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return static_cast<int32_t>((this->getZ() +this->allbinaryLayer->getDepth()));
    
}


    auto ViewPosition::setAllbinaryLayer(Object* allbinaryLayer) -> void{
this->allbinaryLayer= dynamic_cast<AllBinaryLayer*>(allbinaryLayer);
    
}




        #endif //ORG_ALLBINARY_VIEW_VIEWPOSITION_CPP
