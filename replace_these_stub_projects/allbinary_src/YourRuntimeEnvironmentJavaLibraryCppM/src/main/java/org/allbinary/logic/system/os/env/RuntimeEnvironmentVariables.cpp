
        /* Generated Code Do Not Modify */
        



            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/Runtime.h"
        
            #include "../../../../../../java/lang/System.h"
        
#include <java/io/BufferedReader.h>

      
#include <java/io/InputStreamReader.h>

      
#include <java/util/Properties.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/os/GenericOperatingSystem.h>

      
#include <org/allbinary/logic/system/os/OperatingSystemFactory.h>

      
#include <org/allbinary/logic/system/os/OperatingSystems.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Process.h"

class RuntimeEnvironmentVariables
            : public Object
         {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

public constructor (){

            super();
        }


    public string getTest1(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return System.getProperty("java.java.home");;
    
}


    public string getVariable(string var){

    environmentVariables: Properties = this.get()!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return environmentVariables!.getProperty(var);;
    
}


    public Properties get(){

        try {
            
    process: Process;;
    

    environmentVariables: Properties = new Properties();;
    

    operatingSystemInterface: GenericOperatingSystem = OperatingSystemFactory.getInstance()!.getOperatingSystemInstance()!;;
    

    osName: string = operatingSystemInterface!.getName()!;;
    

    linuxCommand: string = "env";;
    

    windowsCommand: string = "cmd.exe /c set";;
    

    solarisCommand: string = linuxCommand;;
    

    operatingSystems: OperatingSystems = OperatingSystems.getInstance()!;;
    

                        if(osName!.compareTo(operatingSystems!.LINUX) == 0)
                        
                                    {
                                    process= Runtime.getRuntime()!.exec(linuxCommand);
    

                                    }
                                
                             else 
                        if(osName!.indexOf(operatingSystems!.WINDOWS) >= 0)
                        
                                    {
                                    process= Runtime.getRuntime()!.exec(windowsCommand);
    

                                    }
                                
                             else 
                        if(osName!.compareTo(operatingSystems!.SOLARIS) == 0)
                        
                                    {
                                    process= Runtime.getRuntime()!.exec(solarisCommand);
    

                                    }
                                
                        else {
                            


                            throw new Exception();
                    

                        }
                            

    processInputStreamReader: InputStreamReader = new InputStreamReader(process.getInputStream());;
    

    bufferedReader: BufferedReader = new BufferedReader(processInputStreamReader);;
    

    keyValuePair: string;;
    

        while((keyValuePair= bufferedReader!.readLine()) != 
                                    null
                                )
        {

    index: int32_t = keyValuePair!.indexOf('=')!;;
    

    key: string = keyValuePair!.substring(0, index)!;;
    

    value: string = keyValuePair!.substring(index +1)!;;
    
environmentVariables!.put(key, value);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return environmentVariables;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.OSERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "get()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public string getTempDir(){

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return System.getProperty("java.io.tmpdir");;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.OSERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "getTempDir()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public string getLibraryPath(){

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return System.getProperty("java.library.path");;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.OSERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "getLibraryPath()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public string getClassPath(){

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return System.getProperty("java.class.path");;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.OSERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "getClassPath()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public updateLibraryPath(string libPath){

        try {
            
    existingPath: string = this.getLibraryPath()!;;
    
System.setProperty("java.library.path", libPath +":" +existingPath);
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.OSERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "updateLibraryPath()", e);
    

                                    }
                                
}

}


    public string getUserHome(){

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return System.getProperty("user.home");;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.OSERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "getUserHome()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public string getUserDir(){

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return System.getProperty("user.dir");;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.OSERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "getUserDir()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public set(){

        try {
            
                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.OSERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "get()", e);
    

                                    }
                                
}

}


    public setVariable(string var, string val){

        try {
            
    process: Process;;
    

    operatingSystemInterface: GenericOperatingSystem = OperatingSystemFactory.getInstance()!.getOperatingSystemInstance()!;;
    

    operatingSystems: OperatingSystems = OperatingSystems.getInstance()!;;
    

    osName: string = operatingSystemInterface!.getName()!;;
    

    windowsCommand: string = "cmd.exe /c set" +var +"=" +val;;
    

                        if(osName!.compareTo(operatingSystems!.LINUX) == 0)
                        
                                    {
                                    


                            throw new Exception();
                    

                                    }
                                
                             else 
                        if(osName!.indexOf(operatingSystems!.WINDOWS) >= 0)
                        
                                    {
                                    process= Runtime.getRuntime()!.exec(windowsCommand);
    

                                    }
                                
                             else 
                        if(osName!.compareTo(operatingSystems!.SOLARIS) == 0)
                        
                                    {
                                    


                            throw new Exception();
                    

                                    }
                                
                        else {
                            


                            throw new Exception();
                    

                        }
                            

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.OSERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "setVariable()", e);
    

                                    }
                                
}

}


};

            

