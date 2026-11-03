
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
        



        #ifndef ORG_ALLBINARY_MATH_RECTANGLECOLLISIONUTIL_CPP
        #define ORG_ALLBINARY_MATH_RECTANGLECOLLISIONUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/math/RectangleCollisionUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto RectangleCollisionUtil::instance_owner() -> RectangleCollisionUtil* { static std::unique_ptr<RectangleCollisionUtil> value(new RectangleCollisionUtil()); return value.get(); }
RectangleCollisionUtil* RectangleCollisionUtil::instance = RectangleCollisionUtil::instance_owner();

    auto RectangleCollisionUtil::getInstance() -> RectangleCollisionUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return RectangleCollisionUtil::instance;
    
}


RectangleCollisionUtil::RectangleCollisionUtil(){
}


    auto RectangleCollisionUtil::isCollision(int32_t rectX1, int32_t rectY1, int32_t rectX2, int32_t rectY2, int32_t rect2X1, int32_t rect2Y1, int32_t rect2X2, int32_t rect2Y2) -> bool{

                        if(rect2X1 >= rectX2 || rect2Y1 >= rectY2 || rect2X2 <= rectX1 || rect2Y2 <= rectY1)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                        }
                            
}


    auto RectangleCollisionUtil::isInside(int32_t rectX1, int32_t rectY1, int32_t rectX2, int32_t rectY2, int32_t x, int32_t y) -> bool{

                        if(x >= rectX2 || y >= rectY2 || x <= rectX1 || y <= rectY1)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                        }
                            
}




        #endif //ORG_ALLBINARY_MATH_RECTANGLECOLLISIONUTIL_CPP
