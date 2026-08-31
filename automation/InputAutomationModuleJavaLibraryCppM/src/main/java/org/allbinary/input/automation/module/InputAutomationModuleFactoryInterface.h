
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_INPUTAUTOMATIONMODULEFACTORYINTERFACE_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_INPUTAUTOMATIONMODULEFACTORYINTERFACE_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <javax/help/HelpSet.h>

      
#include <javax/swing.h>

      
#include <org/allbinary/thread/RunnableInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JPanel.h"

class InputAutomationModuleFactoryInterface
            : public Object
         {
        

    public string getName();

    public JPanel getConfigurationJPanel();

    public HelpSet getHelpSet();

                //@Throws(Exception.constructor)
            
    public RunnableInterface getInstance();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_INPUTAUTOMATIONMODULEFACTORYINTERFACE_H
