
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
        

    private: static stdinput: BufferedReader = new BufferedReader(new InputStreamReader(System.in));

                //@Throws(Exception.constructor)
            
    public static main(std::vector<string> args){

    initInfo: SetLicenseInitInfo = new SetLicenseInitInfo(args);;
    
initInfo!.createNewLicenseInitInfo(new BasicArrayListD());
    
}


    private: vector: BasicArrayList = new BasicArrayListD();

public constructor (std::vector<string> options){

            super();
        LicenseInitInfoUtil.getInstance()!.setFilePath(PrintLicenseInitInfo.PATH +PATH_GLOBALS.getInstance()!.INIT_PATH);
    




                        for (
    index: int32_t = 1;index < options.length; index++)
        {
this.vector.add(options[index]!);
    
}

}


                //@Throws(Exception.constructor)
            
    public LicenseInitInfo getLicenseInitInfo(){

    licenseInitInfoUtil: LicenseInitInfoUtil = LicenseInitInfoUtil.getInstance()!;;
    

                        if(FileFactory.getInstance()!.isFile(licenseInitInfoUtil!.INITFILENAME))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return licenseInitInfoUtil!.read();;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new LicenseInitInfo();
    

                        }
                            
}


    public createNewLicenseInitInfo(BasicArrayList licenceServerVector){

        try {
            
                        if(licenceServerVector == 
                                    null
                                )
                        
                                    {
                                    


                            throw new Exception("null Vector Passed - Just Make Empty if you want");
                    

                                    }
                                

    licenseInitInfo: LicenseInitInfo = this.getLicenseInitInfo()!;;
    
console.log("License Serv Example: http://www.dartstatistics.com/LicServ/serverssl.php");
    
licenseInitInfo!.clearServers();
    

    file: File = new File(PrintLicenseInitInfo.PATH +"licenseservers.txt");;
    

    reader: FileReader = new FileReader(file);;
    

    lineNumberReader: LineNumberReader = new LineNumberReader(reader);;
    

        while(true)
        {

    line: string = lineNumberReader!.readLine()!;;
    

                        if(line != 
                                    null
                                )
                        
                                    {
                                    licenseInitInfo!.addServer(line);
    

                                    }
                                
                        else {
                            break;

                    

                        }
                            
}

LicenseInitInfoUtil.getInstance()!.write(licenseInitInfo);
    
LicenseInitInfoUtil.getInstance()!.read();
    

                //: 
} catch(e) 
            {
console.log("Error: " +e);
    
e.printStackTrace();
    
}

}


};

            

