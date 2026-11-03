
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
        



        #ifndef ORG_ALLBINARY_GAME_COMBAT_DAMAGE_PTSDAMAGEFLOATERS_CPP
        #define ORG_ALLBINARY_GAME_COMBAT_DAMAGE_PTSDAMAGEFLOATERS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/combat/damage/PtsDamageFloaters.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
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
        #include "org/allbinary/game/combat/damage/DamageFloaters.h"

auto PtsDamageFloaters::basicColorArrayIndexer_owner() -> BasicColorArrayIndexer* { static std::unique_ptr<BasicColorArrayIndexer> value(new BasicColorArrayIndexer(std::vector<BasicColor*>
                                                {
                                                    BasicColorFactory::getInstance()->WHITE,BasicColorFactory::getInstance()->RED,BasicColorFactory::getInstance()->YELLOW,BasicColorFactory::getInstance()->BLUE
                                                })); return value.get(); }
BasicColorArrayIndexer* PtsDamageFloaters::basicColorArrayIndexer = PtsDamageFloaters::basicColorArrayIndexer_owner();

PtsDamageFloaters::PtsDamageFloaters(AllBinaryLayer* layerInterface) : basicSetColorUtil(BasicColorSetUtil::getInstance()), lastDamage(std::vector<int32_t>(5)), lastDamageString(std::vector<std::vector<char>>(5, std::vector<char>(0))), lastDamageStringSizeArray(std::vector<int32_t>(5)), circularIndexUtil(CircularIndexUtil::createInstance(5)), myRandomFactory(MyRandomFactory::getInstance()){
this->primitiveLongUtil= PrimitiveLongUtil::createPowerOfTen(100000);
    
this->layerInterface= layerInterface;
    

    std::vector<char> CHAR_ARRAY = CharArrayFactory::getInstance()->getZeroCharArray();;
    




                        for (
    int32_t index = this->lastDamageString.size() -1;index >= 0; index--)
        {
this->lastDamageString[index]= CHAR_ARRAY;
    
}

}


    auto PtsDamageFloaters::add(int32_t damage) -> void{

    int32_t index = this->circularIndexUtil->getIndex();;
    
this->lastDamage[index]= damage;
    
this->lastDamageString[index]= this->primitiveLongUtil->getCharArray(this->lastDamage[index]);
    
this->lastDamageStringSizeArray[index]= this->primitiveLongUtil->getCurrentTotalDigits();
    
this->circularIndexUtil->next();
    
}


    auto PtsDamageFloaters::paint(Graphics* graphics) -> void{

    ViewPositionBase* viewPosition = this->layerInterface->getViewPosition();;
    

    int32_t x = viewPosition->getX();;
    

    int32_t y = viewPosition->getY();;
    




                        for (
    int32_t index = this->lastDamage.size() -1;index >= 0; index--)
        {

                        if(this->lastDamage[index] != 0)
                        
                                    {
                                    
    int32_t delta = 10 *(index +2);;
    
this->basicSetColorUtil->setBasicColorP(graphics, PtsDamageFloaters::basicColorArrayIndexer->get());
    
graphics->drawChars(this->lastDamageString[index], 0, this->lastDamageStringSizeArray[index], x -this->myRandomFactory->getNextInt(delta), y -delta, 0);
    
PtsDamageFloaters::basicColorArrayIndexer->next();
    

                                    }
                                
this->lastDamage[index]= 0;
    
}

}




        #endif //ORG_ALLBINARY_GAME_COMBAT_DAMAGE_PTSDAMAGEFLOATERS_CPP
