
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_OSGI_DESKTOPBUNDLE_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_OSGI_DESKTOPBUNDLE_H

            #include <vector>
        
            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <javax/swing.h>

      
#include <org/osgi/framework/Bundle.h>

      
#include <org/osgi/framework/BundleContext.h>

      
#include <bundle/input/automation/InputAutomationBundleActivator.h>

      
#include <org/allbinary/gui/dialog/BasicTextJDialog.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JDialog.h"

class DesktopBundle
            : public Object
         {

    private: static const std::string DESKTOP_SYMBOLIC_NAME = "org.knopflerfish.bundle.desktop";

    private: Bundle bundle;

public: DesktopBundle();

                //@Throws(Exception.constructor)
            
    public: void start();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_OSGI_DESKTOPBUNDLE_H
