
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/math/RectangleCollisionUtil.h"

class RectangleCollisionPointUtil
            : public Object
         {

    public: static bool allPointsInside(int32_t rectX1, int32_t rectY1, int32_t rectX2, int32_t rectY2, BasicArrayList* list){

    RectangleCollisionUtil* rectangleCollisionUtil = RectangleCollisionUtil::getInstance();;
    

    GPoint* point;;
    




                        for (
    int32_t index = list->size();--index >= 0; )
        {
point= dynamic_cast<GPoint*>(list->objectArray[index]);
    

                        if(!rectangleCollisionUtil->isInside(rectX1, rectY1, rectX2, rectY2, point->getX(), point->getY()))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    public: static bool allPointsInsideCell(int32_t rectX1, int32_t rectY1, int32_t rectX2, int32_t rectY2, BasicArrayList* list, int32_t xCellSize, int32_t yCellSize){

    RectangleCollisionUtil* rectangleCollisionUtil = RectangleCollisionUtil::getInstance();;
    

    GPoint* point;;
    




                        for (
    int32_t index = list->size();--index >= 0; )
        {
point= dynamic_cast<GPoint*>(list->objectArray[index]);
    

                        if(!rectangleCollisionUtil->isInside(rectX1, rectY1, rectX2, rectY2, point->getX() *xCellSize, point->getY() *yCellSize))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


private: RectangleCollisionPointUtil(){
}


};

            

