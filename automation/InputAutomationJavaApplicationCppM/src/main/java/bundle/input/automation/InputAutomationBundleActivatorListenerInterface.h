
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
        



        #ifndef BUNDLE_INPUT_AUTOMATION_INPUTAUTOMATIONBUNDLEACTIVATORLISTENERINTERFACE_H
        #define BUNDLE_INPUT_AUTOMATION_INPUTAUTOMATIONBUNDLEACTIVATORLISTENERINTERFACE_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class InputAutomationBundleActivatorListenerInterface {

                //@Throws(Exception.constructor)
            
    public: virtual void registerAsService() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void useServices() = 0;

};

            


        #endif //BUNDLE_INPUT_AUTOMATION_INPUTAUTOMATIONBUNDLEACTIVATORLISTENERINTERFACE_H
