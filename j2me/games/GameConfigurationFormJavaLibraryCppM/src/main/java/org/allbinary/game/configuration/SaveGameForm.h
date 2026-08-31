
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_SAVEGAMEFORM_H
        #define ORG_ALLBINARY_GAME_CONFIGURATION_SAVEGAMEFORM_H

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
        

    private: static FORM: CommandForm = CommandForm.getNullCommandForm()!;

                //@Throws(Exception.constructor)
            
    public static CommandForm createForm(CommandListener commandListener, string title, BasicColor backgrounBasicColor, BasicColor foregroundBasicColor);

    public static CommandForm getInstance();

private constructor (CommandListener commandListener, string title, BasicColor backgrounBasicColor, BasicColor foregroundBasicColor);

    public initCommands(CommandListener cmdListener);

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_SAVEGAMEFORM_H
