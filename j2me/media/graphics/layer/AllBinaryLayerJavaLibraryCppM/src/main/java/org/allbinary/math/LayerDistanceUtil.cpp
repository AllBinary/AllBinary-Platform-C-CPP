
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
        



            #include "../../../java/lang/Object.h"
        
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/math/MathUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LayerDistanceUtil
            : public Object
         {
        

    private: static const instance: LayerDistanceUtil = new LayerDistanceUtil();

    public static LayerDistanceUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LayerDistanceUtil.instance;
    
}


    private: const mathUtil: MathUtil = MathUtil.getInstance()!;

    public int32_t getDistance(AllBinaryLayer layerInterface, AllBinaryLayer layerInterface2){

    dx: int32_t = (layerInterface!.getXP() +layerInterface!.getHalfWidth()) -(layerInterface2!.getXP() +layerInterface2!.getHalfWidth());;
    

    dy: int32_t = (layerInterface!.getYP() +layerInterface!.getHalfHeight()) -(layerInterface2!.getYP() +layerInterface2!.getHalfHeight());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return static_cast<int32_t>(this.mathUtil!.sqrt((dx *dx) +(dy *dy)));
    
}


    public int32_t getDistance3D(AllBinaryLayer layerInterface, AllBinaryLayer layerInterface2){

    dx: int32_t = (layerInterface!.getXP() +layerInterface!.getHalfWidth()) -(layerInterface2!.getXP() +layerInterface2!.getHalfWidth());;
    

    dy: int32_t = (layerInterface!.getYP() +layerInterface!.getHalfHeight()) -(layerInterface2!.getYP() +layerInterface2!.getHalfHeight());;
    

    dz: int32_t = (layerInterface!.getZP() +layerInterface!.getHalfDepth()) -(layerInterface2!.getZP() +layerInterface2!.getHalfDepth());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return static_cast<int32_t>(this.mathUtil!.sqrt((dx *dx) +(dy *dy) +(dz *dz)));
    
}


    public int32_t getDistanceAt(AllBinaryLayer layerInterface, GPoint point){

    dx: int32_t = layerInterface!.getXP() -point.getX();;
    

    dy: int32_t = layerInterface!.getYP() -point.getY();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return static_cast<int32_t>(this.mathUtil!.sqrt((dx *dx) +(dy *dy)));
    
}


};

            

