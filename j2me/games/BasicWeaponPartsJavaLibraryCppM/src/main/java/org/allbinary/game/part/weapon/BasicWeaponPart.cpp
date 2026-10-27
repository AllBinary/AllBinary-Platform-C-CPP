
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
        



        #ifndef ORG_ALLBINARY_GAME_PART_WEAPON_BASICWEAPONPART_CPP
        #define ORG_ALLBINARY_GAME_PART_WEAPON_BASICWEAPONPART_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/part/weapon/BasicWeaponPart.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/NullAnimationFactory.h>

      
#include <org/allbinary/game/combat/weapon/WeaponProperties.h>

      
#include <org/allbinary/game/part/PartInterface.h>

      
#include <org/allbinary/game/score/NoScoreable.h>

      
#include <org/allbinary/game/score/ScoreableInterface.h>

      
#include <org/allbinary/graphics/RelativeRelationship.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/view/ViewPositionBase.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/part/weapon/SalvoInterface.h"


    auto BasicWeaponPart::createBasicWeaponPart(Animation* animationInterface) -> BasicWeaponPart*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new BasicWeaponPart(animationInterface, AllBinaryLayer::NULL_ALLBINARY_LAYER, WeaponProperties::NULL_WEAPON_PROPERTIES, NoScoreable::getInstance(), RelativeRelationship::NULL_RELATIVE_RELATIONSHIP);
    
}

BasicWeaponPart* BasicWeaponPart::NULL_BASIC_WEAPON_PART = BasicWeaponPart::createBasicWeaponPart(NullAnimationFactory::getFactoryInstance()->getInstance(0));

BasicWeaponPart::BasicWeaponPart(Animation* animationInterface, AllBinaryLayer* sourceLayerInterface, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface, RelativeRelationship* relativeRelationship) : animationInterface(NullAnimationFactory::getFactoryInstance()->getInstance(0)), ownerLayerInterface(AllBinaryLayer::NULL_ALLBINARY_LAYER), weaponProperties(WeaponProperties::NULL_WEAPON_PROPERTIES), scoreableInterface(NoScoreable::getInstance()), relativeRelationship(RelativeRelationship::NULL_RELATIVE_RELATIONSHIP){
this->init(sourceLayerInterface, weaponProperties, scoreableInterface, relativeRelationship);
    
this->setAnimationInterface(animationInterface);
    
}


    auto BasicWeaponPart::init(AllBinaryLayer* sourceLayerInterface, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface, RelativeRelationship* relativeRelationship) -> void{
this->setOwnerLayerInterface(sourceLayerInterface);
    
this->setWeaponProperties(weaponProperties);
    
this->scoreableInterface= scoreableInterface;
    
this->relativeRelationship= relativeRelationship;
    
}


                //@Throws(Exception.constructor)
            
    auto BasicWeaponPart::process(AllBinaryLayerManager* allbinaryLayerManager, int16_t angle, int16_t otherAngle) -> void{
this->processScore(allbinaryLayerManager, angle, otherAngle, this->getWeaponProperties(), this->scoreableInterface);
    
}


                //@Throws(Exception.constructor)
            
    auto BasicWeaponPart::processScore(AllBinaryLayerManager* allbinaryLayerManager, int16_t angle, int16_t otherAngle, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface) -> void{



                            throw Exception(CommonStrings::getInstance()->NOT_IMPLEMENTED);
                    
}


    auto BasicWeaponPart::getOwnerLayerInterface() -> AllBinaryLayer*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->ownerLayerInterface;
    
}


    auto BasicWeaponPart::setOwnerLayerInterface(AllBinaryLayer* ownerLayerInterface) -> void{
this->ownerLayerInterface= ownerLayerInterface;
    
}


    auto BasicWeaponPart::getAnimationInterface() -> Animation*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->animationInterface;
    
}


    auto BasicWeaponPart::setAnimationInterface(Animation* animationInterface) -> void{
this->animationInterface= animationInterface;
    
}


    auto BasicWeaponPart::paint(Graphics* graphics) -> void{

    ViewPositionBase* viewPosition = this->getOwnerLayerInterface()->getViewPosition();;
    

    int32_t viewX = viewPosition->getX();;
    

    int32_t viewY = viewPosition->getY();;
    
this->animationInterface->paintXY(graphics, viewX, viewY);
    
}


    auto BasicWeaponPart::paintThreed(Graphics* graphics) -> void{
}


    auto BasicWeaponPart::getWeaponProperties() -> WeaponProperties*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->weaponProperties;
    
}


    auto BasicWeaponPart::setWeaponProperties(WeaponProperties* weaponProperties) -> void{
this->weaponProperties= weaponProperties;
    
}




        #endif //ORG_ALLBINARY_GAME_PART_WEAPON_BASICWEAPONPART_CPP
