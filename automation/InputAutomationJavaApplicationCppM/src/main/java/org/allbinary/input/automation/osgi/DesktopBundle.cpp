
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
        



            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/swing.h>

      
#include <org/osgi/framework/Bundle.h>

      
#include <org/osgi/framework/BundleContext.h>

      
#include <bundle/input/automation/InputAutomationBundleActivator.h>

      
#include <org/allbinary/gui/dialog/BasicTextJDialog.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/osgi/JDialog.h"

class DesktopBundle
            : public Object
         {

    private: static inline const std::string DESKTOP_SYMBOLIC_NAME = "org.knopflerfish.bundle.desktop";

    private: Bundle* bundle;

public: DesktopBundle(){

    BundleContext* bundleContext = InputAutomationBundleActivator::getBundleContext();;
    

                        if(bundleContext != 
                                    nullptr
                                )
                        
                                    {
                                    
    std::vector<Bundle*> bundleArray = bundleContext->getBundles();;
    




                        for (
    int32_t index = 0;index < bundleArray.size(); index++)
        {

    Bundle* bundle = bundleArray[index];;
    

    std::string symbolicName = bundle->getSymbolicName();;
    

                        if(symbolicName.compare(DesktopBundle::DESKTOP_SYMBOLIC_NAME) == 0)
                        
                                    {
                                    this->bundle= bundle;
    

                                    }
                                
}


                                    }
                                
                        else {
                            
    JDialog* textJDialog = new BasicTextJDialog("BundlContext is Null");;
    
textJDialog->setVisible(true);
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public: void start(){
this->bundle->start();
    
}


};

            

