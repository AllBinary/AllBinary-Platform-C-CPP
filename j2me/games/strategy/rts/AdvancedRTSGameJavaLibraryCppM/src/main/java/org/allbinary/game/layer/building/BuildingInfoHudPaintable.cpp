
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2006 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_BUILDING_BUILDINGINFOHUDPAINTABLE_CPP
        #define ORG_ALLBINARY_GAME_LAYER_BUILDING_BUILDINGINFOHUDPAINTABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/building/BuildingInfoHudPaintable.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/ag/layer/hud/basic/NumberStringHud.h>

      
#include <org/allbinary/game/ag/layer/hud/basic/NumberStringHudFactory.h>

      
#include <org/allbinary/game/layer/SelectionHudPaintable.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/game/graphics/hud/BasicHudFactory.h>

      
#include <org/allbinary/game/layer/NullPathFindingLayer.h>

      
#include <org/allbinary/game/layer/PathFindingLayerInterface.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/logic/math/MathUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/building/BuildingLayer.h"

auto BuildingInfoHudPaintable::instance_owner() -> BuildingInfoHudPaintable* { static std::unique_ptr<BuildingInfoHudPaintable> value(new BuildingInfoHudPaintable()); return value.get(); }
BuildingInfoHudPaintable* BuildingInfoHudPaintable::instance = BuildingInfoHudPaintable::instance_owner();

    auto BuildingInfoHudPaintable::getInstance() -> BuildingInfoHudPaintable*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return BuildingInfoHudPaintable::instance;
    
}


