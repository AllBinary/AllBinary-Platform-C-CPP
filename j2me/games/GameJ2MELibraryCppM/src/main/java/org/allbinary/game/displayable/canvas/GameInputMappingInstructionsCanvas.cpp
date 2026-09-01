
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
        
            #include "../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Command.h>

      
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/game/paint/ColorFillBasePaintable.h>

      
#include <org/allbinary/game/paint/ColorFillPaintableFactory.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/graphics/draw/DrawStringUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameCommandCanvas.h"

class GameInputMappingInstructionsCanvas: public GameCommandCanvas {

    public: static const Command DISPLAY = Command("Help", StringUtil::getInstance().EMPTY_STRING, Command::SCREEN, 1);

    public: static const Command CLOSE = Command("Close", StringUtil::getInstance().EMPTY_STRING, Command::SCREEN, 1);

    public: static const std::string NAME = "GameInputMappingInstructionsCanvas";

    private: const DrawStringUtil drawStringUtil = DrawStringUtil::getInstance();

    protected: const std::string TITLE = "Input Instructions";

    private: const std::vector<std::string> instructions = 
                                                        {
                                                            "Add Input Mapping:","1. Select the desired action by generating a currently defined input for a given action.","(Example: Press the '1' key to select the Fire action)","2. Make the newly desired input for the selected action.","(Example: Press 'f' to add it to the selected action)","Note: If the input is already mapped to another action then it will not be added. You","will need to deleted from the other action before adding it to another.","Warning: Not all keys map for a given platform and show as Unknown.",StringUtil::getInstance().EMPTY_STRING,"Remove Input Mapping:","1. Select the desired action by generating a currently defined input for a given action.","(Example: Press the key '1' to select the Fire action)","2. Select a mapped input for the selected action.","(Example: Press the key '1' to select the '1' key input for the selected Fire action)","3. Press the Delete Key."
                                                        };

    private: ColorFillBasePaintable colorFillPaintable;

    private: int32_t anchor = Anchor::TOP_LEFT;

public: GameInputMappingInstructionsCanvas(CommandListener commandListener, AllBinaryGameLayerManager allBinaryGameLayerManager){
            super(commandListener, GameInputMappingInstructionsCanvas::NAME, allBinaryGameLayerManager.getBackgroundBasicColor(), allBinaryGameLayerManager.getForegroundBasicColor());
                    

                            //For kotlin this is before the body of the constructor.
                    
this->logUtil.putF(this->commonStrings.START, this, this->commonStrings.CONSTRUCTOR);
    
this->colorFillPaintable= ColorFillPaintableFactory::getInstance().getInstance(allBinaryGameLayerManager.getBackgroundBasicColor(), false);
    
}


    public: void initCommands(CommandListener cmdListener){
this->removeAllCommands();
    
this->addCommand(GameInputMappingInstructionsCanvas::CLOSE);
    
this->setCommandListener(cmdListener);
    
}


    public: void paint(Graphics graphics){
this->myFontProcessor.process(graphics);
    
this->colorFillPaintable.paint(graphics);
    

    int32_t halfWidth = this->displayInfo.getLastHalfWidth();;
    

    int32_t beginWidth = (graphics.getFont().stringWidth(this->TITLE)>>1);;
    
graphics.setColor(this->foregroundColor);
    
graphics.drawString(this->TITLE, halfWidth -beginWidth, this->fontHeight, this->anchor);
    
this->drawStringUtil.drawCenterStrings(graphics, this->instructions, this->displayInfo.getLastWidth(), this->fontHeight, halfWidth, 3 *this->fontHeight);
    
super.paint(graphics);
    
}


};

            

