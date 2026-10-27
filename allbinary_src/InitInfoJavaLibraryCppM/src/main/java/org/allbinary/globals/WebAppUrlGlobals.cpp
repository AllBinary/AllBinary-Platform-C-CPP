
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/business/init/InitInfo.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/globals/UrlGlobalsInterface.h"

class WebAppUrlGlobals: public UrlGlobalsInterface {

    private: std::string path;

    private: bool isWebappPathSet = false;

    public: bool isTestingMode(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InitInfo::getInstance()->isTesting();;
    
}


    public: std::string getWebappPath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->path;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void setWebappPath(std::string path){
path= path;
    
this->isWebappPathSet= true;
    
}


    public: std::string getTestHtmlPath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InitInfo::getInstance()->getTestHtmlPath();;
    
}


                //@Throws(Exception.constructor)
            
    public: std::string getMainPath(){

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
                            


                            throw new Exception("Webapp Path is not set");
                    

                        }
                            
}


};

            

