
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
        



#include <javax/microedition/lcdui/Command.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ABTextItem.h"

class CommandTextItem: public ABTextItem {

    private: Command command;

public: CommandTextItem(Command command, int32_t layout, std::string altText, BasicColor backgroundBasicColor, BasicColor foregroundBasicColor){
            super(command.getLabel(), layout, altText, backgroundBasicColor, foregroundBasicColor);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->command= command;
    
}


    public: bool isFocusable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    public: Command getCommand(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->command;
    
}


};

            

