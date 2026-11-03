
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
        



        #ifndef ORG_ALLBINARY_GLOBALS_WEBAPPURLGLOBALS_CPP
        #define ORG_ALLBINARY_GLOBALS_WEBAPPURLGLOBALS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/globals/WebAppUrlGlobals.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/business/init/InitInfo.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/globals/UrlGlobalsInterface.h"


WebAppUrlGlobals::WebAppUrlGlobals() {
        }
        
    auto WebAppUrlGlobals::isTestingMode() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return InitInfo::getInstance()->isTesting();;
    
}


    auto WebAppUrlGlobals::getWebappPath() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->path;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto WebAppUrlGlobals::setWebappPath(std::string path) -> void{
path= path;
    
this->isWebappPathSet= true;
    
}


    auto WebAppUrlGlobals::getTestHtmlPath() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return InitInfo::getInstance()->getTestHtmlPath();;
    
}


                //@Throws(Exception.constructor)
            
    auto WebAppUrlGlobals::getMainPath() -> std::string{

    std::string mainPath = InitInfo::getInstance()->getMainPath();;
    

                        if(!StringValidationUtil::getInstance()->isEmpty(mainPath))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return mainPath;
    

                                    }
                                
                             else 
                        if(this->isWebappPathSet)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getWebappPath();;
    

                                    }
                                
                        else {
                            


                            throw Exception("Webapp Path is not set");
                    

                        }
                            
}




        #endif //ORG_ALLBINARY_GLOBALS_WEBAPPURLGLOBALS_CPP
