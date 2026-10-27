
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_WEAPON_WEAPONLAYER_CPP
        #define ORG_ALLBINARY_GAME_LAYER_WEAPON_WEAPONLAYER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/weapon/WeaponLayer.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/weapon/CollidableWeaponBehavior.h"


WeaponLayer::WeaponLayer(std::string name, RemoteInfo* remoteInfo, int32_t multiPlayerType, Movement* movement, Animation* animationInterface, Animation* destroyedAnimationInterface, Rectangle* rectangle, ViewPositionBase* viewPosition) : MultiPlayerGameLayer(remoteInfo, BasicGroupFactory::getInstance()->NONE_ARRAY, name, rectangle, viewPosition), animationInterface(NullAnimationFactory::getFactoryInstance()->getInstance(0)), sourceLayerInterface(AllBinaryLayer::NULL_ALLBINARY_LAYER), scoreableInterface(NoScoreable::getInstance()), weaponProperties(WeaponProperties::NULL_WEAPON_PROPERTIES), collidableWeaponBehavior(CollidableWeaponBehavior::getNullInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->initAnimationInterface= animationInterface;
    
this->setAnimationInterface(animationInterface);
    
this->destroyedAnimationInterface= destroyedAnimationInterface;
    
this->movement= movement;
    
this->multiPlayerType= multiPlayerType;
    
}


    auto WeaponLayer::setCollidableInferface(CollidableBaseBehavior* collidableInferface) -> void{
MultiPlayerGameLayer::setCollidableInferface(collidableInferface);
    
this->collidableWeaponBehavior= dynamic_cast<CollidableWeaponBehavior*>(this->getCollidableInferface());
    
}


                //@Throws(Exception.constructor)
            
    auto WeaponLayer::initXYZ(int32_t x, int32_t y, int32_t z) -> void{
this->x= x;
    
this->y= y;
    
this->z= z;
    
}


                //@Throws(Exception.constructor)
            
    auto WeaponLayer::init(AllBinaryLayer* sourceLayerInterface, int32_t angle, int32_t otherAngle, WeaponProperties* weaponProperties, ScoreableInterface* scoreable) -> void{
this->setWeaponPropertiesP(weaponProperties);
    
this->setReadyForExplosion(false);
    
this->setAnimationInterface(this->getInitAnimationInterfaceP());
    
this->setOwnerLayerInterface(sourceLayerInterface);
    
this->collidableWeaponBehavior->init(sourceLayerInterface);
    
this->setGroupInterfaces();
    

                        if(scoreable != 
                                    nullptr
                                )
                        
                                    {
                                    this->scoreableInterface= scoreable;
    

                                    }
                                
this->totalDamage= 0;
    
this->initDamage= weaponProperties->getDamage();
    
this->setDestroyed(false);
    
this->movement->init(weaponProperties->getSpeed(), angle, otherAngle);
    
}


    auto WeaponLayer::setGroupInterfaces() -> void{

    BasicGroupFactory* basicGroupFactory = BasicGroupFactory::getInstance();;
    

                        if(this->sourceLayerInterface->getGroupInterface()[0] == basicGroupFactory->ENEMY)
                        
                                    {
                                    this->setGroupInterface(basicGroupFactory->ENEMY_ARRAY);
    

                                    }
                                
                        else {
                            this->setGroupInterface(this->sourceLayerInterface->getGroupInterface());
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    auto WeaponLayer::processTick(AllBinaryLayerManager* allBinaryLayerManager) -> void{

                        if(this->isExhausted() && !this->isDestroyed())
                        
                                    {
                                    
                        if(this->isReadyForExplosion())
                        
                                    {
                                    
    IndexedAnimation* indexedAnimationInterface = dynamic_cast<IndexedAnimation*>(this->getAnimationInterface());;
    

    int32_t currentFrame = indexedAnimationInterface->getFrame();;
    

                        if(currentFrame < indexedAnimationInterface->getAnimationSize() -1)
                        
                                    {
                                    indexedAnimationInterface->nextFrame();
    

                                    }
                                
                        else {
                            this->setDestroyed(true);
    

                        }
                            

                                    }
                                
                        else {
                            
    CollidableWeaponBehavior* collidableWeaponBehavior = dynamic_cast<CollidableWeaponBehavior*>(this->getCollidableInferface());;
    

                        if(collidableWeaponBehavior->isCollided())
                        
                                    {
                                    this->setAnimationInterface(this->destroyedAnimationInterface);
    
this->getMovement()->stop();
    
this->setReadyForExplosion(true);
    

                                    }
                                
                        else {
                            this->setDestroyed(true);
    

                        }
                            

                        }
                            

                                    }
                                
this->movement->process(this);
    
this->totalDamage += this->weaponProperties->getDissipation();
    
}


    auto WeaponLayer::isDestroyed() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->destroyed;
    
}


    auto WeaponLayer::damage(int32_t damage, int32_t damageType) -> void{
this->totalDamage += damage *damage;
    
}


    auto WeaponLayer::givePoints(int32_t total) -> void{
this->scoreableInterface->addPoints(GameConfigurationUtil::getInstance()->getCompetitionValue() *total);
    
}


    auto WeaponLayer::isExhausted() -> bool{

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


    auto WeaponLayer::getDamage(int32_t damageType) -> int32_t{

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


    auto WeaponLayer::setDestroyed(bool destroyed) -> void{
this->destroyed= destroyed;
    

                        if(this->isDestroyed())
                        
                                    {
                                    this->scoreableInterface= NoScoreable::getInstance();
    
DestroyedLayerProcessor::getInstance()->add(this);
    

                                    }
                                
}


    auto WeaponLayer::getInitDamage() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->initDamage;
    
}


    auto WeaponLayer::setAnimationInterface(Animation* animationInterface) -> void{
this->animationInterface= animationInterface;
    
}


    auto WeaponLayer::getAnimationInterface() -> Animation*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->animationInterface;
    
}


    auto WeaponLayer::getInitAnimationInterfaceP() -> Animation*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->initAnimationInterface;
    
}


    auto WeaponLayer::setInitAnimationInterfaceP(Animation* initAnimationInterface) -> void{
this->initAnimationInterface= initAnimationInterface;
    
}


    auto WeaponLayer::getDestroyedAnimationInterface() -> Animation*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->destroyedAnimationInterface;
    
}


    auto WeaponLayer::getOwnerLayerInterface() -> AllBinaryLayer*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->sourceLayerInterface;
    
}


    auto WeaponLayer::setOwnerLayerInterface(AllBinaryLayer* sourceLayerInterface) -> void{
this->sourceLayerInterface= sourceLayerInterface;
    
}


    auto WeaponLayer::paint(Graphics* graphics) -> void{

    ViewPositionBase* viewPosition = this->getViewPosition();;
    
this->animationInterface->paintXY(graphics, viewPosition->getX() -this->getHalfWidth(), viewPosition->getY() -this->getHalfHeight());
    
}


    auto WeaponLayer::paintThreed(Graphics* graphics) -> void{

    ViewPositionBase* viewPosition = this->getViewPosition();;
    
this->animationInterface->paintThreedXYZ(graphics, viewPosition->getX() -this->getHalfWidth(), viewPosition->getY() -this->getHalfHeight(), viewPosition->getZ() -this->getHalfDepth());
    
}


    auto WeaponLayer::getMovement() -> Movement*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->movement;
    
}


    auto WeaponLayer::setMovement(Movement* movement) -> void{
this->movement= movement;
    
}


    auto WeaponLayer::getType() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return WeaponLayer::getStaticType();;
    
}


    auto WeaponLayer::getStaticType() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    auto WeaponLayer::getMultiPlayerType() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->multiPlayerType;
    
}


    auto WeaponLayer::setWeaponPropertiesP(WeaponProperties* weaponProperties) -> void{
this->weaponProperties= weaponProperties;
    
}


    auto WeaponLayer::getWeaponPropertiesP() -> WeaponProperties*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->weaponProperties;
    
}


    auto WeaponLayer::implmentsTickableInterface() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


                //@Throws(Exception.constructor)
            
    auto WeaponLayer::set(GL* gl) -> void{
this->initAnimationInterface->set(gl);
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_WEAPON_WEAPONLAYER_CPP
