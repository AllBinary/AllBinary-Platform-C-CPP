
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
        



            #include "../../../../../java/lang/Exception.h"
        
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
        #include "BuildingLayer.h"

class BuildingInfoHudPaintable: public SelectionHudPaintable {
        

    private: static const instance: BuildingInfoHudPaintable = new BuildingInfoHudPaintable();

    public static BuildingInfoHudPaintable getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BuildingInfoHudPaintable.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const HEALTH: string = "Health:";

    private: const productivityHud: NumberStringHud;

    private: const efficiencyHud: NumberStringHud;

    private: const healthHud: NumberStringHud;

    private: const maxHealthHud: NumberStringHud;

    private: rtsLayer: PathFindingLayerInterface = NullPathFindingLayer.NULL_PATH_FINDING_LAYER;

    private: currentHealth: int32_t = 0;

private constructor (){

            super();
        
    numberStringHudFactory: NumberStringHudFactory = NumberStringHudFactory.getInstance()!;;
    

    productivityHud: NumberStringHud = numberStringHudFactory!.NULL_NUMBER_STRING_HUD;;
    

    efficiencyHud: NumberStringHud = numberStringHudFactory!.NULL_NUMBER_STRING_HUD;;
    

    healthHud: NumberStringHud = numberStringHudFactory!.NULL_NUMBER_STRING_HUD;;
    

    maxHealthHud: NumberStringHud = numberStringHudFactory!.NULL_NUMBER_STRING_HUD;;
    

        try {
            
    index: int32_t = 0;;
    

    basicHudFactory: BasicHudFactory = BasicHudFactory.getInstance()!;;
    

    basicColor: BasicColor = this.getBasicColorP()!;;
    

    textX: int32_t = this.textX;;
    

    y: int32_t = this.y;;
    

    firstIndex: int32_t = index;;
    

//inner=true member= isStatic=
class ProductivityNumberStringHud: public NumberStringHud {
        

 constructor (){
            super("Productivity:", 999, basicHudFactory!.ABSOLUTE, basicHudFactory!.HORIZONTAL, 0, basicColor);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public updateMeasurement(Graphics graphics){

    font: Font = graphics.getFont()!;;
    
this.updateMaxWidth= textX;
    
this.updateMaxHeight= y +((firstIndex +1) *font.getHeight());
    
super.updateMeasurement(graphics);
    
}


};

            

                    //Otherwise - statement - EmptyStmt

productivityHud= new ProductivityNumberStringHud();
    
index++;
    

    secondIndex: int32_t = index;;
    

//inner=true member= isStatic=
class EfficiencyNumberStringHud: public NumberStringHud {
        

 constructor (){
            super("Efficiency:", 999, basicHudFactory!.ABSOLUTE, basicHudFactory!.HORIZONTAL, 0, basicColor);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public updateMeasurement(Graphics graphics){
super.updateMeasurement(graphics);
    

    font: Font = graphics.getFont()!;;
    
this.updateMaxWidth= textX;
    
this.updateMaxHeight= y +((secondIndex +1) *font.getHeight());
    
}


};

            

                    //Otherwise - statement - EmptyStmt

efficiencyHud= new EfficiencyNumberStringHud();
    
index++;
    

    HEALTH: string = this.HEALTH;;
    

    thirdIndex: int32_t = index;;
    

//inner=true member= isStatic=
class HealthNumberStringHud: public NumberStringHud {
        

 constructor (){
            super(HEALTH, 99999, basicHudFactory!.ABSOLUTE, basicHudFactory!.HORIZONTAL, 0, basicColor);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public updateMeasurement(Graphics graphics){

    font: Font = graphics.getFont()!;;
    
this.updateMaxWidth= textX;
    
this.updateMaxHeight= y +((thirdIndex +1) *font.getHeight());
    
super.updateMeasurement(graphics);
    
}


};

            

                    //Otherwise - statement - EmptyStmt


    totalLength: int32_t = HEALTH.length +1;;
    
healthHud= new HealthNumberStringHud();
    

    fourthIndex: int32_t = index;;
    

//inner=true member= isStatic=
class MaxHealthNumberStringHud: public NumberStringHud {
        

 constructor (){
            super("/ ", 99999, basicHudFactory!.ABSOLUTE, basicHudFactory!.HORIZONTAL, 0, basicColor);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public updateMeasurement(Graphics graphics){
super.updateMeasurement(graphics);
    

    font: Font = graphics.getFont()!;;
    
this.updateMaxWidth= textX +(totalLength *font.getHeight());
    
this.updateMaxHeight= y +((fourthIndex +1) *font.getHeight());
    
}


};

            

                    //Otherwise - statement - EmptyStmt

maxHealthHud= new MaxHealthNumberStringHud();
    

                //: 
} catch(e) 
            {

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.put(commonStrings!.EXCEPTION, this, commonStrings!.CONSTRUCTOR, e);
    
}

this.productivityHud= productivityHud;
    
this.efficiencyHud= efficiencyHud;
    
this.healthHud= healthHud;
    
this.maxHealthHud= maxHealthHud;
    
}


    public updateMeasurement(Graphics graphics){

    font: Font = graphics.getFont()!;;
    

    totalLength: int32_t = this.HEALTH.length +MathUtil.getInstance()!.getTotalDigits(this.currentHealth);;
    
this.maxHealthHud!.setX(this.textX +MyFontProcessor.defaultStringWidth(font, totalLength));
    
this.myFontProcessor= MyFontProcessor.getInstance();
    
}


    public setBasicColorP(BasicColor basicColor){
super.setBasicColorP(basicColor);
    
this.productivityHud!.setBasicColorP(basicColor);
    
this.efficiencyHud!.setBasicColorP(basicColor);
    
this.healthHud!.setBasicColorP(basicColor);
    
this.maxHealthHud!.setBasicColorP(basicColor);
    
}


    public paint(Graphics graphics){
super.paint(graphics);
    
this.myFontProcessor!.process(graphics);
    
this.productivityHud!.paint(graphics);
    
this.efficiencyHud!.paint(graphics);
    
this.healthHud!.paint(graphics);
    
this.maxHealthHud!.paint(graphics);
    
this.getAnimationInterface()!.paintXY(graphics, this.imageX, this.y);
    
}


    public updateSelectionInfo(){

    buildingLayer: BuildingLayer = this.rtsLayer as BuildingLayer;;
    
this.setName(buildingLayer!.getName());
    
this.setAnimationInterface(buildingLayer!.getVerticleBuildAnimationInterface());
    
this.productivityHud!.set(buildingLayer!.getProductivity());
    
this.efficiencyHud!.set(buildingLayer!.getEfficiency() /100);
    
this.currentHealth= buildingLayer!.getHealthInterface()!.getHealth();
    
this.healthHud!.set(this.currentHealth);
    
this.myFontProcessor= this.updateMyFontProcessor;
    
this.maxHealthHud!.set(buildingLayer!.getHealthInterface()!.getMaxHealth());
    
}


    public setRtsLayer(PathFindingLayerInterface rtsLayer){
this.rtsLayer= rtsLayer;
    
}


};

            

