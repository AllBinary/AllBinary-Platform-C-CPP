
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
        
            #include "java/lang/Exception.h"
        
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

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/ag/ai/BoundBounceAI.h"
#include "org/allbinary/game/ag/ai/ReverseVelocityBoundsVisitor.h"

class TopUBoundBounceAIFactory
            : public Object
        , public ArtificialIntelligenceInterfaceFactoryInterface {

                //@Throws(Exception.constructor)
            
    public: ArtificialIntelligenceInterface* getInstance(ABHashtable<Object*, Object*>* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput){

    VelocityInterfaceCompositeInterface* velocityInterfaceCompositeInterface = dynamic_cast<VelocityInterfaceCompositeInterface*>(ownerLayerInterface);;
    

    VelocityInterface* velocityInterface = dynamic_cast<VelocityInterface*>(velocityInterfaceCompositeInterface->getVelocityProperties());;
    

    int32_t maxDistancePerTick = (velocityInterface->getMaxForwardVelocity()>>velocityInterface->getVelocityXBasicDecimalP()->getScaledFactor());;
    

    int32_t halfWidth = ownerLayerInterface->getWidth() *2 +maxDistancePerTick +1;;
    

    int32_t halfHeight = ownerLayerInterface->getHeight() *2 +maxDistancePerTick +1;;
    

    GPoint* point = PointFactory::getInstance()->createXY(halfWidth, halfHeight +60);;
    

    DisplayInfoSingleton* displayInfo = DisplayInfoSingleton::getInstance();;
    

    Rectangle* rectangle = new Rectangle(point, (displayInfo->getLastWidth() -halfWidth -point->getX()), (displayInfo->getLastHeight() -halfHeight -point->getY()));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new BoundBounceAI(ownerLayerInterface, gameInput, new TopULayerBounds(rectangle), new ReverseVelocityBoundsVisitor(ownerLayerInterface));
    
}


};

            

