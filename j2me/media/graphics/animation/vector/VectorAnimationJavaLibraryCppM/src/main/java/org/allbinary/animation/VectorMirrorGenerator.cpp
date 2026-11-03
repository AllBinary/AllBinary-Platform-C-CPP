
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_VECTORMIRRORGENERATOR_CPP
        #define ORG_ALLBINARY_ANIMATION_VECTORMIRRORGENERATOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/VectorMirrorGenerator.h"
        

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

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListS.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/VectorAnimationUtil.h"

auto VectorMirrorGenerator::instance_owner() -> VectorMirrorGenerator* { static std::unique_ptr<VectorMirrorGenerator> value(new VectorMirrorGenerator()); return value.get(); }
VectorMirrorGenerator* VectorMirrorGenerator::instance = VectorMirrorGenerator::instance_owner();

    auto VectorMirrorGenerator::getInstance() -> VectorMirrorGenerator*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return VectorMirrorGenerator::instance;
    
}


VectorMirrorGenerator::VectorMirrorGenerator() : logUtil(LogUtil::getInstance()), vectorAnimationUtil(VectorAnimationUtil::getInstance()){
}


    auto VectorMirrorGenerator::getInstance(std::vector<std::vector<std::vector<int32_t>>> points, int32_t width) -> std::vector<std::vector<std::vector<int32_t>>>{

        try {
            
    PointFactory* pointFactory = PointFactory::getInstance();;
    

    BasicArrayList* pointBasicArrayList;;
    

    std::vector<std::vector<int32_t>> nextPoints;;
    

    int32_t size2= 0;;
    

    int32_t size = points.size();;
    

    BasicArrayList* pointsBasicArrayList = new BasicArrayListS(size);;
    




                        for (
    int32_t frame = 0;frame < size; frame++)
        {
nextPoints= points[frame];
    
size2= nextPoints.size();
    
pointBasicArrayList= new BasicArrayListS(size2);
    




                        for (
    int32_t index = 0;index < size2; index++)
        {
pointBasicArrayList->add(pointFactory->createXY(nextPoints[index][0], nextPoints[index][1]));
    
}

pointsBasicArrayList->add(pointBasicArrayList);
    
}





                        for (
    int32_t index = 0;index < points.size(); index++)
        {
pointsBasicArrayList->add(this->getInstance(dynamic_cast<BasicArrayList*>(pointsBasicArrayList->objectArray[index]), width));
    
}


    std::vector<std::vector<std::vector<int32_t>>> newPoints = this->vectorAnimationUtil->toAnimationArrayFromListOfPointList(pointsBasicArrayList);;
    



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
            
    auto VectorMirrorGenerator::getInstance(BasicArrayList* pointBasicArrayList, int32_t width) -> BasicArrayList*{

    BasicGraphicsPipeline* graphicsPipe = new BasicGraphicsPipeline(pointBasicArrayList);;
    
graphicsPipe->createMatrix();
    
graphicsPipe->mirror(width);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return graphicsPipe->getMatrix();;
    
}




        #endif //ORG_ALLBINARY_ANIMATION_VECTORMIRRORGENERATOR_CPP
