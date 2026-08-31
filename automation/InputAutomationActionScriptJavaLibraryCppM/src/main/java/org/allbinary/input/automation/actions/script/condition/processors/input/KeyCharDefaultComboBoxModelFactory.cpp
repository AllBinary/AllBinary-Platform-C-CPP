
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
        



            #include "../../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../../java/lang/Character.h"
        
            #include "../../../../../../../../../java/lang/Integer.h"
        
#include <javax/swing.h>

      
#include <abbot/tester/KeyStrokeMap.h>

      
#include <org/allbinary/input/KeySingletonFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DefaultComboBoxModel.h"
#include "KeyStroke.h"

class KeyCharDefaultComboBoxModelFactory
            : public Object
         {
        

    public static DefaultComboBoxModel getInstance(){

    defaultComboBoxModel: DefaultComboBoxModel = new DefaultComboBoxModel();;
    

    keyArray: std::vector<Integer> = KeySingletonFactory.getArray()!;;
    




                        for (
    index: int32_t = 0;index < keyArray!.length; index++)
        {

    nextKey: Integer = keyArray[index]!;;
    

    keyStroke: KeyStroke = KeyStroke.getKeyStroke(nextKey!.intValue(), 0)!;;
    

    keyChar: char = KeyStrokeMap.getChar(keyStroke)!;;
    
defaultComboBoxModel!.addElement(Character.toString(keyChar));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return defaultComboBoxModel;
    
}


private constructor (){

            super();
        }


};

            

