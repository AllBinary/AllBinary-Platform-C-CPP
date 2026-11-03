
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_LOGGINGINITINFO_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_LOGGINGINITINFO_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/log/config/LoggingInitInfo.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>

      
#include <org/allbinary/globals/PATH_GLOBALS.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/io/AbFileLocalInputStream.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/log/config/LogConfigsData.h"
#include "org/allbinary/logic/communication/log/config/LogConfigData.h"
#include "org/allbinary/logic/communication/log/config/LogConfig.h"

const std::string LoggingInitInfo::PACKAGE = PATH_GLOBALS::getInstance()->INIT_PATH;

LoggingInitInfo::LoggingInitInfo(){
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto LoggingInitInfo::getDoc() -> Document*{

    std::string path = URLGLOBALS::getWebappPath() +LoggingInitInfo::PACKAGE;;
    

    AbPath* FILEABPATH = new AbPath(path, INITFILENAME);;
    

    AbFile* file = AbFile::createAbFileFromAbPath(FILEABPATH);;
    

    Document* document = DomDocumentHelper::create(new AbFileLocalInputStream(file));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return document;
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto LoggingInitInfo::write() -> void{

        try {
            LoggingInitInfo::hasRead= false;
    

                //: 
} catch(Exception& e) 
            {



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto LoggingInitInfo::read() -> void{

        try {
            
    Document* document = LoggingInitInfo::getDoc();;
    

    NodeList* logConfigsNodeList = document->getElementsByTagName(LogConfigsData::getInstance()->NAME);;
    

    Node* logConfigsNode = logConfigsNodeList->item(0);;
    

    BasicArrayList* logConfigNodeVector = DomSearchHelper::getAllNodes(LogConfigData::getInstance()->NAME, logConfigsNode->getChildNodes());;
    
LoggingInitInfo::logConfigInfoList= new BasicArrayListD();
    

    int32_t size = logConfigNodeVector->size();;
    




                        for (
    int32_t i = 0;i < size; i++)
        {

    Node* node = dynamic_cast<Node*>(logConfigNodeVector->get(i));;
    

    LogConfig* logConfigInfo = new LogConfig(node);;
    
LoggingInitInfo::logConfigInfoList->add(logConfigInfo);
    
}


                //: 
} catch(Exception& e) 
            {



                            throw e;
                    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto LoggingInitInfo::setHasRead(bool value) -> void{
LoggingInitInfo::hasRead= value;
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto LoggingInitInfo::updateIfNeeded() -> void{

                        if(!LoggingInitInfo::hasRead)
                        
                                    {
                                    LoggingInitInfo::read();
    
LoggingInitInfo::hasRead= true;
    

                        if(LoggingInitInfo::logConfigInfoList == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw Exception("Read Failed");
                    

                                    }
                                

                                    }
                                
}


    auto LoggingInitInfo::isValid() -> bool{

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                //: 
} catch(Exception& e) 
            {



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto LoggingInitInfo::set(BasicArrayList* logConfigInfoVector) -> void{
LoggingInitInfo::logConfigInfoList= logConfigInfoVector;
    
}


                //@Throws(Exception.constructor)
            
    auto LoggingInitInfo::get() -> BasicArrayList*{
LoggingInitInfo::updateIfNeeded();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return LoggingInitInfo::logConfigInfoList;
    
}


                //@Throws(Exception.constructor)
            
    auto LoggingInitInfo::getTypeNameList() -> BasicArrayList*{
LoggingInitInfo::updateIfNeeded();
    

    BasicArrayList* allLogTypeVector = new BasicArrayListD();;
    

    int32_t size = LoggingInitInfo::logConfigInfoList->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    LogConfig* logConfigInfo = dynamic_cast<LogConfig*>(LoggingInitInfo::logConfigInfoList->objectArray[index]);;
    

    BasicArrayList* logTypeVector = logConfigInfo->getTypeVector();;
    

                        if(logConfigInfo->isEnabled())
                        
                                    {
                                    allLogTypeVector->addAllList(logTypeVector);
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return allLogTypeVector;
    
}


                //@Throws(Exception.constructor)
            
    auto LoggingInitInfo::getTypeList() -> BasicArrayList*{
LoggingInitInfo::updateIfNeeded();
    

    BasicArrayList* allLogTypeVector = new BasicArrayListD();;
    

    int32_t size = LoggingInitInfo::logConfigInfoList->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    LogConfig* logConfigInfo = dynamic_cast<LogConfig*>(LoggingInitInfo::logConfigInfoList->objectArray[index]);;
    

    BasicArrayList* logTypeVector = logConfigInfo->getTypeVector();;
    

                        if(logConfigInfo->isEnabled())
                        
                                    {
                                    allLogTypeVector->addAllList(logTypeVector);
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return allLogTypeVector;
    
}


                //@Throws(Exception.constructor)
            
    auto LoggingInitInfo::getNumberOfLogConfigs() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return LoggingInitInfo::logConfigInfoList->size();;
    
}


    auto LoggingInitInfo::toString() -> std::string{

        try {
            
    Document* document = LoggingInitInfo::getDoc();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return XmlDocumentHelper::toString(document);;
    

                //: 
} catch(Exception& e) 
            {



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return "Error";
    
}

}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_LOGGINGINITINFO_CPP
