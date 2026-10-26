
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
        



            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/system/hardware/HardwareInterface.h>

      
#include <org/allbinary/logic/system/hardware/components/interfaces/BridgeInterface.h>

      
#include <org/allbinary/logic/system/hardware/components/interfaces/CpuInterface.h>

      
#include <org/allbinary/logic/system/hardware/components/interfaces/EthernetInterface.h>

      
#include <org/allbinary/logic/system/hardware/components/interfaces/FireWireInterface.h>

      
#include <org/allbinary/logic/system/hardware/components/interfaces/HardDriveControllerInterface.h>

      
#include <org/allbinary/logic/system/hardware/components/interfaces/HardDriveInterface.h>

      
#include <org/allbinary/logic/system/hardware/components/interfaces/HardwareComponentInterface.h>

      
#include <org/allbinary/logic/system/hardware/components/interfaces/MachineAccessControlAddressInterface.h>

      
#include <org/allbinary/logic/system/hardware/components/interfaces/MediaInterface.h>

      
#include <org/allbinary/logic/system/hardware/components/interfaces/MonitorInterface.h>

      
#include <org/allbinary/logic/system/hardware/components/interfaces/UsbInterface.h>

      
#include <org/allbinary/logic/system/hardware/components/interfaces/VideoInterface.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LinuxHardware
            : public Object
        : public HardwareInterface {

public: LinuxHardware(){
}


    public: MediaInterface getMultimedia(int32_t index){



                            throw RuntimeException();
                    
}


    public: BridgeInterface getBridge(int32_t index){



                            throw RuntimeException();
                    
}


    public: CpuInterface getCpu(int32_t index){



                            throw RuntimeException();
                    
}


    public: EthernetInterface getEthernet(int32_t index){



                            throw RuntimeException();
                    
}


    public: FireWireInterface getFireWire(int32_t index){



                            throw RuntimeException();
                    
}


    public: HardDriveControllerInterface getHardDriveController(int32_t index){



                            throw RuntimeException();
                    
}


    public: HardDriveInterface getHardDrive(int32_t index){



                            throw RuntimeException();
                    
}


    public: MachineAccessControlAddressInterface getMachineAccessControlAddress(int32_t index){



                            throw RuntimeException();
                    
}


    public: MonitorInterface getMonitor(int32_t index){



                            throw RuntimeException();
                    
}


    public: UsbInterface getUsb(int32_t index){



                            throw RuntimeException();
                    
}


    public: VideoInterface getVideo(int32_t index){



                            throw RuntimeException();
                    
}


    public: HardwareComponentInterface getComponent(int32_t index){



                            throw RuntimeException();
                    
}


    public: std::string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil::getInstance().EMPTY_STRING;
    
}


    public: bool compareTo(HardwareInterface hardwareInterface){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    public: ABHashtable<Object*, Object*> difference(HardwareInterface hardwareInterface){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StdUtil::getInstance().NULL_TABLE;
    
}


    public: bool isNextHardware(std::string nextLine){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


};

            

