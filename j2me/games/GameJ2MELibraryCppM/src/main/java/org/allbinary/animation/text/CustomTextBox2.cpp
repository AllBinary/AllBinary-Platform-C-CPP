
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <javax/microedition/lcdui/Font.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/form/item/CustomTextBox.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CustomTextBox2: public CustomTextBox {
        

public constructor (CommandListener cmdListener, string label, string text, int32_t maxSize, int32_t constraints, Font font, BasicColor backgroundBasicColor, BasicColor foregroundBasicColor){
            super(cmdListener, label, text, maxSize, constraints, font, backgroundBasicColor, foregroundBasicColor);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.getTextFieldItem()!.setFocus(true);
    
}


};

            

