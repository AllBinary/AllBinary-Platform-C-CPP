
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ABSTRACTINPUTAUTOMATIONFACTORY_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ABSTRACTINPUTAUTOMATIONFACTORY_H

#include <java/net/URL.h>

      
#include <javax/help/HelpSet.h>

      
#include <javax/swing.h>

      
#include <org/allbinary/logic/java/help/JavaHelpUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "InputAutomationModuleFactoryInterface.h"
#include "JPanel.h"

class AbstractInputAutomationFactory: public InputAutomationModuleFactoryInterface {
        

    private: name: string;

    private: jPanel: JPanel;

    private: helpSet: HelpSet;

public constructor (string name, JPanel jPanel, HelpSet helpSet);

public constructor (string name, JPanel jPanel);

    public string getName();

    public JPanel getConfigurationJPanel();

    public HelpSet getHelpSet();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ABSTRACTINPUTAUTOMATIONFACTORY_H
