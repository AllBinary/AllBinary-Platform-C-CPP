
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
        



            #include "../../../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CpuInfo
            : public Object
         {
        

    public static const PROCESSOR: CpuInfo = new CpuInfo("processor");

    public static const VENDORID: CpuInfo = new CpuInfo("vendor_id");

    public static const CPUFAMILY: CpuInfo = new CpuInfo("cpu family");

    public static const MODEL: CpuInfo = new CpuInfo("model");

    public static const MODELNAME: CpuInfo = new CpuInfo("model name");

    public static const STEPPING: CpuInfo = new CpuInfo("stepping");

    public static const CPUMHZ: CpuInfo = new CpuInfo("cpu MHz");

    public static const CACHESIZE: CpuInfo = new CpuInfo("cache size");

    public static const FDIVBUG: CpuInfo = new CpuInfo("fdiv_bug");

    public static const HLTBUG: CpuInfo = new CpuInfo("hlt_bug");

    public static const F00FBUG: CpuInfo = new CpuInfo("f00f_bug");

    public static const COMABUG: CpuInfo = new CpuInfo("coma_bug");

    public static const FPU: CpuInfo = new CpuInfo("fpu");

    public static const FPUEXCEPTION: CpuInfo = new CpuInfo("fpu_exception");

    public static const CPUIDLEVEL: CpuInfo = new CpuInfo("cache size");

    public static const WP: CpuInfo = new CpuInfo("yes");

    public static const FLAGS: CpuInfo = new CpuInfo("flags");

    public static const BOGOMIPS: CpuInfo = new CpuInfo("bogomips");

    private: name: string;

private constructor (string name){

            super();
        this.name= name;
    
}


    public string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.name;
    
}


};

            

