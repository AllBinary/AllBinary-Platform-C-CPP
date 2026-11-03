
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_LINUX_CPUINFO_CPP
        #define ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_LINUX_CPUINFO_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/system/hardware/components/linux/CpuInfo.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

CpuInfo::CpuInfo(std::string name){
this->name= name;
    
}


    auto CpuInfo::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->name;
    
}

auto CpuInfo::PROCESSOR_owner() -> CpuInfo* { static std::unique_ptr<CpuInfo> value(new CpuInfo("processor")); return value.get(); }
CpuInfo* CpuInfo::PROCESSOR = CpuInfo::PROCESSOR_owner();
auto CpuInfo::VENDORID_owner() -> CpuInfo* { static std::unique_ptr<CpuInfo> value(new CpuInfo("vendor_id")); return value.get(); }
CpuInfo* CpuInfo::VENDORID = CpuInfo::VENDORID_owner();
auto CpuInfo::CPUFAMILY_owner() -> CpuInfo* { static std::unique_ptr<CpuInfo> value(new CpuInfo("cpu family")); return value.get(); }
CpuInfo* CpuInfo::CPUFAMILY = CpuInfo::CPUFAMILY_owner();
auto CpuInfo::MODEL_owner() -> CpuInfo* { static std::unique_ptr<CpuInfo> value(new CpuInfo("model")); return value.get(); }
CpuInfo* CpuInfo::MODEL = CpuInfo::MODEL_owner();
auto CpuInfo::MODELNAME_owner() -> CpuInfo* { static std::unique_ptr<CpuInfo> value(new CpuInfo("model name")); return value.get(); }
CpuInfo* CpuInfo::MODELNAME = CpuInfo::MODELNAME_owner();
auto CpuInfo::STEPPING_owner() -> CpuInfo* { static std::unique_ptr<CpuInfo> value(new CpuInfo("stepping")); return value.get(); }
CpuInfo* CpuInfo::STEPPING = CpuInfo::STEPPING_owner();
auto CpuInfo::CPUMHZ_owner() -> CpuInfo* { static std::unique_ptr<CpuInfo> value(new CpuInfo("cpu MHz")); return value.get(); }
CpuInfo* CpuInfo::CPUMHZ = CpuInfo::CPUMHZ_owner();
auto CpuInfo::CACHESIZE_owner() -> CpuInfo* { static std::unique_ptr<CpuInfo> value(new CpuInfo("cache size")); return value.get(); }
CpuInfo* CpuInfo::CACHESIZE = CpuInfo::CACHESIZE_owner();
auto CpuInfo::FDIVBUG_owner() -> CpuInfo* { static std::unique_ptr<CpuInfo> value(new CpuInfo("fdiv_bug")); return value.get(); }
CpuInfo* CpuInfo::FDIVBUG = CpuInfo::FDIVBUG_owner();
auto CpuInfo::HLTBUG_owner() -> CpuInfo* { static std::unique_ptr<CpuInfo> value(new CpuInfo("hlt_bug")); return value.get(); }
CpuInfo* CpuInfo::HLTBUG = CpuInfo::HLTBUG_owner();
auto CpuInfo::F00FBUG_owner() -> CpuInfo* { static std::unique_ptr<CpuInfo> value(new CpuInfo("f00f_bug")); return value.get(); }
CpuInfo* CpuInfo::F00FBUG = CpuInfo::F00FBUG_owner();
auto CpuInfo::COMABUG_owner() -> CpuInfo* { static std::unique_ptr<CpuInfo> value(new CpuInfo("coma_bug")); return value.get(); }
CpuInfo* CpuInfo::COMABUG = CpuInfo::COMABUG_owner();
auto CpuInfo::FPU_owner() -> CpuInfo* { static std::unique_ptr<CpuInfo> value(new CpuInfo("fpu")); return value.get(); }
CpuInfo* CpuInfo::FPU = CpuInfo::FPU_owner();
auto CpuInfo::FPUEXCEPTION_owner() -> CpuInfo* { static std::unique_ptr<CpuInfo> value(new CpuInfo("fpu_exception")); return value.get(); }
CpuInfo* CpuInfo::FPUEXCEPTION = CpuInfo::FPUEXCEPTION_owner();
auto CpuInfo::CPUIDLEVEL_owner() -> CpuInfo* { static std::unique_ptr<CpuInfo> value(new CpuInfo("cache size")); return value.get(); }
CpuInfo* CpuInfo::CPUIDLEVEL = CpuInfo::CPUIDLEVEL_owner();
auto CpuInfo::WP_owner() -> CpuInfo* { static std::unique_ptr<CpuInfo> value(new CpuInfo("yes")); return value.get(); }
CpuInfo* CpuInfo::WP = CpuInfo::WP_owner();
auto CpuInfo::FLAGS_owner() -> CpuInfo* { static std::unique_ptr<CpuInfo> value(new CpuInfo("flags")); return value.get(); }
CpuInfo* CpuInfo::FLAGS = CpuInfo::FLAGS_owner();
auto CpuInfo::BOGOMIPS_owner() -> CpuInfo* { static std::unique_ptr<CpuInfo> value(new CpuInfo("bogomips")); return value.get(); }
CpuInfo* CpuInfo::BOGOMIPS = CpuInfo::BOGOMIPS_owner();



        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_LINUX_CPUINFO_CPP
