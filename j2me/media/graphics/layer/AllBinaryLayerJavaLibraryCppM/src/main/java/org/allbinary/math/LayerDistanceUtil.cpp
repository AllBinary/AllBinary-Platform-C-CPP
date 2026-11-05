
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
        



        #ifndef ORG_ALLBINARY_MATH_LAYERDISTANCEUTIL_CPP
        #define ORG_ALLBINARY_MATH_LAYERDISTANCEUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/math/LayerDistanceUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/math/MathUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

LayerDistanceUtil::LayerDistanceUtil() : mathUtil(MathUtil::getInstance()) {
        }
        auto LayerDistanceUtil::instance_owner() -> LayerDistanceUtil* { static std::unique_ptr<LayerDistanceUtil> value(new LayerDistanceUtil()); return value.get(); }
LayerDistanceUtil* LayerDistanceUtil::instance = LayerDistanceUtil::instance_owner();

    auto LayerDistanceUtil::getInstance() -> LayerDistanceUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return LayerDistanceUtil::instance;
    
}


    auto LayerDistanceUtil::getDistance(AllBinaryLayer* layerInterface, AllBinaryLayer* layerInterface2) -> int32_t{

    int32_t dx = (layerInterface->getXP() +layerInterface->getHalfWidth()) -(layerInterface2->getXP() +layerInterface2->getHalfWidth());;
    

    int32_t dy = (layerInterface->getYP() +layerInterface->getHalfHeight()) -(layerInterface2->getYP() +layerInterface2->getHalfHeight());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return static_cast<int32_t>(this->mathUtil->sqrt((dx *dx) +(dy *dy)));
    
}


    auto LayerDistanceUtil::getDistance3D(AllBinaryLayer* layerInterface, AllBinaryLayer* layerInterface2) -> int32_t{

    int32_t dx = (layerInterface->getXP() +layerInterface->getHalfWidth()) -(layerInterface2->getXP() +layerInterface2->getHalfWidth());;
    

    int32_t dy = (layerInterface->getYP() +layerInterface->getHalfHeight()) -(layerInterface2->getYP() +layerInterface2->getHalfHeight());;
    

    int32_t dz = (layerInterface->getZP() +layerInterface->getHalfDepth()) -(layerInterface2->getZP() +layerInterface2->getHalfDepth());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return static_cast<int32_t>(this->mathUtil->sqrt((dx *dx) +(dy *dy) +(dz *dz)));
    
}


    auto LayerDistanceUtil::getDistanceAt(AllBinaryLayer* layerInterface, GPoint* point) -> int32_t{

    int32_t dx = layerInterface->getXP() -point->getX();;
    

    int32_t dy = layerInterface->getYP() -point->getY();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return static_cast<int32_t>(this->mathUtil->sqrt((dx *dx) +(dy *dy)));
    
}




        #endif //ORG_ALLBINARY_MATH_LAYERDISTANCEUTIL_CPP
