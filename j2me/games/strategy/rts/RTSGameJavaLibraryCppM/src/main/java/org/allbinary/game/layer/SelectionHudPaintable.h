
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
        
class SelectionHudPaintable: public InitUpdatePaintable, public UpdateMyFontInterface {

    protected: const int32_t y = CommonButtons::getInstance().STANDARD_BUTTON_SIZE +17;

    private: PrimitiveLongUtil primitiveLongUtil;

    protected: const MyFontProcessor updateMyFontProcessor = UpdateMyFontProcessor(this);

    protected: MyFontProcessor myFontProcessor = updateMyFontProcessor;

    private: int32_t x= 0;

    protected: int32_t textX= 0;

    protected: int32_t imageX= 0;

    private: BasicColor basicColor = BasicColorFactory::getInstance().BLACK;

    private: int32_t color= 0;

    private: int32_t width= 0;

    private: int32_t height= 0;

    private: std::string name = StringUtil::getInstance().EMPTY_STRING;

    private: Animation animationInterface = NullAnimationFactory::getFactoryInstance().getInstance(0);

    private: const int32_t backgroundColor = BasicColorFactory::getInstance().GREY.intValue();

protected: SelectionHudPaintable();

    public: void updateMeasurement(Graphics graphics);

    public: void update();

    public: void updateSelectionInfo();

    public: void updateInfo();

    protected: PrimitiveLongUtil getPrimitiveLongUtil();

    protected: void setAnimationInterface(Animation animationInterface);

    protected: Animation getAnimationInterface();

    protected: void setName(std::string name);

    protected: std::string getName();

    public: void setBasicColorP(BasicColor basicColor);

    protected: BasicColor getBasicColorP();

    public: void setColor(int32_t color);

    public: int32_t getColor();

    protected: int32_t getWidth();

    protected: void setHeight(int32_t height);

    protected: int32_t getHeight();

    protected: int32_t getX();

    public: void paint(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_SELECTIONHUDPAINTABLE_H
