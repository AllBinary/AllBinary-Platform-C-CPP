
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
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: layerInterface: AllBinaryLayer;

    private: animationInterfaceArray: std::vector<IndexedAnimation>;

    private: const circularIndexUtil: CircularIndexUtil;

    private: dx: int32_t;

    private: dy: int32_t;

public constructor (AllBinaryLayer layerInterface, std::vector<IndexedAnimation> animationInterfaceArray, int32_t dx, int32_t dy);

    public add(int32_t damage);

    public paint(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_COMBAT_DAMAGE_ANIMATIONDAMAGEFLOATERS_H
