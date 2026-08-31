
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
        

    private: static const DESKTOP_SYMBOLIC_NAME: string = "org.knopflerfish.bundle.desktop";

    private: bundle: Bundle;

public constructor (){

            super();
        
    bundleContext: BundleContext = InputAutomationBundleActivator.getBundleContext()!;;
    

                        if(bundleContext != 
                                    null
                                )
                        
                                    {
                                    
    bundleArray: std::vector<Bundle> = bundleContext!.getBundles()!;;
    




                        for (
    index: int32_t = 0;index < bundleArray!.length; index++)
        {

    bundle: Bundle = bundleArray[index]!;;
    

    symbolicName: string = bundle.getSymbolicName()!;;
    

                        if(symbolicName!.compareTo(DesktopBundle.DESKTOP_SYMBOLIC_NAME) == 0)
                        
                                    {
                                    this.bundle= bundle;
    

                                    }
                                
}


                                    }
                                
                        else {
                            
    textJDialog: JDialog = new BasicTextJDialog("BundlContext is Null");;
    
textJDialog!.setVisible(true);
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public start(){
this.bundle.start();
    
}


};

            

