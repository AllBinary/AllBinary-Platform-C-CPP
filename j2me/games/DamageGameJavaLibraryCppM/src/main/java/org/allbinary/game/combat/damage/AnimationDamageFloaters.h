
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
        



        #ifndef ORG_ALLBINARY_GAME_COMBAT_DAMAGE_ANIMATIONDAMAGEFLOATERS_H
        #define ORG_ALLBINARY_GAME_COMBAT_DAMAGE_ANIMATIONDAMAGEFLOATERS_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Graphics;
class IndexedAnimation;
class CanvasStrings;
class AllBinaryLayer;
class LogUtil;
class CommonStrings;
class CircularIndexUtil;

class ViewPositionBase;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/combat/damage/DamageFloaters.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AnimationDamageFloaters: public DamageFloaters {

    /*protected*/ public: LogUtil* logUtil;

    private: AllBinaryLayer* layerInterface;

    private: std::vector<IndexedAnimation*> animationInterfaceArray;

    private: CircularIndexUtil* circularIndexUtil;

    private: int32_t dx;

    private: int32_t dy;

public: AnimationDamageFloaters(AllBinaryLayer* layerInterface, std::vector<IndexedAnimation*> animationInterfaceArray, int32_t dx, int32_t dy);

    public: void add(int32_t damage);

    public: void paint(Graphics* graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_COMBAT_DAMAGE_ANIMATIONDAMAGEFLOATERS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_COMBAT_DAMAGE_ANIMATIONDAMAGEFLOATERS_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_COMBAT_DAMAGE_ANIMATIONDAMAGEFLOATERS_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/animation/IndexedAnimation.h>)
#include <org/allbinary/animation/IndexedAnimation.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/CanvasStrings.h>)
#include <org/allbinary/graphics/displayable/CanvasStrings.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
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
    
