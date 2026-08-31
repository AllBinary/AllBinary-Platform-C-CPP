
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
        



        #ifndef ORG_ALLBINARY_GAME_PART_WEAPON_BASICWEAPONPART_H
        #define ORG_ALLBINARY_GAME_PART_WEAPON_BASICWEAPONPART_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
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

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SalvoInterface.h"

class BasicWeaponPart
            : public Object
        : public PartInterface, public SalvoInterface {
        

    public static BasicWeaponPart createBasicWeaponPart(Animation animationInterface);

    public static const NULL_BASIC_WEAPON_PART: BasicWeaponPart = BasicWeaponPart.createBasicWeaponPart(NullAnimationFactory.getFactoryInstance()!.getInstance(0))!;

    private: animationInterface: Animation = NullAnimationFactory.getFactoryInstance()!.getInstance(0)!;

    private: ownerLayerInterface: AllBinaryLayer = AllBinaryLayer.NULL_ALLBINARY_LAYER;

    private: weaponProperties: WeaponProperties = WeaponProperties.NULL_WEAPON_PROPERTIES;

    private: scoreableInterface: ScoreableInterface = NoScoreable.getInstance()!;

    relativeRelationship: RelativeRelationship = RelativeRelationship.NULL_RELATIVE_RELATIONSHIP;

public constructor (Animation animationInterface, AllBinaryLayer sourceLayerInterface, WeaponProperties weaponProperties, ScoreableInterface scoreableInterface, RelativeRelationship relativeRelationship);

    public init(AllBinaryLayer sourceLayerInterface, WeaponProperties weaponProperties, ScoreableInterface scoreableInterface, RelativeRelationship relativeRelationship);

                //@Throws(Exception.constructor)
            
    public process(AllBinaryLayerManager allbinaryLayerManager, int16_t angle, int16_t otherAngle);

                //@Throws(Exception.constructor)
            
    public processScore(AllBinaryLayerManager allbinaryLayerManager, int16_t angle, int16_t otherAngle, WeaponProperties weaponProperties, ScoreableInterface scoreableInterface);

    public AllBinaryLayer getOwnerLayerInterface();

    public setOwnerLayerInterface(AllBinaryLayer ownerLayerInterface);

    public Animation getAnimationInterface();

    public setAnimationInterface(Animation animationInterface);

    public paint(Graphics graphics);

    public paintThreed(Graphics graphics);

    public WeaponProperties getWeaponProperties();

    public setWeaponProperties(WeaponProperties weaponProperties);

};

            


        #endif //ORG_ALLBINARY_GAME_PART_WEAPON_BASICWEAPONPART_H
