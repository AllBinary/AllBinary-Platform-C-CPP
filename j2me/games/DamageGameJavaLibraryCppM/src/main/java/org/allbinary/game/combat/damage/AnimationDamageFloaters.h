
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

            #include <vector>
        
            #include "../../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/IndexedAnimation.h>

      
#include <org/allbinary/graphics/displayable/CanvasStrings.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
#include <org/allbinary/view/ViewPosition.h>

      
#include <org/allbinary/view/ViewPositionBase.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DamageFloaters.h"

class AnimationDamageFloaters: public DamageFloaters {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: AllBinaryLayer layerInterface;

    private: std::vector<IndexedAnimation> animationInterfaceArray;

    private: CircularIndexUtil circularIndexUtil;

    private: int32_t dx;

    private: int32_t dy;

public: AnimationDamageFloaters(AllBinaryLayer layerInterface, std::vector<IndexedAnimation> animationInterfaceArray, int32_t dx, int32_t dy);

    public: void add(int32_t damage);

    public: void paint(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_COMBAT_DAMAGE_ANIMATIONDAMAGEFLOATERS_H
