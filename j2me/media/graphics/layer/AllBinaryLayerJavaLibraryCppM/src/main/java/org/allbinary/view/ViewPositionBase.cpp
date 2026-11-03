
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
        



        #ifndef ORG_ALLBINARY_VIEW_VIEWPOSITIONBASE_CPP
        #define ORG_ALLBINARY_VIEW_VIEWPOSITIONBASE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/view/ViewPositionBase.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/graphics/GPoint.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto ViewPositionBase::NULL_VIEW_POSITION_owner() -> ViewPositionBase* { static std::unique_ptr<ViewPositionBase> value(new ViewPositionBase(0, 0, 0)); return value.get(); }
ViewPositionBase* ViewPositionBase::NULL_VIEW_POSITION = ViewPositionBase::NULL_VIEW_POSITION_owner();

ViewPositionBase::ViewPositionBase(int32_t x, int32_t y, int32_t z) : GPoint(x, y, z){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto ViewPositionBase::getX2() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getX();;
    
}


    auto ViewPositionBase::getY2() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getY();;
    
}


    auto ViewPositionBase::getZ2() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getZ();;
    
}


    auto ViewPositionBase::setAllbinaryLayer(Object* allbinaryLayer) -> void{
}




        #endif //ORG_ALLBINARY_VIEW_VIEWPOSITIONBASE_CPP
