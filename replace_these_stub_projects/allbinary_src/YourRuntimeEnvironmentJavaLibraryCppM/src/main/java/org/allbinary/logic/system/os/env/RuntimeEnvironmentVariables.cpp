
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_OS_ENV_RUNTIMEENVIRONMENTVARIABLES_CPP
        #define ORG_ALLBINARY_LOGIC_SYSTEM_OS_ENV_RUNTIMEENVIRONMENTVARIABLES_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/system/os/env/RuntimeEnvironmentVariables.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Runtime.h"
        
            #include "java/lang/System.h"
        
#include <java/io/BufferedReader.h>

      
#include <java/io/InputStreamReader.h>

      
#include <java/util/Properties.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/os/GenericOperatingSystem.h>

      
#include <org/allbinary/logic/system/os/OperatingSystemFactory.h>

      
#include <org/allbinary/logic/system/os/OperatingSystems.h>

      
#include <org/allbinary/string/CommonStrings.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/system/os/env/Process.h"


RuntimeEnvironmentVariables::RuntimeEnvironmentVariables() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
}


    auto RuntimeEnvironmentVariables::getTest1() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return System.getProperty("java.java.home");;
    
}


    auto RuntimeEnvironmentVariables::getVariable(std::string var) -> std::string{

    Properties* environmentVariables = this->get();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return environmentVariables->getProperty(var);;
    
}


    auto RuntimeEnvironmentVariables::get() -> Properties*{

        try {
            
    Process* process;;
    

    Properties* environmentVariables = new Properties();;
    

    GenericOperatingSystem* operatingSystemInterface = OperatingSystemFactory::getInstance()->getOperatingSystemInstance();;
    

    std::string osName = operatingSystemInterface->getName();;
    

    std::string linuxCommand = "env";;
    

    std::string windowsCommand = "cmd.exe /c set";;
    

    std::string solarisCommand = linuxCommand;;
    

    OperatingSystems* operatingSystems = OperatingSystems::getInstance();;
    

                        if(osName.compare(operatingSystems->LINUX) == 0)
                        
                                    {
                                    process= Runtime::getRuntime()->exec(linuxCommand);
    

                                    }
                                
                             else 
                        if(JavaString::indexOf(osName, operatingSystems->WINDOWS) >= 0)
                        
                                    {
                                    process= Runtime::getRuntime()->exec(windowsCommand);
    

                                    }
                                
                             else 
                        if(osName.compare(operatingSystems->SOLARIS) == 0)
                        
                                    {
                                    process= Runtime::getRuntime()->exec(solarisCommand);
    

                                    }
                                
                        else {
                            


                            throw Exception();
                    

                        }
                            

    InputStreamReader* processInputStreamReader = new InputStreamReader(process->getInputStream());;
    

    BufferedReader* bufferedReader = new BufferedReader(processInputStreamReader);;
    

    std::string keyValuePair;;
    

        while((keyValuePair= bufferedReader->readLine()) != 
                                    nullptr
                                )
        {

    int32_t index = JavaString::indexOf(keyValuePair, '=');;
    

    std::string key = JavaString::substring(keyValuePair, 0, index);;
    

    std::string value = JavaString::substring(keyValuePair, index +1);;
    
environmentVariables->put(key, value);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return environmentVariables;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->OSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "get()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}


    auto RuntimeEnvironmentVariables::getTempDir() -> std::string{

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return System.getProperty("java.io.tmpdir");;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->OSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "getTempDir()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}


    auto RuntimeEnvironmentVariables::getLibraryPath() -> std::string{

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return System.getProperty("java.library.path");;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->OSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "getLibraryPath()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}


    auto RuntimeEnvironmentVariables::getClassPath() -> std::string{

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return System.getProperty("java.class.path");;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->OSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "getClassPath()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}


    auto RuntimeEnvironmentVariables::updateLibraryPath(std::string libPath) -> void{

        try {
            
    std::string existingPath = this->getLibraryPath();;
    
System.setProperty("java.library.path", JavaString::valueOf(JavaString::valueOf(libPath) +JavaString::valueOf(":")) +JavaString::valueOf(existingPath));
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->OSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "updateLibraryPath()", &e);
    

                                    }
                                
}

}


    auto RuntimeEnvironmentVariables::getUserHome() -> std::string{

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return System.getProperty("user.home");;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->OSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "getUserHome()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}


    auto RuntimeEnvironmentVariables::getUserDir() -> std::string{

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return System.getProperty("user.dir");;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->OSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "getUserDir()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}


    auto RuntimeEnvironmentVariables::set() -> void{

        try {
            
                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->OSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "get()", &e);
    

                                    }
                                
}

}


    auto RuntimeEnvironmentVariables::setVariable(std::string var, std::string val) -> void{

        try {
            
    Process* process;;
    

    GenericOperatingSystem* operatingSystemInterface = OperatingSystemFactory::getInstance()->getOperatingSystemInstance();;
    

    OperatingSystems* operatingSystems = OperatingSystems::getInstance();;
    

    std::string osName = operatingSystemInterface->getName();;
    

    std::string windowsCommand = JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("cmd.exe /c set") +JavaString::valueOf(var)) +JavaString::valueOf("=")) +JavaString::valueOf(val);;
    

                        if(osName.compare(operatingSystems->LINUX) == 0)
                        
                                    {
                                    


                            throw Exception();
                    

                                    }
                                
                             else 
                        if(JavaString::indexOf(osName, operatingSystems->WINDOWS) >= 0)
                        
                                    {
                                    process= Runtime::getRuntime()->exec(windowsCommand);
    

                                    }
                                
                             else 
                        if(osName.compare(operatingSystems->SOLARIS) == 0)
                        
                                    {
                                    


                            throw Exception();
                    

                                    }
                                
                        else {
                            


                            throw Exception();
                    

                        }
                            

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->OSERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "setVariable()", &e);
    

                                    }
                                
}

}




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_OS_ENV_RUNTIMEENVIRONMENTVARIABLES_CPP
