
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
        
            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
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
        #include "BasicArrayListD.h"
#include "PrintLicenseInitInfo.h"
#include "AbeClientInformationInterfaceFactory.h"
#include "AbeClientInformationInterface.h"
#include "AbeLicenseInterface.h"

class LicenseClientAndServerTest
            : public Object
         {

    public: static void main(std::vector<std::string> args){

        try {
            
    LicenseClientAndServerTest licensingTest = LicenseClientAndServerTest(args);;
    
licensingTest.test();
    

                //: 
} catch(e) 
            {

    LogUtil logUtil = LogUtil::getInstance();;
    
this->logUtil.put(this->commonStrings.EXCEPTION, "main()", "main()", e);
    
}

}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: BasicArrayList vector = BasicArrayListD();

public: LicenseClientAndServerTest(std::vector<std::string> options){
LicenseInitInfoUtil::getInstance().setFilePath(PrintLicenseInitInfo::PATH +PATH_GLOBALS::getInstance().INIT_PATH);
    




                        for (
    int32_t index = 1;index < options.size(); index++)
        {
this->vector.add(options[index]!);
    
}


                        if(options.size() < 2)
                        
                                    {
                                    
    File file = File(PrintLicenseInitInfo::PATH +"testlicenseservers.txt");;
    

    FileReader reader = FileReader(file);;
    

    LineNumberReader lineNumberReader = LineNumberReader(reader);;
    

        while(true)
        {

    std::string line = lineNumberReader.readLine();;
    

                        if(true)
                        
                                    {
                                    this->vector.add(line);
    

                                    }
                                
                        else {
                            break;

                    

                        }
                            
}


                                    }
                                
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void test(){

    StringMaker stringBuffer = StringMaker();;
    

        try {
            
    BasicArrayList list = BasicArrayListD();;
    

    std::string TESTING = "Testing with new licence:<br/>";;
    

    std::string PROCESSING = "Processing: <br/>";;
    

    std::string END = "<br/>End<br/>";;
    

    std::string RESULT = "Test Result: ";;
    

    int32_t size = this->vector.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
stringBuffer.append(TESTING);
    

    std::string serverName = this->vector.get(index) as string;;
    

        try {
            
    LicenseInitInfo licenseInitInfo = LicenseInitInfo();;
    
licenseInitInfo.addServer(serverName);
    
LicenseInitInfoUtil::getInstance().write(licenseInitInfo);
    

    AbeClientInformationInterface abeClientInformation = AbeClientInformationInterfaceFactory::getInstance();;
    

    XmlRpcAbeLicenseRetrievalClient xmlRpcAbeLicenseClient = XmlRpcAbeLicenseRetrievalClient(abeClientInformation);;
    

    AbeLicenseInterface abeLicenseInterface = xmlRpcAbeLicenseClient.get(
                            nullptr) as AbeLicenseInterface;;
    

                        if(abeLicenseInterface != 
                                    nullptr
                                )
                        
                                    {
                                    stringBuffer.append(PROCESSING);
    
stringBuffer.append(abeLicenseInterface.toString());
    

                                    }
                                
stringBuffer.append(END);
    
this->logUtil.putF(RESULT +stringBuffer.toString(), this, "test");
    
stringBuffer.delete(0, stringBuffer.length());
    

                //: 
} catch(e) 
            {
list.add(serverName);
    
this->logUtil.put("Test Error: " +stringBuffer.toString(), this, "test", e);
    
}

}

this->logUtil.putF("Total Servers Failed: " +list.size() +" Failed Servers: " +list.toString(), this, "test");
    

                //: 
} catch(e) 
            {
this->logUtil.put("Test Error: " +stringBuffer.toString(), this, "test", e);
    
}

}


};

            

