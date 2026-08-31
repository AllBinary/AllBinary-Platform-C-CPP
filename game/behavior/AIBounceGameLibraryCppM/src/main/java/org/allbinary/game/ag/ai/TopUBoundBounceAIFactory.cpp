
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <java/util/Hashtable.h>

      
#include <org/allbinary/ai/ArtificialIntelligenceInterface.h>

      
#include <org/allbinary/bounds/TopULayerBounds.h>

      
#include <org/allbinary/game/ai/ArtificialIntelligenceInterfaceFactoryInterface.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/game/physics/velocity/VelocityInterface.h>

      
#include <org/allbinary/game/physics/velocity/VelocityInterfaceCompositeInterface.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BoundBounceAI.h"
#include "ReverseVelocityBoundsVisitor.h"

class TopUBoundBounceAIFactory
            : public Object
        : public ArtificialIntelligenceInterfaceFactoryInterface {
        

                //@Throws(Exception.constructor)
            
    public ArtificialIntelligenceInterface getInstance(Hashtable<any, any> hashtable, AllBinaryLayer ownerLayerInterface, GameInput gameInput){

    velocityInterfaceCompositeInterface: VelocityInterfaceCompositeInterface = ownerLayerInterface as VelocityInterfaceCompositeInterface;;
    

    velocityInterface: VelocityInterface = velocityInterfaceCompositeInterface!.getVelocityProperties() as VelocityInterface;;
    

    maxDistancePerTick: int32_t = (velocityInterface!.getMaxForwardVelocity()>>velocityInterface!.getVelocityXBasicDecimalP()!.getScaledFactor());;
    

    halfWidth: int32_t = ownerLayerInterface!.getWidth() *2 +maxDistancePerTick +1;;
    

    halfHeight: int32_t = ownerLayerInterface!.getHeight() *2 +maxDistancePerTick +1;;
    

    point: GPoint = PointFactory.getInstance()!.createXY(halfWidth, halfHeight +60)!;;
    

    displayInfo: DisplayInfoSingleton = DisplayInfoSingleton.getInstance()!;;
    

    rectangle: Rectangle = new Rectangle(point, (displayInfo!.getLastWidth() -halfWidth -point.getX()), (displayInfo!.getLastHeight() -halfHeight -point.getY()));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new BoundBounceAI(ownerLayerInterface, gameInput, new TopULayerBounds(rectangle), new ReverseVelocityBoundsVisitor(ownerLayerInterface));
    
}


};

            

