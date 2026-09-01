
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

class WeaponLayer: public MultiPlayerGameLayer, public TickableInterface {

    public: static int32_t getStaticType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    private: Animation animationInterface = NullAnimationFactory::getFactoryInstance().getInstance(0);

    protected: Animation initAnimationInterface;

    private: Animation destroyedAnimationInterface;

    private: AllBinaryLayer sourceLayerInterface = AllBinaryLayer::NULL_ALLBINARY_LAYER;

    protected: int32_t totalDamage= 0;

    private: int32_t initDamage= 0;

    private: bool destroyed = true;

    protected: ScoreableInterface scoreableInterface = NoScoreable::getInstance();

    private: Movement movement;

    private: WeaponProperties weaponProperties = WeaponProperties::NULL_WEAPON_PROPERTIES;

    private: int32_t multiPlayerType;

protected: WeaponLayer(std::string name, RemoteInfo remoteInfo, int32_t multiPlayerType, Movement movement, Animation animationInterface, Animation destroyedAnimationInterface, Rectangle rectangle, ViewPositionBase viewPosition){
            super(remoteInfo, BasicGroupFactory::getInstance().NONE_ARRAY, name, rectangle, viewPosition);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->initAnimationInterface= animationInterface;
    
this->setAnimationInterface(animationInterface);
    
this->destroyedAnimationInterface= destroyedAnimationInterface;
    
this->movement= movement;
    
this->multiPlayerType= multiPlayerType;
    
}


    private: CollidableWeaponBehavior collidableWeaponBehavior = CollidableWeaponBehavior::getNullInstance();

    public: void setCollidableInferface(CollidableBaseBehavior collidableInferface){
super.setCollidableInferface(collidableInferface);
    
this->collidableWeaponBehavior= this->getCollidableInferface() as CollidableWeaponBehavior;
    
}


                //@Throws(Exception.constructor)
            
    public: void initXYZ(int32_t x, int32_t y, int32_t z){
this->x= x;
    
this->y= y;
    
this->z= z;
    
}


                //@Throws(Exception.constructor)
            
    public: void init(AllBinaryLayer sourceLayerInterface, int32_t angle, int32_t otherAngle, WeaponProperties weaponProperties, ScoreableInterface scoreable){
this->setWeaponPropertiesP(weaponProperties);
    
this->setReadyForExplosion(false);
    
this->setAnimationInterface(this->getInitAnimationInterfaceP());
    
this->setOwnerLayerInterface(sourceLayerInterface);
    
this->collidableWeaponBehavior.init(sourceLayerInterface);
    
this->setGroupInterfaces();
    

                        if(scoreable != 
                                    nullptr
                                )
                        
                                    {
                                    this->scoreableInterface= scoreable;
    

                                    }
                                
this->totalDamage= 0;
    
this->initDamage= weaponProperties.getDamage();
    
this->setDestroyed(false);
    
this->movement.init(weaponProperties.getSpeed(), angle, otherAngle);
    
}


