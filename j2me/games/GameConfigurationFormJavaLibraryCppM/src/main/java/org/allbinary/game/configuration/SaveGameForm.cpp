
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
        



            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/System.h"
        
            #include "../../../../java/lang/Long.h"
        
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <javax/microedition/lcdui/TextField.h>

      
#include <org/allbinary/game/commands/GameCommandsFactory.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/displayable/screen/CommandForm.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class SaveGameForm: public CommandForm {

    private: static CommandForm FORM = CommandForm::getNullCommandForm();

                //@Throws(Exception.constructor)
            
    public: static CommandForm createForm(CommandListener commandListener, std::string title, BasicColor backgrounBasicColor, BasicColor foregroundBasicColor){
SaveGameForm::FORM= SaveGameForm(commandListener, title, backgrounBasicColor, foregroundBasicColor);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SaveGameForm::FORM;
    
}


    public: static CommandForm getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SaveGameForm::FORM;
    
}


private: SaveGameForm(CommandListener commandListener, std::string title, BasicColor backgrounBasicColor, BasicColor foregroundBasicColor){
            super(commandListener, title, backgrounBasicColor, foregroundBasicColor);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->logUtil.putF(this->commonStrings.START, this, this->commonStrings.CONSTRUCTOR);
    

    std::string timeString = std::to_string(currentTimeMillis);;
    
this->append(TextField("Name: ", timeString, 30, TextField::ANY));
    
this->initCommands(commandListener);
    
}


    public: void initCommands(CommandListener cmdListener){

    GameCommandsFactory gameCommandsFactory = GameCommandsFactory::getInstance();;
    
this->removeAllCommands();
    
this->addCommand(gameCommandsFactory.SAVE);
    
this->addCommand(gameCommandsFactory.CLOSE_AND_SHOW_GAME_CANVAS);
    
this->setCommandListener(cmdListener);
    
}


};

            

