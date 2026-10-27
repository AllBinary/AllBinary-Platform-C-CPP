
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
        



            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/File.h>

      
#include <java/io/FileReader.h>

      
#include <java/io/LineNumberReader.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/business/init/LicenseInitInfo.h>

      
#include <org/allbinary/business/init/LicenseInitInfoUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/client/XmlRpcAbeLicenseRetrievalClient.h>

      
#include <org/allbinary/globals/PATH_GLOBALS.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/system/security/licensing/BasicArrayListD.h"
#include "org/allbinary/logic/system/security/licensing/PrintLicenseInitInfo.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterfaceFactory.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/system/security/licensing/AbeLicenseInterface.h"

class LicenseClientAndServerTest
            : public Object
         {

    public: static void main(std::vector<std::string> args){

        try {
            
    LicenseClientAndServerTest* licensingTest = new LicenseClientAndServerTest(args);;
    
licensingTest->test();
    

                //: 
} catch(Exception& e) 
            {

    LogUtil* logUtil = LogUtil::getInstance();;
    
this->logUtil->put(this->commonStrings.EXCEPTION, "main()", "main()", &e);
    
}

}


    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: BasicArrayList* vector = new BasicArrayListD();

public: LicenseClientAndServerTest(std::vector<std::string> options){
LicenseInitInfoUtil::getInstance()->setFilePath(PrintLicenseInitInfo::PATH +PATH_GLOBALS::getInstance()->INIT_PATH);
    




                        for (
    int32_t index = 1;index < options.size(); index++)
        {
this->vector->add(options[index]);
    
}


                        if(options.size() < 2)
                        
                                    {
                                    
    File* file = new File(PrintLicenseInitInfo::PATH +"testlicenseservers.txt");;
    

    FileReader* reader = new FileReader(file);;
    

    LineNumberReader* lineNumberReader = new LineNumberReader(reader);;
    

        while(true)
        {

    std::string line = lineNumberReader->readLine();;
    

                        if(true)
                        
                                    {
                                    this->vector->add(line);
    

                                    }
                                
                        else {
                            break;

                    

                        }
                            
}


                                    }
                                
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void test(){

    StringMaker* stringBuffer = new StringMaker();;
    

        try {
            
    BasicArrayList* list = new BasicArrayListD();;
    

    std::string TESTING = "Testing with new licence:<br/>";;
    

    std::string PROCESSING = "Processing: <br/>";;
    

    std::string END = "<br/>End<br/>";;
    

    std::string RESULT = "Test Result: ";;
    

    int32_t size = this->vector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
stringBuffer->append(TESTING);
    

    std::string serverName = this->vector->get(index);;
    

        try {
            
    LicenseInitInfo* licenseInitInfo = new LicenseInitInfo();;
    
licenseInitInfo->addServer(serverName);
    
LicenseInitInfoUtil::getInstance()->write(licenseInitInfo);
    

    AbeClientInformationInterface* abeClientInformation = AbeClientInformationInterfaceFactory::getInstance();;
    

    XmlRpcAbeLicenseRetrievalClient* xmlRpcAbeLicenseClient = new XmlRpcAbeLicenseRetrievalClient(abeClientInformation);;
    

    AbeLicenseInterface* abeLicenseInterface = dynamic_cast<AbeLicenseInterface*>(xmlRpcAbeLicenseClient->get(
                            nullptr));;
    

                        if(abeLicenseInterface != 
                                    nullptr
                                )
                        
                                    {
                                    stringBuffer->append(PROCESSING);
    
stringBuffer->append(abeLicenseInterface->toString());
    

                                    }
                                
stringBuffer->append(END);
    
this->logUtil->putF(RESULT +stringBuffer->toString(), this, "test");
    
stringBuffer->delete(0, stringBuffer->length());
    

                //: 
} catch(Exception& e) 
            {
list->add(serverName);
    
this->logUtil->put("Test Error: " +stringBuffer->toString(), this, "test", &e);
    
}

}

this->logUtil->putF("Total Servers Failed: " +list->size() +" Failed Servers: " +list->toString(), this, "test");
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put("Test Error: " +stringBuffer->toString(), this, "test", &e);
    
}

}


};

            

