
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

            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
#include <java/io/FileReader.h>

      
#include <java/io/LineNumberReader.h>

      
#include <java/util/HashMap.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/file/FilePathData.h>

      
#include <org/allbinary/logic/io/file/directory/SubDirectory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/hardware/components/interfaces/CpuInterface.h>

      
#include <org/allbinary/logic/system/hardware/components/interfaces/HardwareComponentInterface.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CpuInfo.h"

class Cpu
            : public Object
        : public CpuInterface, public HardwareComponentInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const std::string CPUFILE = "/proc/cpuinfo";

    private: HashMap<any, any> cpuHashMap;

public: Cpu(std::string filePath);

public: Cpu();

                //@Throws(Exception.constructor)
            
    private: void init(std::string filePath);

                //@Throws(Exception.constructor)
            
    private: void init(LineNumberReader lineNumberReader, std::string filePath);

    public: std::string getProcessor();

    public: std::string getVendorId();

    public: std::string getCpuFamily();

    public: std::string getModel();

    public: std::string getModelName();

    public: std::string getStepping();

    public: std::string getCpuSpeed();

    public: std::string getCacheSize();

    public: bool compareTo(CpuInterface cpuInterface);

    public: bool compareTo(HardwareComponentInterface componentInterface);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_LINUX_CPU_H
