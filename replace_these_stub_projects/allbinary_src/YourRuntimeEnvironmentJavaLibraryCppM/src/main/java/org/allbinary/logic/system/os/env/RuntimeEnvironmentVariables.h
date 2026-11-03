
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_OS_ENV_RUNTIMEENVIRONMENTVARIABLES_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_OS_ENV_RUNTIMEENVIRONMENTVARIABLES_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/ProcessBuilder.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Runtime.h"
        
            #include "java/lang/System.h"
        
#include <java/io/BufferedReader.h>
#include <java/io/InputStreamReader.h>
#include <java/util/Properties.h>
class LogUtil;
class GenericOperatingSystem;
class OperatingSystemFactory;
class OperatingSystems;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class RuntimeEnvironmentVariables
            : public virtual Object
         {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

public: RuntimeEnvironmentVariables();

    public: std::string getTest1();

    public: std::string getVariable(std::string var);

    public: Properties* get();

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

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_SYSTEM_OS_ENV_RUNTIMEENVIRONMENTVARIABLES_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_SYSTEM_OS_ENV_RUNTIMEENVIRONMENTVARIABLES_H_COMPLETE
        #if __has_include(<java/io/BufferedReader.h>)
#include <java/io/BufferedReader.h>
#endif
#if __has_include(<java/io/InputStreamReader.h>)
#include <java/io/InputStreamReader.h>
#endif
#if __has_include(<java/util/Properties.h>)
#include <java/util/Properties.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/system/os/GenericOperatingSystem.h>)
#include <org/allbinary/logic/system/os/GenericOperatingSystem.h>
#endif
#if __has_include(<org/allbinary/logic/system/os/OperatingSystemFactory.h>)
#include <org/allbinary/logic/system/os/OperatingSystemFactory.h>
#endif
#if __has_include(<org/allbinary/logic/system/os/OperatingSystems.h>)
#include <org/allbinary/logic/system/os/OperatingSystems.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif

        #endif
    
