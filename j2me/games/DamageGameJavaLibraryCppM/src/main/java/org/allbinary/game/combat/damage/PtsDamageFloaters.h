
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
        



        #ifndef ORG_ALLBINARY_GAME_COMBAT_DAMAGE_PTSDAMAGEFLOATERS_H
        #define ORG_ALLBINARY_GAME_COMBAT_DAMAGE_PTSDAMAGEFLOATERS_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class Graphics;
class MyRandomFactory;
class BasicColor;
class BasicColorArrayIndexer;
class BasicColorFactory;
class BasicColorSetUtil;
class AllBinaryLayer;
class CharArrayFactory;
class PrimitiveLongUtil;
class CircularIndexUtil;

class ViewPositionBase;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/combat/damage/DamageFloaters.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PtsDamageFloaters: public DamageFloaters {

    private: static BasicColorArrayIndexer* basicColorArrayIndexer_owner();
    private: static BasicColorArrayIndexer* basicColorArrayIndexer;

    /*protected*/ public: BasicColorSetUtil* basicSetColorUtil;

    private: AllBinaryLayer* layerInterface;

    private: std::vector<int32_t> lastDamage;

    private: std::vector<std::vector<char>> lastDamageString;

    private: std::vector<int32_t> lastDamageStringSizeArray;

    private: CircularIndexUtil* circularIndexUtil;

    private: PrimitiveLongUtil* primitiveLongUtil;

public: PtsDamageFloaters(AllBinaryLayer* layerInterface);

    public: void add(int32_t damage);

    private: MyRandomFactory* myRandomFactory;

    public: void paint(Graphics* graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_COMBAT_DAMAGE_PTSDAMAGEFLOATERS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_COMBAT_DAMAGE_PTSDAMAGEFLOATERS_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_COMBAT_DAMAGE_PTSDAMAGEFLOATERS_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/game/rand/MyRandomFactory.h>)
#include <org/allbinary/game/rand/MyRandomFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorArrayIndexer.h>)
#include <org/allbinary/graphics/color/BasicColorArrayIndexer.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorFactory.h>)
#include <org/allbinary/graphics/color/BasicColorFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorSetUtil.h>)
#include <org/allbinary/graphics/color/BasicColorSetUtil.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/logic/java/character/CharArrayFactory.h>)
#include <org/allbinary/logic/java/character/CharArrayFactory.h>
#endif
#if __has_include(<org/allbinary/logic/math/PrimitiveLongUtil.h>)
#include <org/allbinary/logic/math/PrimitiveLongUtil.h>
#endif
#if __has_include(<org/allbinary/util/CircularIndexUtil.h>)
#include <org/allbinary/util/CircularIndexUtil.h>
#endif

#if __has_include(<org/allbinary/view/ViewPositionBase.h>)
#include <org/allbinary/view/ViewPositionBase.h>
#endif
#if __has_include("org/allbinary/game/combat/damage/DamageFloaters.h")
#include "org/allbinary/game/combat/damage/DamageFloaters.h"
#endif

        #endif
    
