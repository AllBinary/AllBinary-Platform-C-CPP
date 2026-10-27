
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

class PtsDamageFloaters: public DamageFloaters {

    private: static BasicColorArrayIndexer* basicColorArrayIndexer() { static std::unique_ptr<BasicColorArrayIndexer> value(new BasicColorArrayIndexer(
                                                {
                                                    BasicColorFactory::getInstance()->WHITE,BasicColorFactory::getInstance()->RED,BasicColorFactory::getInstance()->YELLOW,BasicColorFactory::getInstance()->BLUE
                                                })); return value.get(); }

    protected: BasicColorSetUtil* basicSetColorUtil = BasicColorSetUtil::getInstance();

    private: AllBinaryLayer* layerInterface;

    private: std::vector<int32_t> lastDamage = std::vector<int32_t>(5);

    private: std::vector<std::vector<char>> lastDamageString = std::vector<std::vector<char>>(5, std::vector<char>(0));

    private: std::vector<int32_t> lastDamageStringSizeArray = std::vector<int32_t>(5);

    private: CircularIndexUtil* circularIndexUtil = CircularIndexUtil::createInstance(5);

    private: PrimitiveLongUtil* primitiveLongUtil;

public: PtsDamageFloaters(AllBinaryLayer* layerInterface){
this->primitiveLongUtil= PrimitiveLongUtil::createPowerOfTen(100000);
    
this->layerInterface= layerInterface;
    

    std::vector<char> CHAR_ARRAY = CharArrayFactory::getInstance()->getZeroCharArray();;
    




                        for (
    int32_t index = this->lastDamageString.size() -1;index >= 0; index--)
        {
this->lastDamageString[index]= CHAR_ARRAY;
    
}

}


    public: void add(int32_t damage){

    int32_t index = this->circularIndexUtil->getIndex();;
    
this->lastDamage[index]= damage;
    
this->lastDamageString[index]= this->primitiveLongUtil->getCharArray(this->lastDamage[index]);
    
this->lastDamageStringSizeArray[index]= this->primitiveLongUtil->getCurrentTotalDigits();
    
this->circularIndexUtil->next();
    
}


    private: MyRandomFactory* myRandomFactory = MyRandomFactory::getInstance();

    public: void paint(Graphics* graphics){

    ViewPositionBase* viewPosition = this->layerInterface->getViewPosition();;
    

    int32_t x = viewPosition->getX();;
    

    int32_t y = viewPosition->getY();;
    




                        for (
    int32_t index = this->lastDamage.size() -1;index >= 0; index--)
        {

                        if(this->lastDamage[index] != 0)
                        
                                    {
                                    
    int32_t delta = 10 *(index +2);;
    
this->basicSetColorUtil->setBasicColorP(graphics, PtsDamageFloaters::basicColorArrayIndexer()->get());
    
graphics->drawChars(this->lastDamageString[index], 0, this->lastDamageStringSizeArray[index], x -this->myRandomFactory->getNextInt(delta), y -delta, 0);
    
PtsDamageFloaters::basicColorArrayIndexer()->next();
    

                                    }
                                
this->lastDamage[index]= 0;
    
}

}


};

            

