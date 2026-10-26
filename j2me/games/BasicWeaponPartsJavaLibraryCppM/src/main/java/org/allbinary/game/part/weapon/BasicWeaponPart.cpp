
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
        #include "SalvoInterface.h"

class BasicWeaponPart
            : public Object
        : public PartInterface, public SalvoInterface {

    public: static BasicWeaponPart createBasicWeaponPart(Animation animationInterface){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicWeaponPart(animationInterface, AllBinaryLayer::NULL_ALLBINARY_LAYER, WeaponProperties::NULL_WEAPON_PROPERTIES, NoScoreable::getInstance(), RelativeRelationship::NULL_RELATIVE_RELATIONSHIP);
    
}


    public: static const BasicWeaponPart NULL_BASIC_WEAPON_PART = BasicWeaponPart::createBasicWeaponPart(NullAnimationFactory::getFactoryInstance().getInstance(0));

    private: Animation animationInterface = NullAnimationFactory::getFactoryInstance().getInstance(0);

    private: AllBinaryLayer ownerLayerInterface = AllBinaryLayer::NULL_ALLBINARY_LAYER;

    private: WeaponProperties weaponProperties = WeaponProperties::NULL_WEAPON_PROPERTIES;

    private: ScoreableInterface scoreableInterface = NoScoreable::getInstance();

    protected: RelativeRelationship relativeRelationship = RelativeRelationship::NULL_RELATIVE_RELATIONSHIP;

public: BasicWeaponPart(Animation animationInterface, AllBinaryLayer sourceLayerInterface, WeaponProperties weaponProperties, ScoreableInterface scoreableInterface, RelativeRelationship relativeRelationship){
this->init(sourceLayerInterface, weaponProperties, scoreableInterface, relativeRelationship);
    
this->setAnimationInterface(animationInterface);
    
}


    public: void init(AllBinaryLayer sourceLayerInterface, WeaponProperties weaponProperties, ScoreableInterface scoreableInterface, RelativeRelationship relativeRelationship){
this->setOwnerLayerInterface(sourceLayerInterface);
    
this->setWeaponProperties(weaponProperties);
    
this->scoreableInterface= scoreableInterface;
    
this->relativeRelationship= relativeRelationship;
    
}


                //@Throws(Exception.constructor)
            
    public: void process(AllBinaryLayerManager allbinaryLayerManager, int16_t angle, int16_t otherAngle){
this->processScore(allbinaryLayerManager, angle, otherAngle, this->getWeaponProperties(), this->scoreableInterface);
    
}


                //@Throws(Exception.constructor)
            
    public: void processScore(AllBinaryLayerManager allbinaryLayerManager, int16_t angle, int16_t otherAngle, WeaponProperties weaponProperties, ScoreableInterface scoreableInterface){



                            throw Exception(CommonStrings::getInstance().NOT_IMPLEMENTED);
                    
}


    public: AllBinaryLayer getOwnerLayerInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->ownerLayerInterface;
    
}


    public: void setOwnerLayerInterface(AllBinaryLayer ownerLayerInterface){
this->ownerLayerInterface= ownerLayerInterface;
    
}


    public: Animation getAnimationInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->animationInterface;
    
}


    public: void setAnimationInterface(Animation animationInterface){
this->animationInterface= animationInterface;
    
}


    public: void paint(Graphics graphics){

    ViewPositionBase viewPosition = this->getOwnerLayerInterface().getViewPosition();;
    

    int32_t viewX = viewPosition.getX();;
    

    int32_t viewY = viewPosition.getY();;
    
this->animationInterface.paintXY(graphics, viewX, viewY);
    
}


    public: void paintThreed(Graphics graphics){
}


    public: WeaponProperties getWeaponProperties(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->weaponProperties;
    
}


    public: void setWeaponProperties(WeaponProperties weaponProperties){
this->weaponProperties= weaponProperties;
    
}


};

            

