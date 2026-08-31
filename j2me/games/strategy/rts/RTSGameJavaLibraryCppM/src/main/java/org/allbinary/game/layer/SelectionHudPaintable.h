
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2003 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_SELECTIONHUDPAINTABLE_H
        #define ORG_ALLBINARY_GAME_LAYER_SELECTIONHUDPAINTABLE_H

#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/NullAnimationFactory.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/graphics/paint/InitUpdatePaintable.h>

      
#include <org/allbinary/input/motion/button/CommonButtons.h>

      
#include <org/allbinary/input/motion/button/TouchButtonLocationHelper.h>

      
#include <org/allbinary/logic/math/PrimitiveLongUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class SelectionHudPaintable: public InitUpdatePaintable: public UpdateMyFontInterface {
        

    const y: int32_t = CommonButtons.getInstance()!.STANDARD_BUTTON_SIZE +17;

    private: const primitiveLongUtil: PrimitiveLongUtil;

    const updateMyFontProcessor: MyFontProcessor = new UpdateMyFontProcessor(this);

    myFontProcessor: MyFontProcessor = updateMyFontProcessor;

    private: x: int32_t= 0;

    textX: int32_t= 0;

    imageX: int32_t= 0;

    private: basicColor: BasicColor = BasicColorFactory.getInstance()!.BLACK;

    private: color: int32_t= 0;

    private: width: int32_t= 0;

    private: height: int32_t= 0;

    private: name: string = StringUtil.getInstance()!.EMPTY_STRING;

    private: animationInterface: Animation = NullAnimationFactory.getFactoryInstance()!.getInstance(0)!;

    private: const backgroundColor: int32_t = BasicColorFactory.getInstance()!.GREY.intValue()!;

protected constructor ();

    public updateMeasurement(Graphics graphics);

    public update();

    public updateSelectionInfo();

    public updateInfo();

    PrimitiveLongUtil getPrimitiveLongUtil();

    setAnimationInterface(Animation animationInterface);

    Animation getAnimationInterface();

    setName(string name);

    string getName();

    public setBasicColorP(BasicColor basicColor);

    BasicColor getBasicColorP();

    public setColor(int32_t color);

    public int32_t getColor();

    int32_t getWidth();

    setHeight(int32_t height);

    int32_t getHeight();

    int32_t getX();

    public paint(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_SELECTIONHUDPAINTABLE_H
