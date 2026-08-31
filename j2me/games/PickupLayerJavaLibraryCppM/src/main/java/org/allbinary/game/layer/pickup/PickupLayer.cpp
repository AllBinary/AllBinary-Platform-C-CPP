
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
        



            #include "../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
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

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PickedUpLayerInterface.h"
#include "PickupableInterface.h"
#include "CountedPickedUpLayerInterfaceFactory.h"
#include "PickedUpLayerInterfaceFactoryInterface.h"

class PickupLayer: public MultiPlayerGameLayer: public PickedUpLayerInterface, public PickupableInterface {
        

    private: pickedUpLayerInterfaceFactoryInterface: PickedUpLayerInterfaceFactoryInterface = CountedPickedUpLayerInterfaceFactory.NULL_COUNTED_PICKUP_LAYER_FACTORY;

    private: destroyed: bool= false;

    private: animationInterface: Animation = NullAnimationFactory.getFactoryInstance()!.getInstance(0)!;

public constructor (string name, RemoteInfo remoteInfo, int32_t total, PickedUpLayerInterfaceFactoryInterface pickedUpLayerInterfaceFactoryInterface, Animation animationInterface, Rectangle rectangle, ViewPositionBase viewPosition){
            super(remoteInfo, BasicGroupFactory.getInstance()!.NONE_ARRAY, name, rectangle, viewPosition);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.setCollidableInferface(CollidableAlwaysPickupNeverCollideBehaviorFactory.getInstance()!.createBehavior());
    
this.setLayerWidth(10);
    
this.setLayerHeight(10);
    
this.init(pickedUpLayerInterfaceFactoryInterface, animationInterface);
    
}


    public init(PickedUpLayerInterfaceFactoryInterface pickedUpLayerInterfaceFactoryInterface, Animation animationInterface){
this.pickedUpLayerInterfaceFactoryInterface= pickedUpLayerInterfaceFactoryInterface;
    
this.animationInterface= animationInterface;
    
this.setDestroyed(false);
    
}


    public initXYZ(int32_t x, int32_t y, int32_t z){
this.setPosition(x, y, z);
    
}


    public paint(Graphics graphics){

    viewPosition: ViewPositionBase = this.getViewPosition()!;;
    

    viewX: int32_t = viewPosition!.getX()!;;
    

    viewY: int32_t = viewPosition!.getY()!;;
    
this.animationInterface!.paintXY(graphics, viewX, viewY);
    
}


    public paintThreed(Graphics graphics){

    viewPosition: ViewPositionBase = this.getViewPosition()!;;
    

    viewX: int32_t = viewPosition!.getX()!;;
    

    viewY: int32_t = viewPosition!.getY()!;;
    
this.animationInterface!.paintThreedXYZ(graphics, viewX, viewY, 3);
    
}


    public PickedUpLayerInterfaceFactoryInterface getPickedUpLayerInterfaceFactoryInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.pickedUpLayerInterfaceFactoryInterface;
    
}


    public setPickedUp(){
this.setDestroyed(true);
    
}


    public bool isDestroyed(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.destroyed;
    
}


    public setDestroyed(bool destroyed){
this.destroyed= destroyed;
    

                        if(this.isDestroyed())
                        
                                    {
                                    DestroyedLayerProcessor.getInstance()!.add(this);
    

                                    }
                                
}


    public damage(int32_t damage, int32_t damageType){
}


    public int32_t getDamage(int32_t damageType){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


                //@Throws(Exception.constructor)
            
    public set(GL gl){

    openGLSurfaceChangedInterface: OpenGLSurfaceChangedInterface = this.animationInterface as OpenGLSurfaceChangedInterface;;
    
openGLSurfaceChangedInterface!.set(gl);
    
}


};

            

