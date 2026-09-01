
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_INIT_INITINFOINTERFACE_H
        #define ORG_ALLBINARY_BUSINESS_INIT_INITINFOINTERFACE_H

            #include "../../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/io/path/AbPath.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class InitInfoInterface {

    bool isTesting();

    std::string getTesting();

    std::string getTestHtmlPath();

    std::string getMainPath();

    void setTesting(std::string value);

    void setTestHtmlPath(AbPath value);

    void setMainPath(AbPath value);

                //@Throws(Exception.constructor)
            
    bool isTestingValid(std::string testing);

    bool isTestHtmlPathValid(AbPath value);

    bool isMainPathValid(AbPath value);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_INIT_INITINFOINTERFACE_H
