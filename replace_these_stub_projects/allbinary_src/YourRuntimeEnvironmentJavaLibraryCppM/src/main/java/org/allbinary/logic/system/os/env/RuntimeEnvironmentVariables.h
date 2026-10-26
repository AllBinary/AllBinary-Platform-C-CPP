
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_OS_ENV_RUNTIMEENVIRONMENTVARIABLES_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_OS_ENV_RUNTIMEENVIRONMENTVARIABLES_H

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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Process.h"

class RuntimeEnvironmentVariables
            : public Object
         {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

public: RuntimeEnvironmentVariables();

    public: std::string getTest1();

    public: std::string getVariable(std::string var);

    public: Properties get();

    public: std::string getTempDir();

    public: std::string getLibraryPath();

    public: std::string getClassPath();

    public: void updateLibraryPath(std::string libPath);

    public: std::string getUserHome();

    public: std::string getUserDir();

    public: void set();

    public: void setVariable(std::string var, std::string val);

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_OS_ENV_RUNTIMEENVIRONMENTVARIABLES_H
