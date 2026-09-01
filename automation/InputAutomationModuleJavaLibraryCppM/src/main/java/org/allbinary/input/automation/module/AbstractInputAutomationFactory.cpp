
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
        



#include <java/net/URL.h>

      
#include <javax/help/HelpSet.h>

      
#include <javax/swing.h>

      
#include <org/allbinary/logic/java/help/JavaHelpUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "InputAutomationModuleFactoryInterface.h"
#include "JPanel.h"

class AbstractInputAutomationFactory: public InputAutomationModuleFactoryInterface {

    private: std::string name;

    private: JPanel jPanel;

    private: HelpSet helpSet;

public: AbstractInputAutomationFactory(std::string name, JPanel jPanel, HelpSet helpSet){
this->name= name;
    
this->jPanel= jPanel;
    
this->helpSet= helpSet;
    
}


public: AbstractInputAutomationFactory(std::string name, JPanel jPanel){
this->name= name;
    
this->jPanel= jPanel;
    

    URL url = this->constructor.name.getResource("/help/Help.hs");;
    
this->helpSet= JavaHelpUtil::getInstance().getHelpSet(url);
    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    public: JPanel getConfigurationJPanel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->jPanel;
    
}


    public: HelpSet getHelpSet(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->helpSet;
    
}


};

            

