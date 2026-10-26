
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
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/System.h"
        
#include <org/allbinary/business/init/LicenseInitInfo.h>

      
#include <org/allbinary/business/init/LicenseInitInfoUtil.h>

      
#include <org/allbinary/logic/io/file/FileFactory.h>

      
#include <org/allbinary/globals/PATH_GLOBALS.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PrintLicenseInitInfo
            : public Object
         {

    public: static const std::string PATH = "G:\\mnt\\bc\\mydev\\work\\allbinary_src\\licensing\\data\\";

                //@Throws(Exception.constructor)
            
    public: static void main(std::vector<std::string> args){

    PrintLicenseInitInfo initInfo = PrintLicenseInitInfo(args);;
    
initInfo.printInitInfo();
    
}


public: PrintLicenseInitInfo(std::vector<std::string> options){
LicenseInitInfoUtil::getInstance().setFilePath(PrintLicenseInitInfo::PATH +PATH_GLOBALS::getInstance().INIT_PATH);
    
}


                //@Throws(Exception.constructor)
            
    public: LicenseInitInfo getLicenseInitInfo(){

    LicenseInitInfoUtil licenseInitInfoUtil = LicenseInitInfoUtil::getInstance();;
    

                        if(FileFactory::getInstance().isFile(licenseInitInfoUtil.getFilePath()))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return licenseInitInfoUtil.read();;
    

                                    }
                                
                        else {
                            console.log("No Licence File at: " +licenseInitInfoUtil.getFilePath());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LicenseInitInfo();
    

                        }
                            
}


    public: void printInitInfo(){

        try {
            
    LicenseInitInfo licenseInitInfo = this->getLicenseInitInfo();;
    
console.log("License ID: " +licenseInitInfo.getLicenseId());
    

    BasicArrayList list = licenseInitInfo.getServerList();;
    

    int32_t size = list.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
console.log("Lic Serv: " +list.get(index));
    
}


                //: 
} catch(e) 
            {
console.log("Error: " +e);
    
e.printStackTrace();
    
}

}


};

            

