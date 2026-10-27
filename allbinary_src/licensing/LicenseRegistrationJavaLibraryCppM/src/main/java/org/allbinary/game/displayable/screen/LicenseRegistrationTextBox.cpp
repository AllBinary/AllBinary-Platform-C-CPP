
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Command.h>

      
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/TextField.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/game/commands/GameCommandsFactory.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/form/item/CustomTextBox.h>

      
#include <org/allbinary/graphics/paint/NullPaintable.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/graphics/paint/SimpleTextPaintable.h>

      
#include <org/allbinary/input/event/VirtualKeyboardEventHandler.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LicenseRegistrationTextBox: public CustomTextBox {

    public: static Command* DISPLAY_COMMAND() { static std::unique_ptr<Command> value(new Command("Register", StringUtil::getInstance()->EMPTY_STRING, Command::SCREEN, 3)); return value.get(); }

    public: static Command* SUBMIT_COMMAND() { static std::unique_ptr<Command> value(new Command("Submit", StringUtil::getInstance()->EMPTY_STRING, Command::SCREEN, 3)); return value.get(); }

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: Paintable* pleaseWaitPaintable = new SimpleTextPaintable(commonStrings.PLEASE_WAIT, BasicColorFactory::getInstance()->WHITE);

    private: Paintable* paintable = NullPaintable::getInstance();

public: LicenseRegistrationTextBox(CommandListener* cmdListener, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor) : CustomTextBox(cmdListener, "Enter Registration Code:", StringUtil::getInstance()->EMPTY_STRING, 60, TextField::ANY, Font::getDefaultFont(), backgrounBasicColor, foregroundBasicColor){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: void initCommands(CommandListener* cmdListener){
this->removeAllCommands();
    
this->addCommand(GameCommandsFactory::getInstance()->CLOSE_AND_SHOW_GAME_CANVAS);
    
this->addCommand(GameCommandsFactory::getInstance()->TOGGLE_KEYBOARD);
    
this->addCommand(SUBMIT_COMMAND());
    
this->setCommandListener(cmdListener);
    
}


    public: void open(){

        try {
            
    VirtualKeyboardEventHandler* virtualKeyboardEventHandler = VirtualKeyboardEventHandler::getInstance();;
    
virtualKeyboardEventHandler->fireEvent(virtualKeyboardEventHandler->SHOW_EVENT);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(commonStrings.EXCEPTION, this, "open", &e);
    
}

super.open();
    
this->paintable= NullPaintable::getInstance();
    
this->repaint();
    
}


    public: void close(){

        try {
            
    VirtualKeyboardEventHandler* virtualKeyboardEventHandler = VirtualKeyboardEventHandler::getInstance();;
    
virtualKeyboardEventHandler->fireEvent(virtualKeyboardEventHandler->HIDE_EVENT);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(commonStrings.EXCEPTION, this, "open", &e);
    
}

this->paintable= this->pleaseWaitPaintable;
    
this->repaint();
    
super.close();
    
}


    public: void paint(Graphics* graphics){
super.paint(graphics);
    
this->paintable->paint(graphics);
    
}


    public: void submit(){

    CommandListener* commandListener = this->getCustomCommandListener();;
    
commandListener->commandAction(SUBMIT_COMMAND(), this);
    
}


};

            

