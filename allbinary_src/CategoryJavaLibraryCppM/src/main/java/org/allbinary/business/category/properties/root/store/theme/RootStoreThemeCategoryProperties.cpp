
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
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <org/allbinary/business/category/properties/root/store/RootStoreCategoryProperties.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpStoreInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class RootStoreThemeCategoryProperties: public RootStoreCategoryProperties {

public: RootStoreThemeCategoryProperties(TransformInfoInterface* transformInfoInterface) : RootStoreCategoryProperties(transformInfoInterface){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


public: RootStoreThemeCategoryProperties(TransformInfoInterface* transformInfoInterface, AbPath* abPath) : RootStoreCategoryProperties(transformInfoInterface, abPath){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


public: RootStoreThemeCategoryProperties(TransformInfoInterface* transformInfoInterface, Node* node) : RootStoreCategoryProperties(transformInfoInterface, node){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


public: RootStoreThemeCategoryProperties(TransformInfoInterface* transformInfoInterface, HashMap<Object*, Object*>* categoryPropertiesHashMap) : RootStoreCategoryProperties(transformInfoInterface, categoryPropertiesHashMap){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    public: void initPath(){

    TransformInfoHttpStoreInterface* transformInfoHttpStoreInterface = dynamic_cast<TransformInfoHttpStoreInterface*>(this->transformInfoInterface);;
    

    StoreFrontInterface* storeFrontInterface = StoreFrontFactory::getInstance(transformInfoHttpStoreInterface->getStoreName());;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(AbPathData::getInstance()->SEPARATOR);
    
stringBuffer->append(FREEBLISKET_PATH_GLOBALS::getInstance()->XSLPATH);
    
stringBuffer->append(storeFrontInterface->getName());
    
stringBuffer->append(AbPathData::getInstance()->SEPARATOR);
    
stringBuffer->append(FREEBLISKET_PATH_GLOBALS::getInstance()->THEMEPATH);
    

    AbPath* abPath = new AbPath(stringBuffer->toString(), StringUtil::getInstance()->EMPTY_STRING);;
    

    HttpServletRequest* httpServletRequest = dynamic_cast<HttpServletRequest*>(transformInfoHttpStoreInterface->getPageContext()->getRequest());;
    
this->webAppAbPath= new AbPath(httpServletRequest->getContextPath() +abPath->toString(), StringUtil::getInstance()->EMPTY_STRING);
    
this->setRootFilePath(new AbPath(URLGLOBALS::getMainPath() +abPath->toString(), StringUtil::getInstance()->EMPTY_STRING));
    
}


};

            

