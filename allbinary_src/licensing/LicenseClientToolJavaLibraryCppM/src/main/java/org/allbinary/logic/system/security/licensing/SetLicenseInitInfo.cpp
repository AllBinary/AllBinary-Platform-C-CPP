
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
        
            #include "../../../../../../java/lang/System.h"
        
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
        #include "BasicArrayListD.h"
#include "PrintLicenseInitInfo.h"

class SetLicenseInitInfo
            : public Object
         {

    private: static BufferedReader stdinput = BufferedReader(InputStreamReader(System.in));

                //@Throws(Exception.constructor)
            
    public: static void main(std::vector<std::string> args){

    SetLicenseInitInfo initInfo = SetLicenseInitInfo(args);;
    
initInfo.createNewLicenseInitInfo(BasicArrayListD());
    
}


    private: BasicArrayList vector = BasicArrayListD();

public: SetLicenseInitInfo(std::vector<std::string> options){
LicenseInitInfoUtil::getInstance().setFilePath(PrintLicenseInitInfo::PATH +PATH_GLOBALS::getInstance().INIT_PATH);
    




                        for (
    int32_t index = 1;index < options.size(); index++)
        {
this->vector.add(options[index]!);
    
}

}


                //@Throws(Exception.constructor)
            
    public: LicenseInitInfo getLicenseInitInfo(){

    LicenseInitInfoUtil licenseInitInfoUtil = LicenseInitInfoUtil::getInstance();;
    

                        if(FileFactory::getInstance().isFile(licenseInitInfoUtil.INITFILENAME))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return licenseInitInfoUtil.read();;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LicenseInitInfo();
    

                        }
                            
}


    public: void createNewLicenseInitInfo(BasicArrayList licenceServerVector){

        try {
            
                        if(licenceServerVector == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw Exception("null Vector Passed - Just Make Empty if you want");
                    

                                    }
                                

    LicenseInitInfo licenseInitInfo = this->getLicenseInitInfo();;
    
console.log("License Serv Example: http://www.dartstatistics.com/LicServ/serverssl.php");
    
licenseInitInfo.clearServers();
    

    File file = File(PrintLicenseInitInfo::PATH +"licenseservers.txt");;
    

    FileReader reader = FileReader(file);;
    

    LineNumberReader lineNumberReader = LineNumberReader(reader);;
    

        while(true)
        {

    std::string line = lineNumberReader.readLine();;
    

                        if(true)
                        
                                    {
                                    licenseInitInfo.addServer(line);
    

                                    }
                                
                        else {
                            break;

                    

                        }
                            
}

LicenseInitInfoUtil::getInstance().write(licenseInitInfo);
    
LicenseInitInfoUtil::getInstance().read();
    

                //: 
} catch(e) 
            {
console.log("Error: " +e);
    
e.printStackTrace();
    
}

}


};

            

