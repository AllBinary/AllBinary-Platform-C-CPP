
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_WINDOWS_WINDOWSHARDWARE_CPP
        #define ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_WINDOWS_WINDOWSHARDWARE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/system/hardware/windows/WindowsHardware.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
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
        

WindowsHardware::WindowsHardware(){
}


    auto WindowsHardware::getMultimedia(int32_t index) -> MediaInterface*{



                            throw RuntimeException();
                    
}


    auto WindowsHardware::getBridge(int32_t index) -> BridgeInterface*{



                            throw RuntimeException();
                    
}


    auto WindowsHardware::getCpu(int32_t index) -> CpuInterface*{



                            throw RuntimeException();
                    
}


    auto WindowsHardware::getEthernet(int32_t index) -> EthernetInterface*{



                            throw RuntimeException();
                    
}


    auto WindowsHardware::getFireWire(int32_t index) -> FireWireInterface*{



                            throw RuntimeException();
                    
}


    auto WindowsHardware::getHardDriveController(int32_t index) -> HardDriveControllerInterface*{



                            throw RuntimeException();
                    
}


    auto WindowsHardware::getHardDrive(int32_t index) -> HardDriveInterface*{



                            throw RuntimeException();
                    
}


    auto WindowsHardware::getMachineAccessControlAddress(int32_t index) -> MachineAccessControlAddressInterface*{



                            throw RuntimeException();
                    
}


    auto WindowsHardware::getMonitor(int32_t index) -> MonitorInterface*{



                            throw RuntimeException();
                    
}


    auto WindowsHardware::getUsb(int32_t index) -> UsbInterface*{



                            throw RuntimeException();
                    
}


    auto WindowsHardware::getVideo(int32_t index) -> VideoInterface*{



                            throw RuntimeException();
                    
}


    auto WindowsHardware::getComponent(int32_t index) -> HardwareComponentInterface*{



                            throw RuntimeException();
                    
}


    auto WindowsHardware::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return StringUtil::getInstance()->EMPTY_STRING;
    
}


    auto WindowsHardware::compareTo(HardwareInterface* hardwareInterface) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    
}


    auto WindowsHardware::difference(HardwareInterface* hardwareInterface) -> ABHashtable<Object*, Object*>*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return StdUtil::getInstance()->NULL_TABLE;
    
}




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_WINDOWS_WINDOWSHARDWARE_CPP
