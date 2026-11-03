
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
        



        #ifndef ORG_ALLBINARY_COLLISION_RECTANGLECOLLISIONUTIL_CPP
        #define ORG_ALLBINARY_COLLISION_RECTANGLECOLLISIONUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/collision/RectangleCollisionUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/awt.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/collision/Rectangle.h"


RectangleCollisionUtil::RectangleCollisionUtil(){
}


    auto RectangleCollisionUtil::isCollision(Rectangle* rectangle, GPoint* point) -> bool{

                        if(point->getX() > (static_cast<int32_t>(rectangle->x) +rectangle->getWidth()) || point->getY() > (static_cast<int32_t>(rectangle->y) +rectangle->getHeight()) || point->getX() < rectangle->x || point->getY() < rectangle->y)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                        }
                            
}


    auto RectangleCollisionUtil::isCollision(Rectangle* rectangle1, Rectangle* rectangle2) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return RectangleCollisionUtil::isCollision(rectangle1->x, rectangle1->y, rectangle1->x +rectangle1->width, rectangle1->y +rectangle1->height, rectangle2->x, rectangle2->y, rectangle2->x +rectangle2->width, rectangle2->y +rectangle2->height);;
    
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




        #endif //ORG_ALLBINARY_COLLISION_RECTANGLECOLLISIONUTIL_CPP
