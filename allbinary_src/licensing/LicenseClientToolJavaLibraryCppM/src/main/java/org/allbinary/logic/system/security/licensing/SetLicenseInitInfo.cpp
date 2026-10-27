
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
        
            #include "java/lang/System.h"
        
#include <java/io/BufferedReader.h>

      
#include <java/io/InputStreamReader.h>

      
#include <org/allbinary/business/init/LicenseInitInfo.h>

      
#include <org/allbinary/business/init/LicenseInitInfoUtil.h>

      
#include <org/allbinary/logic/io/file/FileFactory.h>

      
#include <org/allbinary/globals/PATH_GLOBALS.h>

      
#include <java/io/File.h>

      
#include <java/io/FileReader.h>

      
#include <java/io/LineNumberReader.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/system/security/licensing/BasicArrayListD.h"
#include "org/allbinary/logic/system/security/licensing/PrintLicenseInitInfo.h"

class SetLicenseInitInfo
            : public Object
         {

    private: static BufferedReader* stdinput() { static std::unique_ptr<BufferedReader> value(new BufferedReader(new InputStreamReader(System.in))); return value.get(); }

                //@Throws(Exception.constructor)
            
    public: static void main(std::vector<std::string> args){

    SetLicenseInitInfo* initInfo = new SetLicenseInitInfo(args);;
    
initInfo->createNewLicenseInitInfo(new BasicArrayListD());
    
}


    private: BasicArrayList* vector = new BasicArrayListD();

public: SetLicenseInitInfo(std::vector<std::string> options){
LicenseInitInfoUtil::getInstance()->setFilePath(PrintLicenseInitInfo::PATH +PATH_GLOBALS::getInstance()->INIT_PATH);
    




                        for (
    int32_t index = 1;index < options.size(); index++)
        {
this->vector->add(options[index]);
    
}

}


                //@Throws(Exception.constructor)
            
    public: LicenseInitInfo* getLicenseInitInfo(){

    LicenseInitInfoUtil* licenseInitInfoUtil = LicenseInitInfoUtil::getInstance();;
    

                        if(FileFactory::getInstance()->isFile(licenseInitInfoUtil->INITFILENAME))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return licenseInitInfoUtil->read();;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new LicenseInitInfo();
    

                        }
                            
}


    public: void createNewLicenseInitInfo(BasicArrayList* licenceServerVector){

        try {
            
                        if(licenceServerVector == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw new Exception("null BasicArrayList Passed - Just Make Empty if you want");
                    

                                    }
                                

    LicenseInitInfo* licenseInitInfo = this->getLicenseInitInfo();;
    
System.out.println("License Serv Example: http://www.dartstatistics.com/LicServ/serverssl.php");
    
licenseInitInfo->clearServers();
    

    File* file = new File(PrintLicenseInitInfo::PATH +"licenseservers.txt");;
    

    FileReader* reader = new FileReader(file);;
    

    LineNumberReader* lineNumberReader = new LineNumberReader(reader);;
    

        while(true)
        {

    std::string line = lineNumberReader->readLine();;
    

                        if(true)
                        
                                    {
                                    licenseInitInfo->addServer(line);
    

                                    }
                                
                        else {
                            break;

                    

                        }
                            
}

LicenseInitInfoUtil::getInstance()->write(licenseInitInfo);
    
LicenseInitInfoUtil::getInstance()->read();
    

                //: 
} catch(Exception& e) 
            {
System.out.print("Error: " +e);
    
e.printStackTrace();
    
}

}


};

            

