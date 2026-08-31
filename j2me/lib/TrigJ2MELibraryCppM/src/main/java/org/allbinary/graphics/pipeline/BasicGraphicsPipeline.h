
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_PIPELINE_BASICGRAPHICSPIPELINE_H
        #define ORG_ALLBINARY_GRAPHICS_PIPELINE_BASICGRAPHICSPIPELINE_H

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/math/Angle.h>

      
#include <org/allbinary/math/NoDecimalTrigTable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasicGraphicsPipeline
            : public Object
         {
        

    pointBasicArrayList: BasicArrayList;

public constructor (BasicArrayList points);

    public setInitMatrix(BasicArrayList points);

    public createMatrix();

                //@Throws(Exception.constructor)
            
    public translate(int32_t x, int32_t y);

                //@Throws(Exception.constructor)
            
    public rotateToAngle(Angle angle);

    private: const noDecimalTrigTable: NoDecimalTrigTable = NoDecimalTrigTable.getInstance()!;

                //@Throws(Exception.constructor)
            
    rotate(int32_t angle);

                //@Throws(Exception.constructor)
            
    public mirror(int32_t width);

    public BasicArrayList getMatrix();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_PIPELINE_BASICGRAPHICSPIPELINE_H