    protected: void setGroupInterfaces(){

    BasicGroupFactory basicGroupFactory = BasicGroupFactory::getInstance();;
    

                        if(this->sourceLayerInterface.getGroupInterface()[0] == basicGroupFactory.ENEMY)
                        
                                    {
                                    this->setGroupInterface(basicGroupFactory.ENEMY_ARRAY);
    

                                    }
                                
                        else {
                            this->setGroupInterface(this->sourceLayerInterface.getGroupInterface());
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public: void processTick(AllBinaryLayerManager allBinaryLayerManager){

                        if(this->isExhausted() && !this->isDestroyed())
                        
                                    {
                                    
                        if(this->isReadyForExplosion())
                        
                                    {
                                    
    IndexedAnimation indexedAnimationInterface = this->getAnimationInterface() as IndexedAnimation;;
    

    int32_t currentFrame = indexedAnimationInterface.getFrame();;
    

                        if(currentFrame < indexedAnimationInterface.getAnimationSize() -1)
                        
                                    {
                                    indexedAnimationInterface.nextFrame();
    

                                    }
                                
                        else {
                            this->setDestroyed(true);
    

                        }
                            

                                    }
                                
                        else {
                            
    CollidableWeaponBehavior collidableWeaponBehavior = this->getCollidableInferface() as CollidableWeaponBehavior;;
    

                        if(collidableWeaponBehavior.isCollided())
                        
                                    {
                                    this->setAnimationInterface(this->destroyedAnimationInterface);
    
this->getMovement().stop();
    
this->setReadyForExplosion(true);
    

                                    }
                                
                        else {
                            this->setDestroyed(true);
    

                        }
                            

                        }
                            

                                    }
                                
this->movement.process(this);
    
this->totalDamage += this->weaponProperties.getDissipation();
    
}


    public: bool isDestroyed(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->destroyed;
    
}


    public: void damage(int32_t damage, int32_t damageType){
this->totalDamage += damage *damage;
    
}


    protected: void givePoints(int32_t total){
this->scoreableInterface.addPoints(GameConfigurationUtil::getInstance().getCompetitionValue() *total);
    
}


    protected: bool isExhausted(){

                        if(this->totalDamage > this->getInitDamage() || this->totalDamage < 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    public: int32_t getDamage(int32_t damageType){

                        if(!this->isExhausted())
                        
                                    {
                                    
    int32_t total = this->getInitDamage() -this->totalDamage;;
    
this->givePoints(total);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return total;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    public: void setDestroyed(bool destroyed){
this->destroyed= destroyed;
    

                        if(this->isDestroyed())
                        
                                    {
                                    this->scoreableInterface= NoScoreable::getInstance();
    
DestroyedLayerProcessor::getInstance().add(this);
    

                                    }
                                
}


    protected: int32_t getInitDamage(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->initDamage;
    
}


    protected: void setAnimationInterface(Animation animationInterface){
this->animationInterface= animationInterface;
    
}


    protected: Animation getAnimationInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->animationInterface;
    
}


    public: Animation getInitAnimationInterfaceP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->initAnimationInterface;
    
}


    public: void setInitAnimationInterfaceP(Animation initAnimationInterface){
this->initAnimationInterface= initAnimationInterface;
    
}


    public: Animation getDestroyedAnimationInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->destroyedAnimationInterface;
    
}


    public: AllBinaryLayer getOwnerLayerInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->sourceLayerInterface;
    
}


    public: void setOwnerLayerInterface(AllBinaryLayer sourceLayerInterface){
this->sourceLayerInterface= sourceLayerInterface;
    
}


    public: void paint(Graphics graphics){

    ViewPositionBase viewPosition = this->getViewPosition();;
    
this->animationInterface.paintXY(graphics, viewPosition.getX() -this->getHalfWidth(), viewPosition.getY() -this->getHalfHeight());
    
}


    public: void paintThreed(Graphics graphics){

    ViewPositionBase viewPosition = this->getViewPosition();;
    
this->animationInterface.paintThreedXYZ(graphics, viewPosition.getX() -this->getHalfWidth(), viewPosition.getY() -this->getHalfHeight(), viewPosition.getZ() -this->getHalfDepth());
    
}


    public: Movement getMovement(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->movement;
    
}


    public: void setMovement(Movement movement){
this->movement= movement;
    
}


    public: int32_t getType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return WeaponLayer::getStaticType();;
    
}


    public: int32_t getMultiPlayerType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->multiPlayerType;
    
}


    public: void setWeaponPropertiesP(WeaponProperties weaponProperties){
this->weaponProperties= weaponProperties;
    
}


    public: WeaponProperties getWeaponPropertiesP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->weaponProperties;
    
}


    public: bool implmentsTickableInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


                //@Throws(Exception.constructor)
            
    public: void set(GL gl){
this->initAnimationInterface.set(gl);
    
}


};

            

