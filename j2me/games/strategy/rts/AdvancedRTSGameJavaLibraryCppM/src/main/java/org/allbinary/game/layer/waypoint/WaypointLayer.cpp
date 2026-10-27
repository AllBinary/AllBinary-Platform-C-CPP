
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2006 AllBinary 
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

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/game/health/Health.h>

      
#include <org/allbinary/game/identification/Group.h>

      
#include <org/allbinary/game/input/form/NullRTSFormInputFactory.h>

      
#include <org/allbinary/game/layer/AdvancedRTSGameLayer.h>

      
#include <org/allbinary/game/layer/AdvancedRTSProperties.h>

      
#include <org/allbinary/game/layer/PathFindingLayerInterface.h>

      
#include <org/allbinary/game/view/TileLayerPositionIntoViewPosition.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/game/layer/RTSPlayerLayerInterface.h>

      
#include <org/allbinary/game/multiplayer/layer/RemoteInfo.h>

      
#include <org/allbinary/media/audio/AttackSound.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/waypoint/CollidableWaypointBehavior.h"
#include "org/allbinary/game/layer/waypoint/Waypoint.h"
#include "org/allbinary/game/layer/waypoint/WaypointCellPositionHistory.h"

class WaypointLayer: public AdvancedRTSGameLayer {

    public: static int32_t getStaticType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 4;
    
}


protected: WaypointLayer(RemoteInfo* remoteInfo, PathFindingLayerInterface* parentLayer, std::vector<Group*> groupInterface, std::string rootName, std::string name, AnimationInterfaceFactoryInterface* animationInterfaceFactoryInterface, ProceduralAnimationInterfaceFactoryInterface* proceduralAnimationInterfaceFactoryInterface, Rectangle* rectangle, int32_t x, int32_t y) : AdvancedRTSGameLayer(remoteInfo, parentLayer, AdvancedRTSProperties::createProperties(), groupInterface, rootName, name, new Health(1000), NullRTSFormInputFactory::getInstance(), animationInterfaceFactoryInterface, animationInterfaceFactoryInterface, animationInterfaceFactoryInterface, animationInterfaceFactoryInterface, animationInterfaceFactoryInterface, proceduralAnimationInterfaceFactoryInterface, rectangle, x, y, new TileLayerPositionIntoViewPosition()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setCollidableInferface(new CollidableWaypointBehavior(true));
    
this->getWaypointBehavior()->setWaypoint(new Waypoint(this, AttackSound::getInstance()));
    
this->setAnimationInterface(this->indexedButShouldBeRotationAnimationInterface);
    
}


    public: void construct(RTSPlayerLayerInterface* rtsPlayerLayerInterface){
this->percentCompleteP= 100;
    
this->initVisibility(rtsPlayerLayerInterface);
    
}


    public: void paint(Graphics* graphics){

                        if(this->isVisible())
                        
                                    {
                                    super.paint(graphics);
    

                                    }
                                
}


    public: void processTick(AllBinaryLayerManager* allBinaryLayerManager){

        try {
            this->indexedButShouldBeRotationAnimationInterface.nextFrame();
    

                //: 
} catch(Exception& e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "processTick", &e);
    
}

}


    public: void damage(int32_t damage, int32_t damageType){
}


                //@Throws(Exception.constructor)
            
    public: int32_t getDamage(int32_t damageType){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


                //@Throws(Exception.constructor)
            
    public: void setDestroyed(bool destroyed){
super.setDestroyed(destroyed);
    

                        if(this->isDestroyed())
                        
                                    {
                                    WaypointCellPositionHistory::getInstance()->removeLayer(this);
    

                                    }
                                
}


    public: int32_t getType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return WaypointLayer::getStaticType();;
    
}


    public: bool isSelfUpgradeable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


};

            

