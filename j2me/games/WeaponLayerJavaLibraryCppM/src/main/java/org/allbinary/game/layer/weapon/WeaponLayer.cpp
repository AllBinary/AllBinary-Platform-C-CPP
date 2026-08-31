
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

      
#include <org/allbinary/animation/IndexedAnimation.h>

      
#include <org/allbinary/animation/NullAnimationFactory.h>

      
#include <org/allbinary/game/collision/CollidableBaseBehavior.h>

      
#include <org/allbinary/game/combat/destroy/DestroyedLayerProcessor.h>

      
#include <org/allbinary/game/combat/weapon/WeaponProperties.h>

      
#include <org/allbinary/game/configuration/GameConfigurationUtil.h>

      
#include <org/allbinary/game/identification/BasicGroupFactory.h>

      
#include <org/allbinary/game/multiplayer/layer/MultiPlayerGameLayer.h>

      
#include <org/allbinary/game/multiplayer/layer/RemoteInfo.h>

      
#include <org/allbinary/game/score/NoScoreable.h>

      
#include <org/allbinary/game/score/ScoreableInterface.h>

      
#include <org/allbinary/game/tick/TickableInterface.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/physics/movement/Movement.h>

      
#include <org/allbinary/view/ViewPosition.h>

      
#include <org/allbinary/view/ViewPositionBase.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CollidableWeaponBehavior.h"

class WeaponLayer: public MultiPlayerGameLayer: public TickableInterface {
        

    public static int32_t getStaticType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    private: animationInterface: Animation = NullAnimationFactory.getFactoryInstance()!.getInstance(0)!;

    initAnimationInterface: Animation;

    private: destroyedAnimationInterface: Animation;

    private: sourceLayerInterface: AllBinaryLayer = AllBinaryLayer.NULL_ALLBINARY_LAYER;

    totalDamage: int32_t= 0;

    private: initDamage: int32_t= 0;

    private: destroyed: bool = true;

    scoreableInterface: ScoreableInterface = NoScoreable.getInstance()!;

    private: movement: Movement;

    private: weaponProperties: WeaponProperties = WeaponProperties.NULL_WEAPON_PROPERTIES;

    private: const multiPlayerType: int32_t;

protected constructor (string name, RemoteInfo remoteInfo, int32_t multiPlayerType, Movement movement, Animation animationInterface, Animation destroyedAnimationInterface, Rectangle rectangle, ViewPositionBase viewPosition){
            super(remoteInfo, BasicGroupFactory.getInstance()!.NONE_ARRAY, name, rectangle, viewPosition);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.initAnimationInterface= animationInterface;
    
this.setAnimationInterface(animationInterface);
    
this.destroyedAnimationInterface= destroyedAnimationInterface;
    
this.movement= movement;
    
this.multiPlayerType= multiPlayerType;
    
}


    private: collidableWeaponBehavior: CollidableWeaponBehavior = CollidableWeaponBehavior.getNullInstance()!;

    public setCollidableInferface(CollidableBaseBehavior collidableInferface){
super.setCollidableInferface(collidableInferface);
    
this.collidableWeaponBehavior= this.getCollidableInferface() as CollidableWeaponBehavior;
    
}


                //@Throws(Exception.constructor)
            
    public initXYZ(int32_t x, int32_t y, int32_t z){
this.x= x;
    
this.y= y;
    
this.z= z;
    
}


                //@Throws(Exception.constructor)
            
    public init(AllBinaryLayer sourceLayerInterface, int32_t angle, int32_t otherAngle, WeaponProperties weaponProperties, ScoreableInterface scoreable){
this.setWeaponPropertiesP(weaponProperties);
    
this.setReadyForExplosion(false);
    
this.setAnimationInterface(this.getInitAnimationInterfaceP());
    
this.setOwnerLayerInterface(sourceLayerInterface);
    
this.collidableWeaponBehavior!.init(sourceLayerInterface);
    
this.setGroupInterfaces();
    

                        if(scoreable != 
                                    null
                                )
                        
                                    {
                                    this.scoreableInterface= scoreable;
    

                                    }
                                
this.totalDamage= 0;
    
this.initDamage= weaponProperties!.getDamage();
    
this.setDestroyed(false);
    
this.movement.init(weaponProperties!.getSpeed(), angle, otherAngle);
    
}


