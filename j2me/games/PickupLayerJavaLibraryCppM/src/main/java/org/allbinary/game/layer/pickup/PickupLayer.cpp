
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKUPLAYER_CPP
        #define ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKUPLAYER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/pickup/PickupLayer.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/khronos/opengles/GL.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/NullAnimationFactory.h>

      
#include <org/allbinary/game/collision/CollidableAlwaysPickupNeverCollideBehaviorFactory.h>

      
#include <org/allbinary/game/combat/destroy/DestroyedLayerProcessor.h>

      
#include <org/allbinary/game/identification/BasicGroupFactory.h>

      
#include <org/allbinary/game/multiplayer/layer/MultiPlayerGameLayer.h>

      
#include <org/allbinary/game/multiplayer/layer/RemoteInfo.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/image/opengles/OpenGLSurfaceChangedInterface.h>

      
#include <org/allbinary/view/ViewPositionBase.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/pickup/PickedUpLayerInterface.h"
#include "org/allbinary/game/layer/pickup/PickupableInterface.h"
#include "org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactory.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h"


PickupLayer::PickupLayer(std::string name, RemoteInfo* remoteInfo, int32_t total, PickedUpLayerInterfaceFactoryInterface* pickedUpLayerInterfaceFactoryInterface, Animation* animationInterface, Rectangle* rectangle, ViewPositionBase* viewPosition) : MultiPlayerGameLayer(remoteInfo, BasicGroupFactory::getInstance()->NONE_ARRAY, name, rectangle, viewPosition), pickedUpLayerInterfaceFactoryInterface(CountedPickedUpLayerInterfaceFactory::NULL_COUNTED_PICKUP_LAYER_FACTORY), animationInterface(NullAnimationFactory::getFactoryInstance()->getInstance(0)){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setCollidableInferface(CollidableAlwaysPickupNeverCollideBehaviorFactory::getInstance()->createBehavior());
    
this->setLayerWidth(10);
    
this->setLayerHeight(10);
    
this->init(pickedUpLayerInterfaceFactoryInterface, animationInterface);
    
}


    auto PickupLayer::init(PickedUpLayerInterfaceFactoryInterface* pickedUpLayerInterfaceFactoryInterface, Animation* animationInterface) -> void{
this->pickedUpLayerInterfaceFactoryInterface= pickedUpLayerInterfaceFactoryInterface;
    
this->animationInterface= animationInterface;
    
this->setDestroyed(false);
    
}


    auto PickupLayer::initXYZ(int32_t x, int32_t y, int32_t z) -> void{
this->setPosition(x, y, z);
    
}


    auto PickupLayer::paint(Graphics* graphics) -> void{

    ViewPositionBase* viewPosition = this->getViewPosition();;
    

    int32_t viewX = viewPosition->getX();;
    

    int32_t viewY = viewPosition->getY();;
    
this->animationInterface->paintXY(graphics, viewX, viewY);
    
}


    auto PickupLayer::paintThreed(Graphics* graphics) -> void{

    ViewPositionBase* viewPosition = this->getViewPosition();;
    

    int32_t viewX = viewPosition->getX();;
    

    int32_t viewY = viewPosition->getY();;
    
this->animationInterface->paintThreedXYZ(graphics, viewX, viewY, 3);
    
}


    auto PickupLayer::getPickedUpLayerInterfaceFactoryInterface() -> PickedUpLayerInterfaceFactoryInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->pickedUpLayerInterfaceFactoryInterface;
    
}


    auto PickupLayer::setPickedUp() -> void{
this->setDestroyed(true);
    
}


    auto PickupLayer::isDestroyed() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->destroyed;
    
}


    auto PickupLayer::setDestroyed(bool destroyed) -> void{
this->destroyed= destroyed;
    

                        if(this->isDestroyed())
                        
                                    {
                                    DestroyedLayerProcessor::getInstance()->add(this);
    

                                    }
                                
}


    auto PickupLayer::damage(int32_t damage, int32_t damageType) -> void{
}


    auto PickupLayer::getDamage(int32_t damageType) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return 0;
    
}


                //@Throws(Exception.constructor)
            
    auto PickupLayer::set(GL* gl) -> void{

    OpenGLSurfaceChangedInterface* openGLSurfaceChangedInterface = dynamic_cast<OpenGLSurfaceChangedInterface*>(this->animationInterface);;
    
openGLSurfaceChangedInterface->set(gl);
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKUPLAYER_CPP
