
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
        



            #include "java/lang/Exception.h"
        
            #include "java/lang/Math.h"
        
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicGraphicsPipeline.h"

class GraphicsPipeline: public BasicGraphicsPipeline {

public: GraphicsPipeline(BasicArrayList points) : BasicGraphicsPipeline(points){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    public: void rotateTheta(double aTheta){

    BasicArrayList newVector = BasicArrayListD();;
    

    int32_t size = this->pointBasicArrayList.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    GPoint secondPoint = pointBasicArrayList.get(index);;
    

    double secondX = (secondPoint.getX() *Math::cos(aTheta)) -(secondPoint.getY() *Math::sin(aTheta));;
    

    double secondY = (secondPoint.getX() *Math::sin(aTheta)) +(secondPoint.getY() *Math::cos(aTheta));;
    

    GPoint point = PointFactory::getInstance().createXY((static_cast<int32_t>(secondX)), (static_cast<int32_t>(secondY)));;
    
newVector.add(point);
    
}

this->pointBasicArrayList= newVector;
    
}


};

            