    setGroupInterfaces(){

    basicGroupFactory: BasicGroupFactory = BasicGroupFactory.getInstance()!;;
    

                        if(this.sourceLayerInterface!.getGroupInterface()[0] == basicGroupFactory!.ENEMY)
                        
                                    {
                                    this.setGroupInterface(basicGroupFactory!.ENEMY_ARRAY);
    

                                    }
                                
                        else {
                            this.setGroupInterface(this.sourceLayerInterface!.getGroupInterface());
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public processTick(AllBinaryLayerManager allBinaryLayerManager){

                        if(this.isExhausted() && !this.isDestroyed())
                        
                                    {
                                    
                        if(this.isReadyForExplosion())
                        
                                    {
                                    
    indexedAnimationInterface: IndexedAnimation = this.getAnimationInterface() as IndexedAnimation;;
    

    currentFrame: int32_t = indexedAnimationInterface!.getFrame()!;;
    

                        if(currentFrame < indexedAnimationInterface!.getAnimationSize() -1)
                        
                                    {
                                    indexedAnimationInterface!.nextFrame();
    

                                    }
                                
                        else {
                            this.setDestroyed(true);
    

                        }
                            

                                    }
                                
                        else {
                            
    collidableWeaponBehavior: CollidableWeaponBehavior = this.getCollidableInferface() as CollidableWeaponBehavior;;
    

                        if(collidableWeaponBehavior!.isCollided())
                        
                                    {
                                    this.setAnimationInterface(this.destroyedAnimationInterface);
    
this.getMovement()!.stop();
    
this.setReadyForExplosion(true);
    

                                    }
                                
                        else {
                            this.setDestroyed(true);
    

                        }
                            

                        }
                            

                                    }
                                
this.movement.process(this);
    
this.totalDamage += this.weaponProperties!.getDissipation();
    
}


    public bool isDestroyed(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.destroyed;
    
}


    public damage(int32_t damage, int32_t damageType){
this.totalDamage += damage *damage;
    
}


    givePoints(int32_t total){
this.scoreableInterface!.addPoints(GameConfigurationUtil.getInstance()!.getCompetitionValue() *total);
    
}


    bool isExhausted(){

                        if(this.totalDamage > this.getInitDamage() || this.totalDamage < 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    public int32_t getDamage(int32_t damageType){

                        if(!this.isExhausted())
                        
                                    {
                                    
    total: int32_t = this.getInitDamage() -this.totalDamage;;
    
this.givePoints(total);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return total;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    public setDestroyed(bool destroyed){
this.destroyed= destroyed;
    

                        if(this.isDestroyed())
                        
                                    {
                                    this.scoreableInterface= NoScoreable.getInstance();
    
DestroyedLayerProcessor.getInstance()!.add(this);
    

                                    }
                                
}


    int32_t getInitDamage(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.initDamage;
    
}


    setAnimationInterface(Animation animationInterface){
this.animationInterface= animationInterface;
    
}


    Animation getAnimationInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.animationInterface;
    
}


    public Animation getInitAnimationInterfaceP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.initAnimationInterface;
    
}


    public setInitAnimationInterfaceP(Animation initAnimationInterface){
this.initAnimationInterface= initAnimationInterface;
    
}


    public Animation getDestroyedAnimationInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.destroyedAnimationInterface;
    
}


    public AllBinaryLayer getOwnerLayerInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.sourceLayerInterface;
    
}


    public setOwnerLayerInterface(AllBinaryLayer sourceLayerInterface){
this.sourceLayerInterface= sourceLayerInterface;
    
}


    public paint(Graphics graphics){

    viewPosition: ViewPositionBase = this.getViewPosition()!;;
    
this.animationInterface!.paintXY(graphics, viewPosition!.getX() -this.getHalfWidth(), viewPosition!.getY() -this.getHalfHeight());
    
}


    public paintThreed(Graphics graphics){

    viewPosition: ViewPositionBase = this.getViewPosition()!;;
    
this.animationInterface!.paintThreedXYZ(graphics, viewPosition!.getX() -this.getHalfWidth(), viewPosition!.getY() -this.getHalfHeight(), viewPosition!.getZ() -this.getHalfDepth());
    
}


    public Movement getMovement(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.movement;
    
}


    public setMovement(Movement movement){
this.movement= movement;
    
}


    public int32_t getType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return WeaponLayer.getStaticType();;
    
}


    public int32_t getMultiPlayerType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.multiPlayerType;
    
}


    public setWeaponPropertiesP(WeaponProperties weaponProperties){
this.weaponProperties= weaponProperties;
    
}


    public WeaponProperties getWeaponPropertiesP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.weaponProperties;
    
}


    public bool implmentsTickableInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


                //@Throws(Exception.constructor)
            
    public set(GL gl){
this.initAnimationInterface!.set(gl);
    
}


};

            