BuildingInfoHudPaintable::BuildingInfoHudPaintable() : logUtil(LogUtil::getInstance()), rtsLayer(NullPathFindingLayer::NULL_PATH_FINDING_LAYER){

    NumberStringHudFactory* numberStringHudFactory = NumberStringHudFactory::getInstance();;
    

    NumberStringHud* productivityHud = numberStringHudFactory->NULL_NUMBER_STRING_HUD;;
    

    NumberStringHud* efficiencyHud = numberStringHudFactory->NULL_NUMBER_STRING_HUD;;
    

    NumberStringHud* healthHud = numberStringHudFactory->NULL_NUMBER_STRING_HUD;;
    

    NumberStringHud* maxHealthHud = numberStringHudFactory->NULL_NUMBER_STRING_HUD;;
    

        try {
            
    int32_t index = 0;;
    

    BasicHudFactory* basicHudFactory = BasicHudFactory::getInstance();;
    

    BasicColor* basicColor = this->getBasicColorP();;
    

    int32_t textX = this->textX;;
    

    int32_t y = this->y;;
    

    int32_t firstIndex = index;;
    

//inner=true member= isStatic=
class ProductivityNumberStringHud: public NumberStringHud {

    private: BasicHudFactory* basicHudFactory;

    private: BasicColor* basicColor;

    private: int32_t textX;

    private: int32_t y;

    private: int32_t firstIndex;

public: ProductivityNumberStringHud(BasicHudFactory* captured_basicHudFactory, BasicColor* captured_basicColor, ) : NumberStringHud("Productivity:", 999, basicHudFactory->ABSOLUTE, basicHudFactory->HORIZONTAL, 0, basicColor), basicHudFactory(captured_basicHudFactory), basicColor(captured_basicColor), {

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: void updateMeasurement(Graphics* graphics){

    Font* font = graphics->getFont();;
    
this->updateMaxWidth= textX;
    
this->updateMaxHeight= y +((firstIndex +1) *font->getHeight());
    
NumberStringHud::updateMeasurement(graphics);
    
}


};

            

                    //Otherwise - statement - EmptyStmt

productivityHud= new ProductivityNumberStringHud(basicHudFactory, basicColor, textX, y, firstIndex);
    
index++;
    

    int32_t secondIndex = index;;
    

//inner=true member= isStatic=
class EfficiencyNumberStringHud: public NumberStringHud {

    private: BasicHudFactory* basicHudFactory;

    private: BasicColor* basicColor;

    private: int32_t textX;

    private: int32_t y;

    private: int32_t secondIndex;

public: EfficiencyNumberStringHud(BasicHudFactory* captured_basicHudFactory, BasicColor* captured_basicColor, ) : NumberStringHud("Efficiency:", 999, basicHudFactory->ABSOLUTE, basicHudFactory->HORIZONTAL, 0, basicColor), basicHudFactory(captured_basicHudFactory), basicColor(captured_basicColor), {

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: void updateMeasurement(Graphics* graphics){
NumberStringHud::updateMeasurement(graphics);
    

    Font* font = graphics->getFont();;
    
this->updateMaxWidth= textX;
    
this->updateMaxHeight= y +((secondIndex +1) *font->getHeight());
    
}


};

            

                    //Otherwise - statement - EmptyStmt

efficiencyHud= new EfficiencyNumberStringHud(basicHudFactory, basicColor, textX, y, secondIndex);
    
index++;
    

    std::string HEALTH = this->HEALTH;;
    

    int32_t thirdIndex = index;;
    

//inner=true member= isStatic=
class HealthNumberStringHud: public NumberStringHud {

    private: BasicHudFactory* basicHudFactory;

    private: BasicColor* basicColor;

    private: int32_t textX;

    private: int32_t y;

    private: std::string HEALTH;

    private: int32_t thirdIndex;

public: HealthNumberStringHud(BasicHudFactory* captured_basicHudFactory, BasicColor* captured_basicColor, ) : NumberStringHud(HEALTH, 99999, basicHudFactory->ABSOLUTE, basicHudFactory->HORIZONTAL, 0, basicColor), basicHudFactory(captured_basicHudFactory), basicColor(captured_basicColor), {

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: void updateMeasurement(Graphics* graphics){

    Font* font = graphics->getFont();;
    
this->updateMaxWidth= textX;
    
this->updateMaxHeight= y +((thirdIndex +1) *font->getHeight());
    
NumberStringHud::updateMeasurement(graphics);
    
}


};

            

                    //Otherwise - statement - EmptyStmt


    int32_t totalLength = HEALTH.size() +1;;
    
healthHud= new HealthNumberStringHud(basicHudFactory, basicColor, textX, y, HEALTH, thirdIndex);
    

    int32_t fourthIndex = index;;
    

//inner=true member= isStatic=
class MaxHealthNumberStringHud: public NumberStringHud {

    private: BasicHudFactory* basicHudFactory;

    private: BasicColor* basicColor;

    private: int32_t textX;

    private: int32_t y;

    private: int32_t totalLength;

    private: int32_t fourthIndex;

public: MaxHealthNumberStringHud(BasicHudFactory* captured_basicHudFactory, BasicColor* captured_basicColor, ) : NumberStringHud("/ ", 99999, basicHudFactory->ABSOLUTE, basicHudFactory->HORIZONTAL, 0, basicColor), basicHudFactory(captured_basicHudFactory), basicColor(captured_basicColor), {

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: void updateMeasurement(Graphics* graphics){
NumberStringHud::updateMeasurement(graphics);
    

    Font* font = graphics->getFont();;
    
this->updateMaxWidth= textX +(totalLength *font->getHeight());
    
this->updateMaxHeight= y +((fourthIndex +1) *font->getHeight());
    
}


};

            

                    //Otherwise - statement - EmptyStmt

maxHealthHud= new MaxHealthNumberStringHud(basicHudFactory, basicColor, textX, y, totalLength, fourthIndex);
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->CONSTRUCTOR, &e);
    
}

this->productivityHud= productivityHud;
    
this->efficiencyHud= efficiencyHud;
    
this->healthHud= healthHud;
    
this->maxHealthHud= maxHealthHud;
    
}


    auto BuildingInfoHudPaintable::updateMeasurement(Graphics* graphics) -> void{

    Font* font = graphics->getFont();;
    

    int32_t totalLength = this->HEALTH.size() +MathUtil::getInstance()->getTotalDigits(this->currentHealth);;
    
this->maxHealthHud->setX(this->textX +MyFontProcessor::defaultStringWidth(font, totalLength));
    
this->myFontProcessor= MyFontProcessor::getInstance();
    
}


    auto BuildingInfoHudPaintable::setBasicColorP(BasicColor* basicColor) -> void{
SelectionHudPaintable::setBasicColorP(basicColor);
    
this->productivityHud->setBasicColorP(basicColor);
    
this->efficiencyHud->setBasicColorP(basicColor);
    
this->healthHud->setBasicColorP(basicColor);
    
this->maxHealthHud->setBasicColorP(basicColor);
    
}


    auto BuildingInfoHudPaintable::paint(Graphics* graphics) -> void{
SelectionHudPaintable::paint(graphics);
    
this->myFontProcessor->process(graphics);
    
this->productivityHud->paint(graphics);
    
this->efficiencyHud->paint(graphics);
    
this->healthHud->paint(graphics);
    
this->maxHealthHud->paint(graphics);
    
this->getAnimationInterface()->paintXY(graphics, this->imageX, this->y);
    
}


    auto BuildingInfoHudPaintable::updateSelectionInfo() -> void{

    BuildingLayer* buildingLayer = dynamic_cast<BuildingLayer*>(this->rtsLayer);;
    
this->setName(buildingLayer->getName());
    
this->setAnimationInterface(buildingLayer->getVerticleBuildAnimationInterface());
    
this->productivityHud->set(buildingLayer->getProductivity());
    
this->efficiencyHud->set(buildingLayer->getEfficiency() /100);
    
this->currentHealth= buildingLayer->getHealthInterface()->getHealth();
    
this->healthHud->set(this->currentHealth);
    
this->myFontProcessor= this->updateMyFontProcessor;
    
this->maxHealthHud->set(buildingLayer->getHealthInterface()->getMaxHealth());
    
}


    auto BuildingInfoHudPaintable::setRtsLayer(PathFindingLayerInterface* rtsLayer) -> void{
this->rtsLayer= rtsLayer;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_BUILDING_BUILDINGINFOHUDPAINTABLE_CPP
