
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
        



            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/pipeline/BasicGraphicsPipeline.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/math/Angle.h>

      
#include <org/allbinary/math/AngleFactory.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListS.h>

      
#include <org/allbinary/vector/VectorInfo.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/VectorAnimationUtil.h"

class VectorRotationGenerator
            : public Object
         {

    private: static VectorRotationGenerator* instance() { static std::unique_ptr<VectorRotationGenerator> value(new VectorRotationGenerator()); return value.get(); }

    public: static VectorRotationGenerator* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return VectorRotationGenerator::instance();
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: VectorAnimationUtil* vectorAnimationUtil = VectorAnimationUtil::getInstance();

private: VectorRotationGenerator(){
}


    public: std::vector<std::vector<std::vector<int32_t>>> getInstance(VectorInfo* vectorRotationInfo){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getInstanceFrames(vectorRotationInfo->getWidth(), vectorRotationInfo->getHeight(), vectorRotationInfo->getPoints(), vectorRotationInfo->getTotalFrames());;
    
}


    private: AngleFactory* angleFactory = AngleFactory::getInstance();

    public: std::vector<std::vector<std::vector<int32_t>>> getInstanceFrames(int32_t width, int32_t height, std::vector<std::vector<int32_t>> points, int32_t frames){

        try {
            
    int16_t totalAngle = this->angleFactory->TOTAL_ANGLE;;
    

    int32_t angleIncrement = totalAngle /frames;;
    

    BasicArrayList* pointsBasicArrayList = new BasicArrayListS(totalAngle /angleIncrement);;
    

    BasicArrayList* pointBasicArrayList = new BasicArrayListS(points.size());;
    

    PointFactory* pointFactory = PointFactory::getInstance();;
    

    int32_t size = points.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
pointBasicArrayList->add(pointFactory->createXY(points[index][0], points[index][1]));
    
}


    int32_t index = 0;;
    

        while(index < totalAngle)
        {
pointsBasicArrayList->add(this->getListAtAngle(width, height, pointBasicArrayList, this->angleFactory->getAt(index)));
    
index += angleIncrement;
    
}


    std::vector<std::vector<std::vector<int32_t>>> newPoints = this->vectorAnimationUtil->toAnimationArrayFromListOfPointListWithPointsPerFrame(pointsBasicArrayList, pointBasicArrayList->size());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return newPoints;
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->GET_INSTANCE, &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullUtil::getInstance()->NULL_INT_ARRAY_ARRAY_ARRAY;
    
}

}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getListAtAngle(int32_t width, int32_t height, BasicArrayList* pointBasicArrayList, Angle* angle){

    BasicGraphicsPipeline* graphicsPipe = new BasicGraphicsPipeline(pointBasicArrayList);;
    
graphicsPipe->createMatrix();
    
graphicsPipe->translate( -(width>>1),  -(height>>1));
    
graphicsPipe->rotateToAngle(angle);
    
graphicsPipe->translate((width>>1), (height>>1));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return graphicsPipe->getMatrix();;
    
}


};

            

