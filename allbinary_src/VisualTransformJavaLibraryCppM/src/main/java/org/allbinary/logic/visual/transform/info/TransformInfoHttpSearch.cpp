
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOHTTPSEARCH_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOHTTPSEARCH_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/transform/info/TransformInfoHttpSearch.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/control/search/SearchRequest.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/transform/info/TransformInfoHttp.h"


TransformInfoHttpSearch::TransformInfoHttpSearch(SearchRequest* searchRequest) : TransformInfoHttp(searchRequest->getPropertiesHashMap(), searchRequest->getPageContext()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

                        if(true)
                        
                                    {
                                    this->setStoreName(searchRequest->getStoreFront()->getName());
    

                                    }
                                
                        else {
                            this->setStoreName(StringUtil::getInstance()->EMPTY_STRING);
    

                        }
                            

    std::string dataFileName = searchRequest->getXslFile();;
    
this->setTemplateFile(dataFileName);
    
}


                //@Throws(Exception.constructor)
            
    auto TransformInfoHttpSearch::getPath() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(URLGLOBALS::getMainPath());
    
stringBuffer->append(FREEBLISKET_PATH_GLOBALS::getInstance()->XSLPATH);
    
stringBuffer->append(this->getStoreName());
    
stringBuffer->append(AbPathData::getInstance()->SEPARATOR);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    
}


                //@Throws(Exception.constructor)
            
    auto TransformInfoHttpSearch::getTemplateFilePath() -> AbPath*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new AbPath(this->getPath(), this->getTemplateFile());
    
}


                //@Throws(Exception.constructor)
            
    auto TransformInfoHttpSearch::getObjectConfigFilePath() -> AbPath*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new AbPath(this->getPath(), this->getObjectConfigFile());
    
}


                //@Throws(Exception.constructor)
            
    auto TransformInfoHttpSearch::getDataFilePath() -> AbPath*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new AbPath(this->getPath(), this->getDataFile());
    
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOHTTPSEARCH_CPP
