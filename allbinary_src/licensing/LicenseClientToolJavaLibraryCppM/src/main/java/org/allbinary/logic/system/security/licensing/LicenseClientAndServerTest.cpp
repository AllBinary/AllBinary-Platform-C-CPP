
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
        

    public static main(std::vector<string> args){

        try {
            
    licensingTest: LicenseClientAndServerTest = new LicenseClientAndServerTest(args);;
    
licensingTest!.test();
    

                //: 
} catch(e) 
            {

    logUtil: LogUtil = LogUtil.getInstance()!;;
    
this.logUtil!.put(this.commonStrings!.EXCEPTION, "main()", "main()", e);
    
}

}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: vector: BasicArrayList = new BasicArrayListD();

public constructor (std::vector<string> options){

            super();
        LicenseInitInfoUtil.getInstance()!.setFilePath(PrintLicenseInitInfo.PATH +PATH_GLOBALS.getInstance()!.INIT_PATH);
    




                        for (
    index: int32_t = 1;index < options.length; index++)
        {
this.vector.add(options[index]!);
    
}


                        if(options.length < 2)
                        
                                    {
                                    
    file: File = new File(PrintLicenseInitInfo.PATH +"testlicenseservers.txt");;
    

    reader: FileReader = new FileReader(file);;
    

    lineNumberReader: LineNumberReader = new LineNumberReader(reader);;
    

        while(true)
        {

    line: string = lineNumberReader!.readLine()!;;
    

                        if(line != 
                                    null
                                )
                        
                                    {
                                    this.vector.add(line);
    

                                    }
                                
                        else {
                            break;

                    

                        }
                            
}


                                    }
                                
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public test(){

    stringBuffer: StringMaker = new StringMaker();;
    

        try {
            
    list: BasicArrayList = new BasicArrayListD();;
    

    TESTING: string = "Testing with new licence:<br/>";;
    

    PROCESSING: string = "Processing: <br/>";;
    

    END: string = "<br/>End<br/>";;
    

    RESULT: string = "Test Result: ";;
    

    size: int32_t = this.vector.size()!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
stringBuffer!.append(TESTING);
    

    serverName: string = this.vector.get(index) as string;;
    

        try {
            
    licenseInitInfo: LicenseInitInfo = new LicenseInitInfo();;
    
licenseInitInfo!.addServer(serverName);
    
LicenseInitInfoUtil.getInstance()!.write(licenseInitInfo);
    

    abeClientInformation: AbeClientInformationInterface = AbeClientInformationInterfaceFactory.getInstance()!;;
    

    xmlRpcAbeLicenseClient: XmlRpcAbeLicenseRetrievalClient = new XmlRpcAbeLicenseRetrievalClient(abeClientInformation);;
    

    abeLicenseInterface: AbeLicenseInterface = xmlRpcAbeLicenseClient!.get(
                            nullptr) as AbeLicenseInterface;;
    

                        if(abeLicenseInterface != 
                                    null
                                )
                        
                                    {
                                    stringBuffer!.append(PROCESSING);
    
stringBuffer!.append(abeLicenseInterface!.toString());
    

                                    }
                                
stringBuffer!.append(END);
    
this.logUtil!.putF(RESULT +stringBuffer!.toString(), this, "test");
    
stringBuffer!.delete(0, stringBuffer!.length());
    

                //: 
} catch(e) 
            {
list.add(serverName);
    
this.logUtil!.put("Test Error: " +stringBuffer!.toString(), this, "test", e);
    
}

}

this.logUtil!.putF("Total Servers Failed: " +list.size() +" Failed Servers: " +list.toString(), this, "test");
    

                //: 
} catch(e) 
            {
this.logUtil!.put("Test Error: " +stringBuffer!.toString(), this, "test", e);
    
}

}


};

            

