
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

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

public: RuntimeEnvironmentVariables(){
}


    public: std::string getTest1(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return System.getProperty("java.java.home");;
    
}


    public: std::string getVariable(std::string var){

    Properties environmentVariables = this->get();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return environmentVariables.getProperty(var);;
    
}


    public: Properties get(){

        try {
            
    Process process;;
    

    Properties environmentVariables = Properties();;
    

    GenericOperatingSystem operatingSystemInterface = OperatingSystemFactory::getInstance().getOperatingSystemInstance();;
    

    std::string osName = operatingSystemInterface.getName();;
    

    std::string linuxCommand = "env";;
    

    std::string windowsCommand = "cmd.exe /c set";;
    

    std::string solarisCommand = linuxCommand;;
    

    OperatingSystems operatingSystems = OperatingSystems::getInstance();;
    

                        if(osName.compareTo(operatingSystems.LINUX) == 0)
                        
                                    {
                                    process= Runtime::getRuntime().exec(linuxCommand);
    

                                    }
                                
                             else 
                        if(osName.indexOf(operatingSystems.WINDOWS) >= 0)
                        
                                    {
                                    process= Runtime::getRuntime().exec(windowsCommand);
    

                                    }
                                
                             else 
                        if(osName.compareTo(operatingSystems.SOLARIS) == 0)
                        
                                    {
                                    process= Runtime::getRuntime().exec(solarisCommand);
    

                                    }
                                
                        else {
                            


                            throw Exception();
                    

                        }
                            

    InputStreamReader processInputStreamReader = InputStreamReader(process.getInputStream());;
    

    BufferedReader bufferedReader = BufferedReader(processInputStreamReader);;
    

    std::string keyValuePair;;
    

        while((keyValuePair= bufferedReader.readLine()) != 
                                    nullptr
                                )
        {

    int32_t index = keyValuePair.indexOf('=');;
    

    std::string key = keyValuePair.substring(0, index);;
    

    std::string value = keyValuePair.substring(index +1);;
    
environmentVariables.put(key, value);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return environmentVariables;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().OSERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "get()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public: std::string getTempDir(){

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return System.getProperty("java.io.tmpdir");;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().OSERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "getTempDir()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public: std::string getLibraryPath(){

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return System.getProperty("java.library.path");;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().OSERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "getLibraryPath()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public: std::string getClassPath(){

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return System.getProperty("java.class.path");;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().OSERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "getClassPath()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public: void updateLibraryPath(std::string libPath){

        try {
            
    std::string existingPath = this->getLibraryPath();;
    
System.setProperty("java.library.path", libPath +":" +existingPath);
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().OSERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "updateLibraryPath()", e);
    

                                    }
                                
}

}


    public: std::string getUserHome(){

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return System.getProperty("user.home");;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().OSERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "getUserHome()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public: std::string getUserDir(){

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return System.getProperty("user.dir");;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().OSERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "getUserDir()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public: void set(){

        try {
            
                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().OSERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "get()", e);
    

                                    }
                                
}

}


    public: void setVariable(std::string var, std::string val){

        try {
            
    Process process;;
    

    GenericOperatingSystem operatingSystemInterface = OperatingSystemFactory::getInstance().getOperatingSystemInstance();;
    

    OperatingSystems operatingSystems = OperatingSystems::getInstance();;
    

    std::string osName = operatingSystemInterface.getName();;
    

    std::string windowsCommand = "cmd.exe /c set" +var +"=" +val;;
    

                        if(osName.compareTo(operatingSystems.LINUX) == 0)
                        
                                    {
                                    


                            throw Exception();
                    

                                    }
                                
                             else 
                        if(osName.indexOf(operatingSystems.WINDOWS) >= 0)
                        
                                    {
                                    process= Runtime::getRuntime().exec(windowsCommand);
    

                                    }
                                
                             else 
                        if(osName.compareTo(operatingSystems.SOLARIS) == 0)
                        
                                    {
                                    


                            throw Exception();
                    

                                    }
                                
                        else {
                            


                            throw Exception();
                    

                        }
                            

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().OSERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "setVariable()", e);
    

                                    }
                                
}

}


};

            

