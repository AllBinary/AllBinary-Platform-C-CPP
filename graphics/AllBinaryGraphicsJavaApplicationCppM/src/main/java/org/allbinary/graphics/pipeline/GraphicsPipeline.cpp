
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
        



            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Math.h"
        
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicGraphicsPipeline.h"

class GraphicsPipeline: public BasicGraphicsPipeline {
        

public constructor (BasicArrayList points){
            super(points);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    public rotateTheta(double aTheta){

    newVector: BasicArrayList = new BasicArrayListD();;
    

    size: int32_t = this.pointBasicArrayList!.size()!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    secondPoint: GPoint = pointBasicArrayList!.get(index) as GPoint;;
    

    secondX: double = (secondPoint!.getX() *Math.cos(aTheta)) -(secondPoint!.getY() *Math.sin(aTheta));;
    

    secondY: double = (secondPoint!.getX() *Math.sin(aTheta)) +(secondPoint!.getY() *Math.cos(aTheta));;
    

    point: GPoint = PointFactory.getInstance()!.createXY((static_cast<int32_t>(secondX)), (static_cast<int32_t>(secondY)))!;;
    
newVector!.add(point);
    
}

this.pointBasicArrayList= newVector;
    
}


};

            

