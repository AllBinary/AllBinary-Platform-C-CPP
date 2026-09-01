
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
        



            #include "../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/input/automation/module/AbstractInputAutomationFactory.h>

      
#include <org/allbinary/input/automation/module/InputAutomationActionInterface.h>

      
#include <org/allbinary/input/automation/module/InputAutomationModuleData.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/GenericModuleConfigurationJPanel.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/GenericProfile.h>

      
#include <org/allbinary/input/automation/module/generic/constraints/NoImageComparatorConstraints.h>

      
#include <org/allbinary/input/automation/module/generic/constraints/NoMotionRectangleConstraints.h>

      
#include <org/allbinary/thread/RunnableInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GenericInputAutomationAction.h"
#include "GenericInputAutomationWorker.h"

class GenericModuleFactory: public AbstractInputAutomationFactory {

    private: static std::string NAME = "Generic" +InputAutomationModuleData::MODULE_NAME_END;

public: GenericModuleFactory(){
            super(NAME, GenericModuleConfigurationJPanel());
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: RunnableInterface getInstance(){

    GenericProfile genericProfile = (getConfigurationJPanel as GenericModuleConfigurationJPanel).getSelectedGenericProfile();;
    

    InputAutomationActionInterface inputAutomationActionInterface = GenericInputAutomationAction() as InputAutomationActionInterface;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GenericInputAutomationWorker(inputAutomationActionInterface, genericProfile, NoMotionRectangleConstraints(), NoImageComparatorConstraints()) as RunnableInterface;
    
}


};

            

