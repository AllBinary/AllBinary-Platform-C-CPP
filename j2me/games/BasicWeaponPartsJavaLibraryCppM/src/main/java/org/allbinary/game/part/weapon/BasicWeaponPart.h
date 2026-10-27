
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class Graphics;
class Animation;
class NullAnimationFactory;
class WeaponProperties;
#include <org/allbinary/game/part/PartInterface.h>
class NoScoreable;
class ScoreableInterface;
class RelativeRelationship;
class AllBinaryLayer;
class AllBinaryLayerManager;
class CommonStrings;
class ViewPositionBase;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/part/weapon/SalvoInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicWeaponPart
            : public virtual Object
        , public PartInterface, public SalvoInterface {

    public: static BasicWeaponPart* createBasicWeaponPart(Animation* animationInterface);

    public: static BasicWeaponPart* NULL_BASIC_WEAPON_PART;

    private: Animation* animationInterface;

    private: AllBinaryLayer* ownerLayerInterface;

    private: WeaponProperties* weaponProperties;

    private: ScoreableInterface* scoreableInterface;

    /*protected*/ public: RelativeRelationship* relativeRelationship;

public: BasicWeaponPart(Animation* animationInterface, AllBinaryLayer* sourceLayerInterface, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface, RelativeRelationship* relativeRelationship);

    public: void init(AllBinaryLayer* sourceLayerInterface, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface, RelativeRelationship* relativeRelationship);

                //@Throws(Exception.constructor)
            
    public: void process(AllBinaryLayerManager* allbinaryLayerManager, int16_t angle, int16_t otherAngle);

                //@Throws(Exception.constructor)
            
    public: void processScore(AllBinaryLayerManager* allbinaryLayerManager, int16_t angle, int16_t otherAngle, WeaponProperties* weaponProperties, ScoreableInterface* scoreableInterface);

    public: AllBinaryLayer* getOwnerLayerInterface();

    public: void setOwnerLayerInterface(AllBinaryLayer* ownerLayerInterface);

    public: Animation* getAnimationInterface();

    public: void setAnimationInterface(Animation* animationInterface);

    public: void paint(Graphics* graphics);

    public: void paintThreed(Graphics* graphics);

    public: WeaponProperties* getWeaponProperties();

    public: void setWeaponProperties(WeaponProperties* weaponProperties);

};

            


        #endif //ORG_ALLBINARY_GAME_PART_WEAPON_BASICWEAPONPART_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_PART_WEAPON_BASICWEAPONPART_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_PART_WEAPON_BASICWEAPONPART_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/animation/Animation.h>)
#include <org/allbinary/animation/Animation.h>
#endif
#if __has_include(<org/allbinary/animation/NullAnimationFactory.h>)
#include <org/allbinary/animation/NullAnimationFactory.h>
#endif
#if __has_include(<org/allbinary/game/combat/weapon/WeaponProperties.h>)
#include <org/allbinary/game/combat/weapon/WeaponProperties.h>
#endif
#if __has_include(<org/allbinary/game/part/PartInterface.h>)
#include <org/allbinary/game/part/PartInterface.h>
#endif
#if __has_include(<org/allbinary/game/score/NoScoreable.h>)
#include <org/allbinary/game/score/NoScoreable.h>
#endif
#if __has_include(<org/allbinary/game/score/ScoreableInterface.h>)
#include <org/allbinary/game/score/ScoreableInterface.h>
#endif
#if __has_include(<org/allbinary/graphics/RelativeRelationship.h>)
#include <org/allbinary/graphics/RelativeRelationship.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayerManager.h>)
#include <org/allbinary/layer/AllBinaryLayerManager.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/view/ViewPositionBase.h>)
#include <org/allbinary/view/ViewPositionBase.h>
#endif
#if __has_include("org/allbinary/game/part/weapon/SalvoInterface.h")
#include "org/allbinary/game/part/weapon/SalvoInterface.h"
#endif

        #endif
    
