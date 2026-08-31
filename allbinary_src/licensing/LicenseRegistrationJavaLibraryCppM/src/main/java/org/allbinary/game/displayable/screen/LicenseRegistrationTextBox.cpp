
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
        



            #include "../../../../../java/lang/Exception.h"
        
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
        

    public static const DISPLAY_COMMAND: Command = new Command("Register", StringUtil.getInstance()!.EMPTY_STRING, Command.SCREEN, 3);

    public static const SUBMIT_COMMAND: Command = new Command("Submit", StringUtil.getInstance()!.EMPTY_STRING, Command.SCREEN, 3);

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const pleaseWaitPaintable: Paintable = new SimpleTextPaintable(commonStrings!.PLEASE_WAIT, BasicColorFactory.getInstance()!.WHITE);

    private: paintable: Paintable = NullPaintable.getInstance()!;

public constructor (CommandListener cmdListener, BasicColor backgrounBasicColor, BasicColor foregroundBasicColor){
            super(cmdListener, "Enter Registration Code:", StringUtil.getInstance()!.EMPTY_STRING, 60, TextField.ANY, Font.getDefaultFont(), backgrounBasicColor, foregroundBasicColor);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public initCommands(CommandListener cmdListener){
this.removeAllCommands();
    
this.addCommand(GameCommandsFactory.getInstance()!.CLOSE_AND_SHOW_GAME_CANVAS);
    
this.addCommand(GameCommandsFactory.getInstance()!.TOGGLE_KEYBOARD);
    
this.addCommand(SUBMIT_COMMAND);
    
this.setCommandListener(cmdListener);
    
}


    public open(){

        try {
            
    virtualKeyboardEventHandler: VirtualKeyboardEventHandler = VirtualKeyboardEventHandler.getInstance()!;;
    
virtualKeyboardEventHandler!.fireEvent(virtualKeyboardEventHandler!.SHOW_EVENT);
    

                //: 
} catch(e) 
            {
this.logUtil!.put(commonStrings!.EXCEPTION, this, "open", e);
    
}

super.open();
    
this.paintable= NullPaintable.getInstance();
    
this.repaint();
    
}


    public close(){

        try {
            
    virtualKeyboardEventHandler: VirtualKeyboardEventHandler = VirtualKeyboardEventHandler.getInstance()!;;
    
virtualKeyboardEventHandler!.fireEvent(virtualKeyboardEventHandler!.HIDE_EVENT);
    

                //: 
} catch(e) 
            {
this.logUtil!.put(commonStrings!.EXCEPTION, this, "open", e);
    
}

this.paintable= this.pleaseWaitPaintable;
    
this.repaint();
    
super.close();
    
}


    public paint(Graphics graphics){
super.paint(graphics);
    
this.paintable.paint(graphics);
    
}


    public submit(){

    commandListener: CommandListener = this.getCustomCommandListener()!;;
    
commandListener!.commandAction(SUBMIT_COMMAND, this);
    
}


};

            

