
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_OS_ENV_RUNTIMEENVIRONMENTVARIABLES_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_OS_ENV_RUNTIMEENVIRONMENTVARIABLES_H

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

public constructor ();

    public string getTest1();

    public string getVariable(string var);

    public Properties get();

    public string getTempDir();

    public string getLibraryPath();

    public string getClassPath();

    public updateLibraryPath(string libPath);

    public string getUserHome();

    public string getUserDir();

    public set();

    public setVariable(string var, string val);

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_OS_ENV_RUNTIMEENVIRONMENTVARIABLES_H
