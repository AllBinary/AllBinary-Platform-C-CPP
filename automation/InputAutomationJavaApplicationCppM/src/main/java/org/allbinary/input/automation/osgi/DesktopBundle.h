
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/swing.h>
class Bundle;
class BundleContext;
class InputAutomationBundleActivator;
class BasicTextJDialog;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class JDialog;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class DesktopBundle
            : public virtual Object
         {

    private: static inline const std::string DESKTOP_SYMBOLIC_NAME = "org.knopflerfish.bundle.desktop";

    private: Bundle* bundle;

public: DesktopBundle();

                //@Throws(Exception.constructor)
            
    public: void start();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_OSGI_DESKTOPBUNDLE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_OSGI_DESKTOPBUNDLE_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_OSGI_DESKTOPBUNDLE_H_COMPLETE
        #if __has_include(<javax/swing.h>)
#include <javax/swing.h>
#endif
#if __has_include(<org/osgi/framework/Bundle.h>)
#include <org/osgi/framework/Bundle.h>
#endif
#if __has_include(<org/osgi/framework/BundleContext.h>)
#include <org/osgi/framework/BundleContext.h>
#endif
#if __has_include(<bundle/input/automation/InputAutomationBundleActivator.h>)
#include <bundle/input/automation/InputAutomationBundleActivator.h>
#endif
#if __has_include(<org/allbinary/gui/dialog/BasicTextJDialog.h>)
#include <org/allbinary/gui/dialog/BasicTextJDialog.h>
#endif
#if __has_include("org/allbinary/input/automation/osgi/JDialog.h")
#include "org/allbinary/input/automation/osgi/JDialog.h"
#endif

        #endif
    
