
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_LINUX_CPUINFO_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_LINUX_CPUINFO_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CpuInfo
            : public virtual Object
         {

    private: static CpuInfo* PROCESSOR_owner();
    public: static CpuInfo* PROCESSOR;

    private: static CpuInfo* VENDORID_owner();
    public: static CpuInfo* VENDORID;

    private: static CpuInfo* CPUFAMILY_owner();
    public: static CpuInfo* CPUFAMILY;

    private: static CpuInfo* MODEL_owner();
    public: static CpuInfo* MODEL;

    private: static CpuInfo* MODELNAME_owner();
    public: static CpuInfo* MODELNAME;

    private: static CpuInfo* STEPPING_owner();
    public: static CpuInfo* STEPPING;

    private: static CpuInfo* CPUMHZ_owner();
    public: static CpuInfo* CPUMHZ;

    private: static CpuInfo* CACHESIZE_owner();
    public: static CpuInfo* CACHESIZE;

    private: static CpuInfo* FDIVBUG_owner();
    public: static CpuInfo* FDIVBUG;

    private: static CpuInfo* HLTBUG_owner();
    public: static CpuInfo* HLTBUG;

    private: static CpuInfo* F00FBUG_owner();
    public: static CpuInfo* F00FBUG;

    private: static CpuInfo* COMABUG_owner();
    public: static CpuInfo* COMABUG;

    private: static CpuInfo* FPU_owner();
    public: static CpuInfo* FPU;

    private: static CpuInfo* FPUEXCEPTION_owner();
    public: static CpuInfo* FPUEXCEPTION;

    private: static CpuInfo* CPUIDLEVEL_owner();
    public: static CpuInfo* CPUIDLEVEL;

    private: static CpuInfo* WP_owner();
    public: static CpuInfo* WP;

    private: static CpuInfo* FLAGS_owner();
    public: static CpuInfo* FLAGS;

    private: static CpuInfo* BOGOMIPS_owner();
    public: static CpuInfo* BOGOMIPS;

    private: std::string name;

private: CpuInfo(std::string name);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_LINUX_CPUINFO_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_LINUX_CPUINFO_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_LINUX_CPUINFO_H_COMPLETE
        
        #endif
    
