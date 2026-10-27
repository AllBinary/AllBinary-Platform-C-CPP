
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CpuInfo
            : public Object
         {

    public: static CpuInfo* PROCESSOR() { static std::unique_ptr<CpuInfo> value(new CpuInfo("processor")); return value.get(); }

    public: static CpuInfo* VENDORID() { static std::unique_ptr<CpuInfo> value(new CpuInfo("vendor_id")); return value.get(); }

    public: static CpuInfo* CPUFAMILY() { static std::unique_ptr<CpuInfo> value(new CpuInfo("cpu family")); return value.get(); }

    public: static CpuInfo* MODEL() { static std::unique_ptr<CpuInfo> value(new CpuInfo("model")); return value.get(); }

    public: static CpuInfo* MODELNAME() { static std::unique_ptr<CpuInfo> value(new CpuInfo("model name")); return value.get(); }

    public: static CpuInfo* STEPPING() { static std::unique_ptr<CpuInfo> value(new CpuInfo("stepping")); return value.get(); }

    public: static CpuInfo* CPUMHZ() { static std::unique_ptr<CpuInfo> value(new CpuInfo("cpu MHz")); return value.get(); }

    public: static CpuInfo* CACHESIZE() { static std::unique_ptr<CpuInfo> value(new CpuInfo("cache size")); return value.get(); }

    public: static CpuInfo* FDIVBUG() { static std::unique_ptr<CpuInfo> value(new CpuInfo("fdiv_bug")); return value.get(); }

    public: static CpuInfo* HLTBUG() { static std::unique_ptr<CpuInfo> value(new CpuInfo("hlt_bug")); return value.get(); }

    public: static CpuInfo* F00FBUG() { static std::unique_ptr<CpuInfo> value(new CpuInfo("f00f_bug")); return value.get(); }

    public: static CpuInfo* COMABUG() { static std::unique_ptr<CpuInfo> value(new CpuInfo("coma_bug")); return value.get(); }

    public: static CpuInfo* FPU() { static std::unique_ptr<CpuInfo> value(new CpuInfo("fpu")); return value.get(); }

    public: static CpuInfo* FPUEXCEPTION() { static std::unique_ptr<CpuInfo> value(new CpuInfo("fpu_exception")); return value.get(); }

    public: static CpuInfo* CPUIDLEVEL() { static std::unique_ptr<CpuInfo> value(new CpuInfo("cache size")); return value.get(); }

    public: static CpuInfo* WP() { static std::unique_ptr<CpuInfo> value(new CpuInfo("yes")); return value.get(); }

    public: static CpuInfo* FLAGS() { static std::unique_ptr<CpuInfo> value(new CpuInfo("flags")); return value.get(); }

    public: static CpuInfo* BOGOMIPS() { static std::unique_ptr<CpuInfo> value(new CpuInfo("bogomips")); return value.get(); }

    private: std::string name;

private: CpuInfo(std::string name){
this->name= name;
    
}


    public: std::string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


};

            

