
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

            #include <vector>
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/rand/MyRandomFactory.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorArrayIndexer.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/color/BasicColorSetUtil.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/java/character/CharArrayFactory.h>

      
#include <org/allbinary/logic/math/PrimitiveLongUtil.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
#include <org/allbinary/view/ViewPosition.h>

      
#include <org/allbinary/view/ViewPositionBase.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DamageFloaters.h"

class PtsDamageFloaters: public DamageFloaters {

    private: static const BasicColorArrayIndexer basicColorArrayIndexer = BasicColorArrayIndexer(
                                                {
                                                    BasicColorFactory::getInstance().WHITE,BasicColorFactory::getInstance().RED,BasicColorFactory::getInstance().YELLOW,BasicColorFactory::getInstance().BLUE
                                                });

    protected: const BasicColorSetUtil basicSetColorUtil = BasicColorSetUtil::getInstance();

    private: AllBinaryLayer layerInterface;

    private: std::vector<int32_t> lastDamage = new Array(5);

    private: std::vector<std::vector<char>> lastDamageString = new Array(5).fill(null).map(() => new Array(0).fill(0));

    private: std::vector<int32_t> lastDamageStringSizeArray = new Array(5);

    private: CircularIndexUtil circularIndexUtil = CircularIndexUtil::createInstance(5);

    private: PrimitiveLongUtil primitiveLongUtil;

public: PtsDamageFloaters(AllBinaryLayer layerInterface);

    public: void add(int32_t damage);

    private: const MyRandomFactory myRandomFactory = MyRandomFactory::getInstance();

    public: void paint(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_COMBAT_DAMAGE_PTSDAMAGEFLOATERS_H
