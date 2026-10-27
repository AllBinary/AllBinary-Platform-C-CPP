
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_LINUX_CPU_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_LINUX_CPU_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/FileReader.h>
#include <java/io/LineNumberReader.h>
#include <java/util/HashMap.h>
class StdUtil;
class LogUtil;
class LogConfigTypeFactory;
class LogConfigTypes;
class AbFile;
class FilePathData;
class SubDirectory;
class StringMaker;
#include <org/allbinary/logic/system/hardware/components/interfaces/CpuInterface.h>
#include <org/allbinary/logic/system/hardware/components/interfaces/HardwareComponentInterface.h>
class CommonLabels;
class CommonSeps;
class CommonStrings;
class BasicArrayList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class CpuInfo;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class Cpu
            : public virtual Object
        , public CpuInterface, public HardwareComponentInterface {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    private: const std::string CPUFILE = "/proc/cpuinfo";

    private: HashMap<Object*, Object*>* cpuHashMap;

public: Cpu(std::string filePath);

public: Cpu();

                //@Throws(Exception.constructor)
            
    private: void init(std::string filePath);

                //@Throws(Exception.constructor)
            
    private: void init(LineNumberReader* lineNumberReader, std::string filePath);

    public: std::string getProcessor();

    public: std::string getVendorId();

    public: std::string getCpuFamily();

    public: std::string getModel();

    public: std::string getModelName();

    public: std::string getStepping();

    public: std::string getCpuSpeed();

    public: std::string getCacheSize();

    public: bool compareTo(CpuInterface* cpuInterface);

    public: bool compareTo(HardwareComponentInterface* componentInterface);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_LINUX_CPU_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_LINUX_CPU_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_LINUX_CPU_H_COMPLETE
        #if __has_include(<java/io/FileReader.h>)
#include <java/io/FileReader.h>
#endif
#if __has_include(<java/io/LineNumberReader.h>)
#include <java/io/LineNumberReader.h>
#endif
#if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>)
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>)
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/AbFile.h>)
#include <org/allbinary/logic/io/file/AbFile.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/FilePathData.h>)
#include <org/allbinary/logic/io/file/FilePathData.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/directory/SubDirectory.h>)
#include <org/allbinary/logic/io/file/directory/SubDirectory.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/system/hardware/components/interfaces/CpuInterface.h>)
#include <org/allbinary/logic/system/hardware/components/interfaces/CpuInterface.h>
#endif
#if __has_include(<org/allbinary/logic/system/hardware/components/interfaces/HardwareComponentInterface.h>)
#include <org/allbinary/logic/system/hardware/components/interfaces/HardwareComponentInterface.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include("org/allbinary/logic/system/hardware/components/linux/CpuInfo.h")
#include "org/allbinary/logic/system/hardware/components/linux/CpuInfo.h"
#endif

        #endif
    
