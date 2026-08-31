
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
        
            #include "../../../../../../../../../java/lang/Exception.h"
        
#include <java/util/Set.h>

      
#include <javax/swing.h>

      
#include <org/allbinary/input/automation/robot/InputRobotFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DefaultComboBoxModel.h"

class InputAutomationTypeDefaultComboBoxModelFactory
            : public Object
         {
        

                //@Throws(Exception.constructor)
            
    public static DefaultComboBoxModel getInstance(){

    defaultComboBoxModel: DefaultComboBoxModel = new DefaultComboBoxModel();;
    

    set: Set = InputRobotFactory.getInstance()!.get()!.keySet()!;;
    

    nameArray: std::vector<any> = set.toArray()!;;
    

    size: int32_t = nameArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
defaultComboBoxModel!.addElement(nameArray[index]! as string);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return defaultComboBoxModel;
    
}


private constructor (){

            super();
        }


};

            

