
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

            #include "../../../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CpuInfo
            : public Object
         {

    public: static const CpuInfo PROCESSOR = CpuInfo("processor");

    public: static const CpuInfo VENDORID = CpuInfo("vendor_id");

    public: static const CpuInfo CPUFAMILY = CpuInfo("cpu family");

    public: static const CpuInfo MODEL = CpuInfo("model");

    public: static const CpuInfo MODELNAME = CpuInfo("model name");

    public: static const CpuInfo STEPPING = CpuInfo("stepping");

    public: static const CpuInfo CPUMHZ = CpuInfo("cpu MHz");

    public: static const CpuInfo CACHESIZE = CpuInfo("cache size");

    public: static const CpuInfo FDIVBUG = CpuInfo("fdiv_bug");

    public: static const CpuInfo HLTBUG = CpuInfo("hlt_bug");

    public: static const CpuInfo F00FBUG = CpuInfo("f00f_bug");

    public: static const CpuInfo COMABUG = CpuInfo("coma_bug");

    public: static const CpuInfo FPU = CpuInfo("fpu");

    public: static const CpuInfo FPUEXCEPTION = CpuInfo("fpu_exception");

    public: static const CpuInfo CPUIDLEVEL = CpuInfo("cache size");

    public: static const CpuInfo WP = CpuInfo("yes");

    public: static const CpuInfo FLAGS = CpuInfo("flags");

    public: static const CpuInfo BOGOMIPS = CpuInfo("bogomips");

    private: std::string name;

private: CpuInfo(std::string name);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_LINUX_CPUINFO_H
