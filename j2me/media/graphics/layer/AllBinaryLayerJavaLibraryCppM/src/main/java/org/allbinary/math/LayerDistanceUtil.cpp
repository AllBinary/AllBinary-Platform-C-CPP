
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

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/math/MathUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LayerDistanceUtil
            : public Object
         {

    private: static LayerDistanceUtil* instance() { static std::unique_ptr<LayerDistanceUtil> value(new LayerDistanceUtil()); return value.get(); }

    public: static LayerDistanceUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LayerDistanceUtil::instance();
    
}


    private: MathUtil* mathUtil = MathUtil::getInstance();

    public: int32_t getDistance(AllBinaryLayer* layerInterface, AllBinaryLayer* layerInterface2){

    int32_t dx = (layerInterface->getXP() +layerInterface->getHalfWidth()) -(layerInterface2->getXP() +layerInterface2->getHalfWidth());;
    

    int32_t dy = (layerInterface->getYP() +layerInterface->getHalfHeight()) -(layerInterface2->getYP() +layerInterface2->getHalfHeight());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return static_cast<int32_t>(this->mathUtil->sqrt((dx *dx) +(dy *dy)));
    
}


    public: int32_t getDistance3D(AllBinaryLayer* layerInterface, AllBinaryLayer* layerInterface2){

    int32_t dx = (layerInterface->getXP() +layerInterface->getHalfWidth()) -(layerInterface2->getXP() +layerInterface2->getHalfWidth());;
    

    int32_t dy = (layerInterface->getYP() +layerInterface->getHalfHeight()) -(layerInterface2->getYP() +layerInterface2->getHalfHeight());;
    

    int32_t dz = (layerInterface->getZP() +layerInterface->getHalfDepth()) -(layerInterface2->getZP() +layerInterface2->getHalfDepth());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return static_cast<int32_t>(this->mathUtil->sqrt((dx *dx) +(dy *dy) +(dz *dz)));
    
}


    public: int32_t getDistanceAt(AllBinaryLayer* layerInterface, GPoint* point){

    int32_t dx = layerInterface->getXP() -point->getX();;
    

    int32_t dy = layerInterface->getYP() -point->getY();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return static_cast<int32_t>(this->mathUtil->sqrt((dx *dx) +(dy *dy)));
    
}


};

            

