
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_INTERFACES_CPUINTERFACE_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_INTERFACES_CPUINTERFACE_H

















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CpuInterface {

    std::string getProcessor();

    std::string getVendorId();

    std::string getCpuFamily();

    std::string getModel();

    std::string getModelName();

    std::string getStepping();

    std::string getCpuSpeed();

    std::string getCacheSize();

    bool compareTo(CpuInterface cpuInterface);

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_INTERFACES_CPUINTERFACE_H
