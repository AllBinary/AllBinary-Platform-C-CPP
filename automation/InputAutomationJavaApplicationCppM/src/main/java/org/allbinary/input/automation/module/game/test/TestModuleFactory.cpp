
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
        



            #include "java/lang/Exception.h"
        
#include <javax/swing.h>

      
#include <org/allbinary/input/automation/module/AbstractInputAutomationFactory.h>

      
#include <org/allbinary/input/automation/module/InputAutomationModuleData.h>

      
#include <org/allbinary/input/automation/module/configuration/BlankModuleConfigurationJPanel.h>

      
#include <org/allbinary/thread/RunnableInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JPanel.h"

class TestModuleFactory: public AbstractInputAutomationFactory {

    private: static std::string NAME = "Test New Game" +InputAutomationModuleData::MODULE_NAME_END;

    private: BlankModuleConfigurationJPanel blankModuleConfigurationJPanel;

public: TestModuleFactory() : AbstractInputAutomationFactory(NAME, BlankModuleConfigurationJPanel()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TestModuleFactory::NAME;
    
}


    public: JPanel getConfigurationJPanel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->blankModuleConfigurationJPanel;
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: RunnableInterface getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


};

            

